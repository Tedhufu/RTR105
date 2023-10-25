#include <stdio.h>
#include <string.h>

int main(void)
{
 char c[] = "abcd";


printf ("rindas garums  pirms izmaiņam %ld\n",strlen(c));
printf ("rinda pirms izmaiņam %s\n",c);

//strcpy(c, "efghijk");
strncpy(c, "efghijk", strlen(c));

printf ("rindas garums pirms izmaiņam %ld\n",strlen(c));
printf ("rinda pirms izmaiņam %s\n",c);


return 0;

}
