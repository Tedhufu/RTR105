#undef __STRICT_ANSI__

#include<stdio.h>
#include<math.h>

void main(){
    float a=0.,b=2*M_PI,x,delta_x=1.e-2;
    //float y;
    printf("%8s\t%8s\t%8s\t%8s\n","x","sin(x)", "cos(x)", "sin'(x)");
    x = a;
    while(x<b)
    {
        //y = sin(x);
        printf("%8.2f\t%8.2f\t%8.2f\t%8.2f\t%8.2f\n",x,sin(x), cos(x),
                (sin(x + delta_x) - sin(x)) / delta_x),
                (sin(x + 2*delta_x) - 2*sin(x + delta_x) + sin(x) / pow(delta_x,2));
        //printf("%10.2f\t%10.2f\n",x,y);
        x += delta_x;//x = x + delta_x;
    }
}