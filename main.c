#include<stdio.h>
float Integral(float (*f)(float), float a, float b);
float fun1(float x);
float fun2(float x);
int main(void)
{
    float y1,y2;
    y1=Integral(fun1,0.0,1.0);
    y2=Integral(fun2,0.0,3.0);
    printf("y1=%f\ny2=%f\n",y1,y2);
    return 0;
}
float Integral(float (*f)(float), float a, float b)
{
    float h,d;
    int i;
    h=(b-a)/100;
    d=((*f)(a)+(*f)(b))/2;
    for(i=0;i<100;i++)
    {
        d+=(*f)(h*i);
    }
    return h*d;
}
float fun1(float x)
{
    float result;
    result=1+x*x;
    return result;
}
float fun2(float x)
{
    float result;
    result=x/(1+x*x);
    return result;
}
/*#include<stdio.h>
float Integral(float (*f)(float), float a, float b);
float fun1(float x);
float fun2(float x);
int main(void)
{
    float y1,y2;
    y1 =  Integral(fun1, 0.0, 1.0);
    y2 =  Integral(fun2, 0.0, 3.0);
    printf("y1=%.2f\ny2=%.2f\n",y1,y2);
    return 0;
}
float fun1(float x)
{
    return 1+x*x;
}
float fun2(float x)
{
    return x/(1+x*x);
}
float Integral(float (*f)(float), float a, float b)
{
    float s,h;
    int n=100, i;
    s=((*f)(a)+(*f)(b))/2;
    h=(b-a)/n;
    for(i=1;i<100;i++)
    {
        s+=(*f)(a+i*h);
    }
    return s*h;
}*/

