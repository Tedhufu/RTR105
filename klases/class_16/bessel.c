#include <stdio.h>
#include <math.h>

void main()
{
  int k=0;
  double x, a, S ,y ,yy;

  printf("Lūdzu ievadiet x argumenta vērtību");
  scanf(" %lf",&x);

  y = j1(2*x);
  printf("y=j1(2*%.2f)=%.2f\n" ,x ,y);

  a = pow(-1,k)*pow(x,2*k)/(1.);
  S = a;  
  printf("a%d\t %.3Lg\t S%d=%.3Lg\n",k,a,k,S);

  while(k<501)
  {
    k++;
    a = -a * x * x / (k*(k+1));
    S = S + a;
    if(k==499||k==500)
    {
    printf("a%d\t %.3Lg\t S%d=%.3Lg\n",k,a,k,S);
    }
  }
  return S*x;
 
  y = j1(2*x);
  printf("standarta funkcija besela fn - y=j1(2*%.2f)=%.2f\n" ,x ,y);

  yy = mans(x);
  printf("lietotaja funkcija - y=mansj1(2*%.2f)=%.2f\n" ,x ,yy);
 }
