#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void genereshana(void);

int main(void)
 {
printf("funkcijas genereshana() 1. izsaukšana:\n");
genereshana();

printf("funkcijas genereshana() 2. izsaukšana:\n");
genereshana();
return 0;
}

void genereshana(void)
{
char i = 1;
int flag = 1, counter, counter_kopa;
int gadiijuma_skaitlu_generatora_grauds;

 gadiijuma_skaitlu_generatora_grauds = time(NULL); //laiks sekundēs kopš 01.01.1970 00:00
 srand(gadiijuma_skaitlu_generatora_grauds);

 printf("laiks kops ilga laika = %d\n",gadiijuma_skaitlu_generatora_grauds);

for(int i=0;i<2;i++)
{
counter = 1;
flag = rand();
 while( flag )
  {
 // printf("i - %d\n",i++);
  counter++;
  flag = rand();
  }

 printf("counter - %d (pēc cikla)\n",counter);
 counter_kopa = counter_kopa + counter;
 printf("counter_kopa - %d (pēc cikla)\n",counter_kopa);


}
 return 0;
 }
