#include<stdio.h>
#include<math.h>
float modified_sin(float x, float A){
    return sin(x)-A;
}
int main()
{
    float a=0.01, b=1.5*M_PI, x, delta_x=1.e-3/*0.001*/, funkca, funkcb, funkcx, A;
    int k=0;
    scanf("%f",&A);
    funkca= modified_sin(a,A); funkcb = modified_sin(b,A);
    if(funkca*funkcb>0){
        printf("Intervala [%.2f;%.2f] sin(x) funkcijai",a,b);
        printf("saknu nav (vai taja ir paru saknu skaits)\n");
        return 1;
    }
    printf ("                sin(%7.3f)=%7.3f\t\t\t\t",a,modified_sin(a,A));
    printf("sin(%7.3f)=%7.3f\n",b,modified_sin(b,A));

    while((b-a)>delta_x){
        k++;
        x = (a+b)/2.;
        if(funkca*modified_sin(x,A)>0)
            a = x; 
        else
            b = x;
        printf("%2d. interacija: sin(%7.3f)=%7.3f\t",k,a,modified_sin(a,A));
        printf("sin(%7.3f)=%7.3f\t",x,modified_sin(x,A));
        printf("sin(%7.3f)=%7.3f\n",b,modified_sin(b,A));
    }
    printf("Sakne atrodas pie x=%.3f, jo sin(x) ir %.3f\n",x,modified_sin(x,A));
    return 0;
}



void main(){
    float a,x,delta_x,b,y,A;
    a = 0;
    b = 2*M_PI;

    printf("Cien. liet., ludzu, ievadi A vertibu sekojosam vienadojumam: sin(x)=A\n");
    scanf("%f",&A);
    x = a;
    delta_x = 0.1;
    printf("\tx\ty\n");
    while(x<b){
       
        x += delta_x;
    }
}