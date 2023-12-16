#include <stdio.h>

int main()
{
    char b1, b2, b3, s;
    int m, v, l;
    printf("Ierakstiet 3 burtus\n");
    scanf("%c %c %c",&b1, &b2, &b3);

    printf("Uzrakstiet kādā alfabētiskā secībā attēlot burtus (augošā(a) / dilstošā(d))\n");
    scanf("%c",&s);
    if (s == 'a'||s == 'b')
    {
    
         if (s =='a')
            {
                printf(":)");
            }
        if (s =='d')
            {
                printf(":(");
            }

    }
    else printf("Nepareizi ievadīts secības koef\n");
}   