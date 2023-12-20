#include <stdio.h>
#include <math.h>

void main()
{
    float a=0.,b=10, eps=1.e-3,h,integer1=0.,integer2;
    int k,n=2;

    integer2=(b-a)*(j1(a*2)+j1(b*2))/n;
    while(fabs(integer2-integer1)>eps)
    {
        n*=2;
        h=(b-a)/n;
        integer1=integer2;
        integer2=0.;
        for(k=0;k<n;k++)
        {
            integer2+=h*j1( (a+(k+0.5)*h   ) *2);
        }
    }
    printf("Integrala vertiba: %.2f\n", integer2);
}