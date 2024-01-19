#include <stdio.h>
#include <math.h>

int main() {
    float a, b, x, delta_x;
    double y, yy, yan, ysk, yan2, ysk2;

    FILE* deriv;

    deriv = fopen("derivative.dat", "w");

    printf("Lietotāj, lūdzu, izvēlieties funkcijas sākuma robežas vērtību a:\n");
    scanf("%f", &a);
    printf("Lietotāj, lūdzu, izvēlieties funkcijas beigu robežas vērtību b:\n");
    scanf("%f", &b);
    printf("Lietotāj, lūdzu, izvēlieties funkcijas precizitātes vērtību dx:\n");
    scanf("%f", &delta_x);

    fprintf(deriv, "\tx\t\tj1(2x)\tj1\'(2x) analyt.\tj1\'(2x) finite\tj1\'\'(2x) analyt.\tj1\'\'(2x) finite\n");
    printf("\tx\t\tj1(2x)\tj1\'(2x) analyt.\tj1\'(2x) finite\tj1\'\'(2x) analyt.\tj1\'\'(2x) finite\n");

    x = a;
    while (x < b) {
        y = j1(2 * x);
        yy = j1(2 * (x + delta_x));
        ysk = (j0(2 * x) - _j2(2 * x));
        yan = (yy-y)/delta_x;
        ysk2 = (j_minus_1(2 * x) - j1(2 * x)) - (j1(2 * x)-j3(2 * x));
        yan2 = (yy - 2 * y + j1(2 * (x - delta_x))) / pow(delta_x,2);

        printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n", x, y, yan, ysk, yan2, ysk2);
        fprintf(deriv, "%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n", x, y, yan, ysk, yan2, ysk2);
        x += delta_x;
    }

    fclose(deriv);
}