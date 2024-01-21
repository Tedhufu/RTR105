# :bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat:
# Labaratorijas darbs Skaitliskā integrēšana
### Autors: Valts Leitlands
J<sub>1</sub>(2x).

Ceturtajā darbā tika izveidota programma, kura izrēķina funkcijas laukumu izmantojot integrāli.
Aprēķiniem tiek pielietotas 3 metodes: Taisnstūra, Trapeces un Simpsona.
Formulas kas tika pielietotas:

(b-a)*(j1(a*2)+j1(b*2)/2) - Taisnstūris

(b-a)/2*(j1(a*2)+j1(b*2)) - Trapece

(b-a)/6*(j1(a*2) + 4*j1(0.5*(a+b)) +j1(b*2)) - Simpsons

![image](https://github.com/Tedhufu/RTR105/assets/144206387/d17a8f1d-6e1b-42f7-92c2-3e5313521401)


```#include <stdio.h>
#include <math.h>

float taisnsturis(float);
float trapeces(float);
float simpsons(float);

    float a, b, eps, h, integer1=0.,integer2,x;
    int k,n=2;
int main() 
{
    printf("Lūdzu, izvēlieties funkcijas sākuma robežas vērtību a:\n");
    scanf("%f", &a);
    printf("Lūdzu, izvēlieties funkcijas beigu robežas vērtību b:\n");
    scanf("%f", &b);
    printf("Lūdzu, izvēlieties funkcijas precizitātes vērtību eps:\n");
    scanf("%f", &eps);

      printf("Integrala vertiba: %.5f\n", taisnsturis(integer2));
      printf("Integrala vertiba: %.5f\n", trapeces(integer2));
      printf("Integrala vertiba: %.5f\n", simpsons(integer2));
}



float taisnsturis(float)
{
    integer2=(b-a)*(j1(a*2)+j1(b*2)/2);
    while(fabs(integer2-integer1)>eps)
    {
        n*=2;
        h=(b-a)/n;
        integer1=integer2;
        integer2=0.;
        for(k=0;k<n;k++)
        {
            x = (a+(k+0.5)*h);
            integer2 +=h * j1(x*2);
        }
    }
    return (integer2);
}

float trapeces(float)
{
    integer2=(b-a)/2*(j1(a*2)+j1(b*2));
    while(fabs(integer2-integer1)>eps)
    {
        n*=2;
        h=(b-a)/n;
        integer1=integer2;
        integer2=0.;
        for(k=0;k<n;k++)
        {
            x = (a+(k+0.5)*h);
            integer2 +=h * j1(x*2);
        }
    }
    return (integer2);
}

float simpsons(float)
{
    h = (b-a)/2;
    integer2=(b-a)/6*(j1(a*2) + 4*j1(0.5*(a+b)) +j1(b*2));
    while(fabs(integer2-integer1)>eps)
    {
        n*=2;
        h=(b-a)/n;
        integer1=integer2;
        integer2=0.;
        for(k=0;k<n;k++)
        {
            x = (a+(k+0.5)*h);
            integer2 +=h * j1(x*2);
        }
    }
    return (integer2);
}
```
:shipit:
