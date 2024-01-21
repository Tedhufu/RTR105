#Labaratorijas darbs Teilora rindas
###Autors: Valts Leitlands
Šajā un turpmākajos 3 darbos tiks izmantota Beseļa funkcija J<sup>1</sup>(2x).

Pirmajā labaratorijas darbā bija vajadzīgs noteikt savas funkcijas n-tā un (n-1)-tā locekļa vērtību, pielietojot rekurences reizinātāju, kā arī izvadot standarta funkcijas aprēķina iznākumu. 
```#include <stdio.h>
#include <math.h>

double mans(long double x)
{
long double a, S;
int k=0;

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
}
int main()
{
 double x, y, yy; 
 

 printf("Lūdzu ievadiet x argumenta vērtību");
 scanf(" %lf",&x);

 y = j1(2*x);
 yy = mans(x);
 printf("standarta funkcija besela fn - y=j1(2*%.2f)=%.2f\n" ,x,y);
 printf("lietotaja funkcija - y=mansj1(2*%.2f)=%.2f\n" ,x,yy);

printf("\n\n");
printf("                 Funkcijas j1(2*x) summas izteiksme: \n");
printf("\n ");
printf("                   500\n ");
printf("                  ______ \n");
printf("                   \\          k    2*k\n ");
printf("                   \\       (-1)  *x \n ");
printf("bessj1(2*x)=>   x*  >   _________________\n ");
printf("                   /        k!*(k+1)!\n ");
printf("                  /_____ \n");
printf("                    k=0\n ");           
printf(" \n");
printf("                               k   2k \n");
printf("                             -1 * x \n");
printf("rekurences reizinātājs:     ___________ \n");
printf("                                1! \n");
return 0;
 }```
