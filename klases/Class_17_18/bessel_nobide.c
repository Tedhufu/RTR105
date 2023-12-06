#include<stdio.h>
#include<math.h>

float modified_j1(float x, float A){
    return j1(x*2)-A;
}
void main(){
    float a,x,delta_x,b,y,A;
    a = 0;
    b = 12.5;

    printf("Cien. liet., ludzu, ievadi A vertibu sekojosam vienadojumam: j1(x*2)=A\n");
    scanf("%f",&A);
    x = a;
    delta_x = 0.1;
    printf("\tx\tj1x\ty\n");
    while(x<b){
        printf("%10.1f%10.1f%10.1f\n",x,j1(2*x),modified_j1(x,A));

        x += delta_x;
    }
}