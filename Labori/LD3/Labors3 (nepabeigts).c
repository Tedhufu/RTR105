#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, x, delta_x;
    double y, yy, ys, ya, ys2, ya2;

    FILE* deriv;

    deriv = fopen("deriv.dat", "w");

    printf("Lūdzu, izvēlieties funkcijas sākuma robežas vērtību a:\n");
    scanf("%f", &a);
    printf("Lūdzu, izvēlieties funkcijas beigu robežas vērtību b:\n");
    scanf("%f", &b);
    printf("Lūdzu, izvēlieties funkcijas precizitātes vērtību dx:\n");
    scanf("%f", &delta_x);

    fprintf(deriv, "\tx\t\tj1(2x)\tj1\'(2x) analyt.\tj1\'(2x) finite\tj1\'\'(2x) analyt.\tj1\'\'(2x) finite\n");
    printf("\tx\t\tj1(2x)\tj1\'(2x) analyt.\tj1\'(2x) finite\tj1\'\'(2x) analyt.\tj1\'\'(2x) finite\n");

    x = a;
    while (x < b) 
    {
        y = j1(2 * x);
        yy = j1(2 * (x + delta_x));
        ya = j0(2 * x) - jn(2,2 * x);
        ys = (yy-y)/delta_x;
        ya2 = (2*(1-2*x*x)*j1(2*x)-2*x*j0(2*x))/(x*x);
        ys2 = (yy - 2 * y + j1(2 * (x - delta_x))) / pow(delta_x,2);

        printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n", x, y, ya, ys, ya2, ys2);
        fprintf(deriv, "%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n", x, y, ya, ys, ya2, ys2);
        x += delta_x;
    }

    fclose(deriv);
}
    