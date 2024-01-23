# :bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat:
# Labaratorijas darbs Dihotomijas metode
### Autors: Valts Leitlands
J<sub>1</sub>(2x).

Otrajā labaratorijas darbā, ir izveidota programma, kas izmantojot Dihotomijas metodi nosaka krustpunkta x koordināti noteiktā intervālā un ar noteiktu precizitāti, kurai lietotājs var izvēlēties tos.

[Gnuplot bilde] {https://github.com/Tedhufu/RTR105/blob/main/Labori/LD2/Krustpunkti.png}

```#include <stdio.h>
#include <math.h>

int main() 
{
    float a, b, c, delta_x, x, funkca, funkcb, funkcx;
    int k = 0;

    printf("Ievadiet sākuma (mazāku) skaitli: \n");
    scanf("%f", &a);
    printf("Ievadiet beigu (lielāku) skaitli: \n");
    scanf("%f", &b);
    printf("Ievadiet, kādai f(x) vērtībai aprēķināt x vērtību: \n");
    scanf("%f", &c);
    printf("Ievadiet vajadzīgo precizitāti (no 0 līdz 1, jo mazāks skaitlis, jo precīzāks rezultāts): \n");
    scanf("%f", &delta_x);

    funkca = j1(2 * a) - c;
    funkcb = j1(2 * b) - c;

    if (funkca * funkcb > 0) 
    {
        printf("Intervālā (%.2f;%.2f) ar izvēlētajām vērtībām nav iespējams veikt darbības funkcijai: J1(2x)!\n", a, b);
        return 1;
    }

    while ((b - a) > delta_x) 
    {
        x = (a + b);
        funkca = j1(2 * a) - c;
        funkcx = j1(2 * x) - c;

        if (funkca * funkcx > 0)
            a = x;
        else
            b = x;

         k++;
    }

    printf("J1(2 * %7.3f)=%7.3f\n", x, j1(2 * x));
    printf("J1(2 * %7.3f)=%7.3f\n", b, j1(2 * b));
    printf("Sakne atrodas pie x=%.3f, jo J1(2x) ir %.3f\n", x, j1(2 * x));
    printf(" iterāciju skaits funkcijai J1(2 * %7.3f)=%7.3f : %2d\n", a, j1(2 * x), k);
    return 0;
}
```
:shipit:
