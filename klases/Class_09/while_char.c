#include <stdio.h>

int main(void)
 {
char i = 1;
int flag = 1;


 while( i || flag == 1 )
  {
  printf("i - %d\n",i++);
  }
 printf("i - %d (pēc cikla)\n",i++);
 //127(dec)  -> 0111 1111
 //-128(dec) -> 1000 0000 (invertēts)
 return 0;
 }
