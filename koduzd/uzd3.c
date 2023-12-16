#include <stdio.h>

int main()
{
    char b1, b2, b3, s;
    int m, v, l;
    printf("Ierakstiet 1. burtu\n");
    scanf(" %1c",&b1);
    printf("Ierakstiet 2. burtu\n");
    scanf(" %1c",&b2);
    printf("Ierakstiet 3. burtu\n");
    scanf(" %1c",&b3);


    printf("Uzrakstiet kādā alfabētiskā secībā attēlot burtus (augošā(a) / dilstošā(d))\n");
    scanf(" %1c",&s);
    if (s == 'a'||s == 'd')
    {
        if (b1 >= b2 && b1 >= b3)
            {   
            l = b1;
            if(b2 >= b3) {v = b2; m = b3;}
            else          v = b3; m = b2;
            }

        else if (b2 >= b3 && b2 >= b1)
            {   
            l = b2;
            if(b1 >= b3) {v = b1; m = b3;}
            else          v = b3; m = b1;
            }
        else
            {
            l = b3;
            if(b1 >= b2) {v = b1; m = b2;}
            else          v = b2; m = b1;
            }
        if (s =='a')
            {
               printf("Burti augosa seciba: %c %c %c", m, v, l);
            }

        if (s =='d')
            {
                printf("Burti dilstosa seciba: %c %c %c", l, v, m);
            }

    }
    else printf("Nav tadas secības \n");
    return 0;
}  