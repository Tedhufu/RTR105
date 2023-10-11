#include <stdio.h>
#define N 3

int main(void)
 {
 //int N; // NB!nedrīkst!
 //N = 20; // NB!nedrīkst!
 int i = 0;
 printf ("i mainīgā sākuma vērtība: %d\n",i);
 i = i + 1; //divas operācijas: piešķiršana un saskaitīšana (saskaitīšanai lielāka prioritāte, tā tiek pildīta pirmā)
            // rezultāts tiek ievietots atmiņā, kas norādīts pa kreisi
 if (i<=N)
  {
   printf("i mainīgā nākamā vērtība - %d (un tā ir mazāka par %d)\n",i,N);
  }
 else 
  {
   printf("i mainīgā nākamā vērtība ir kļuvusi lielāka par %d \n",N);
   printf("Viss skaitīšanu apturam!\n",N);
  }

 i = i + 1;

 if (i<=N)
  {printf("i mainīgā nākamā vērtība - %d (un tā ir mazāka par %d)\n",N);
  }
 else 
  {
   printf("i mainīgā nākamā vērtība ir kļuvusi lielāka par %d \n",N);
   printf("Viss skaitīšanu apturam!\n",N);
  }
 i = i + 1;

 if (i<=N)
  {printf("i mainīgā nākamā vērtība - %d (un tā ir mazāka par %d)\n",N);
  }
 else 
  {
   printf("i mainīgā nākamā vērtība ir kļuvusi lielāka par %d \n",i,N);
   printf("Viss skaitīšanu apturam!\n",N);
  }
 i = i + 1;

 if (i<=N)
  {printf("i mainīgā nākamā vērtība - %d (un tā ir mazāka par %d)\n",N);
  }
 else 
  {
   printf("i mainīgā nākamā vērtība ir kļuvusi lielāka par %d \n",N);
   printf("Viss skaitīšanu apturam!\n",N);
  }
 return 0;
 }
