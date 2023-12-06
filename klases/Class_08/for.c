#include <stdio.h>
#define N 10
#define X 7

int main(void)
 {
 //int N; // NB!nedrīkst!
 //N = 20; // NB!nedrīkst!
 int i = 0;
 printf ("i mainīgā sākuma vērtība: %d\n",i);

 i = i + 1;
 for ( i=i+1 ;i<=N; i++ ) // strada lidz sasniedz 10
  {
   printf("(%d.) i mainīgā nākamā vērtība - %d (un tā ir mazāka par %d)\n",i,i,N);
   if(i == X)
   {
    printf("X vērtība ir trāpijusies viss jabeidz.\n");
    break;
   }
  }
 printf("(%d.)i mainīgā nākamā vērtība ir kļuvusi lielāka par %d \n",i,N);
 printf("Viss skaitīšanu apturam!\n");


 return 0;
 }
