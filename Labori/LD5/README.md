# :bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat::bat:
# Labaratorijas darbs Bubble Sort
### Autors: Valts Leitlands

Šajā laboratorijas darbā bija jāpielieto bubble sort algoritms, lai sakārtotu lietotāja ievadītu tekstu augošā secībā, kur skaitliskās vērtības rakstzīmēm iegūst no ASCII tabulas.

Programmas beigās tiek izvadīta ASCII minimālā, maksimālā, vidējā vērtība, moda un mediāna. Beigās arī tiek izvadīti visas zīmes ar to ASCII vērtībām.

```
#include <stdio.h>
#include <string.h>


int main() 
{
    char teksts[256];
    char pag;
    double med;
    int garums, minA = 256, maxA = 0, kopaA = 0, Avertiba, frek[256] = {0}, moduS = 0, moda;


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
            frek[Avertiba]++;
        }
    }

    
    for (int i = 0; i < 256; i++) 
    {
        if (frek[i] > moduS) 
        {
            moduS = frek[i];
            moda = i;
        }
    }

    printf("Min ASCII vertiba: %d (%c)\n", minA, minA);
    printf("Max ASCII vertiba: %d (%c)\n", maxA, maxA);
    printf("Vid ASCII vertiba: %d\n", kopaA / garums);

    if (garums %2 == 0)
    {
        med = (teksts[garums / 2 - 1] + teksts[garums / 2])/2;
        printf("ASCII mediana: %.2lf \n", med);
    }
    else
    {
        med = (teksts[garums / 2]);
        printf("ASCII mediana: %.2lf \n", med);
    }

    printf("ASCII moda: %d (%c)\n", moda, moda);

    printf("\nSakārtotas vertibas:\n");
    for (int i = 0; i < garums; i++) {
        printf("%d. %c (%d)\n", i + 1, teksts[i], (int)teksts[i]);
    }

    return 0;
}
```
:shipit:
