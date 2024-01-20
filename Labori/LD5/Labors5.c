#include <stdio.h>
#include <string.h>


int main() 
{
    char teksts[256];
    char pag;
    double med;
    int garums, minA = 256, maxA = 0, kopaA = 0, Avertiba;

    printf("Ievadiet burtus un ciparus (līdz 255 burtiem/cipariem):\n");
    scanf("%[^\n]", teksts);

    garums = strlen(teksts);

    for (int i = 0; i < garums; i++) 
    {
        for (int j = 0; j < garums - 1; j++) 
        {
            if (teksts[j] > teksts[j + 1]) 
            {
                pag = teksts[j + 1];
                teksts[j + 1] = teksts[j];
                teksts[j] = pag;
            }
        }
    }

    for (int i = 0; i < garums; i++) 
    {
        Avertiba = (int)teksts[i];
        if (Avertiba > 32) 
        {
            if (Avertiba < minA) minA = Avertiba;
            if (Avertiba > maxA) maxA = Avertiba;
            kopaA += Avertiba;
        }
    }

    printf("Min ASCII vertiba: %d (%c)\n", minA, minA);
    printf("Max ASCII vertiba: %d (%c)\n", maxA, maxA);
    printf("Vid ASCII vertiba: %d\n", kopaA / garums);

    if (garums %2 == 0)
    {
        med = (teksts[garums / 2 - 1] + teksts[garums / 2])/2;
        printf("ASCII mediana: %lf \n", med);
    }
    else
    {
        med = (teksts[garums / 2]);
        printf("ASCII mediana: %lf \n", med);
    }

    printf("\nSakārtotas vertibas:\n");
    for (int i = 0; i < garums; i++) {
        printf("%d. %c (%d)\n", i + 1, teksts[i], (int)teksts[i]);
    }

    return 0;
}
