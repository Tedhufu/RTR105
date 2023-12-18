#include <stdio.h>

int main()
{
    char tips;
    long long int num, cel = 1, fac = 1;
    printf("Luzdu ievadiet kadu datu tipu velaties izmantot: char(c)/int(i)/longlong(l)\n");
    scanf(" %c", &tips);
    tryagain:
    if(tips == 'c' || tips == 'i' || tips == 'l')
    {
        printf("Ievadiet skaitli, kuram velaties iegut faktorialo vertibu.\n");
        scanf(" %lld", &num);
        if(tips == 'c' && num > 255 || tips == 'i' && num > 2147483647 || tips == 'l' && num > 9223372036854775807)
        {
            printf("Sis skaitlis ir parak liels izveletajam ( %c) datu tipam.\n", tips);
        }
        else if(num < 0) {printf("Skaitlis nevar but negativs.\n");}
        else if(num <= 1) {printf("Skaitla %lld faktorials ir vienads ar 1", num);}
        else 
        {
            while (cel <= num) {fac *= cel; cel++;}
        
            if(tips == 'c' && fac > 255 || tips == 'i' && fac > 2147483647 || tips == 'l' && fac > 9223372036854775807)
            {
                printf("Izveletaja datu tipa %c nav iespejams attelot so faktorialu.\n", tips);
            }
            else {printf("Faktorials skaitlim %lld ir %lld.\n", num, fac);}
        }
    }
    else 
    {
    printf("Nav tada datu tipa.\nLuzdu atkartoti ievadiet kadu datu tipu velaties izmantot: char(c)/int(i)/longlong(l)\n");
    scanf(" %c", &tips);
    goto tryagain;
    }
}