#include <stdio.h>

int main()
{
    char tips;
    long long int num;
    printf("Luzdu ievadiet kadu datu tipu velaties izmantot: char(c)/int(i)/longlong(l)\n");
    scanf(" %c", tips);
    printf("Ievadiet skaitli, kuram velaties iegut faktorialo vertibu.\n");
    scanf(" %lld", &num);
    if(tips == 'c' && num > 127 || tips == 'i' && num > 2147483647 || tips == 'l' && num > 9223372036854775807)
    {
        printf("Sis skaitlis ir parak liels izveletajam ( %c) datu tipam.\n", &tips);
    }
    else if(num < 0) {printf("Skaitlis nevar but negativs.\n"):}
    else if(num <= 1) {printf("Skaitla %lld faktorials ir vienads ar 1", &num)}


}