#include <stdio.h>
#include <math.h>

double mans(double x){
double a, S;
int k=0;

a = pow(-1,k)*pow(x,2*k)/(1.);
S = a;
printf("%.2f\t%8.2f\t%8.2f\n",x, a, S);

while(k<10){
  k++;
  a = -a * x * x / (k*(k+1));
  S = S + a;
  printf("%.2f\t%8.2f\t%8.2f\n",x, a, S);
}
return S*x;
}

void main(){
 double x=2.05,y ,yy; 
 y = j1(2*x);
 printf("standarta funkcija besela fn - y=j1(2*%.2f)=%.2f\n" ,x,y);

 yy = mans(x);
 printf("lietotaja funkcija - y=mansj1(2*%.2f)=%.2f\n" ,x,yy);
 }

