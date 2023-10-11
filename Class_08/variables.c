#include <stdio.h>

int main(void)
 {
  int i; //diskrētā mainīgā deklerēšana-noteikta izmēra atbilstoši datu tipam
         // - int ==> 4bytes atmiņas apgabala sasaistīšana ar norādīto
         //identifikatoru
         //NB! vērtība nav zināma
  printf("i mainīgā izmērs baitos (simbols): %ld\n",sizeof(i));
  printf("i mainīgā atrašanās vieta atmiņā (adrese jeb norāda): %p\n",&i);
  printf("i mainīgā vērtība uzreiz pēc deklarēšanas (simbols): %c\n",i);
  printf("i mainīgā vērtība uzreiz pēc deklarēšanas (dec): %d\n",i);
  printf("i mainīgā vērtība uzreiz pēc deklarēšanas (oct): %#o\n",i);
  printf("i mainīgā vērtība uzreiz pēc deklarēšanas (hex): %#x\n",i);
  printf("i mainīgā vērtība uzreiz pēc deklarēšanas (real): %f\n",i);
  printf("i mainīgā vērtība uzreiz pēc deklarēšanas (real): %e\n",i);
  printf("\n");

         //mainīgā "loma" ir mainītis un saglabāt kādu mums noderīgu vērtību
  i=25;  //visbiežāk mainīgā vērtības maiņai mēs pielietosim piešķiršanas operāciju
         //lielums(vērtība), kas tiek sarēķināta (sagatavota) pa labi tiek ierakstīta atmiņas apgabalā, kuru norāda identifikators pa kreisi
  printf("i mainīgā izmērs baitos (simbols): %ld\n",sizeof(i));
  printf("i mainīgā atrašanās vieta atmiņā (adrese jeb norāda): %p\n",&i);
  printf("i mainīgā vērtība uzreiz pēc piešķiršanas (simbols): %c\n",i);
  printf("i mainīgā vērtība uzreiz pēc piešķiršanas (dec): %d\n",i);
  printf("i mainīgā vērtība uzreiz pēc piešķiršanas (oct): %#o\n",i);
  printf("i mainīgā vērtība uzreiz pēc piešķiršanas (hex): %#x\n",i);
  printf("i mainīgā vērtība uzreiz pēc piešķiršanas (real): %f\n",i);
  printf("i mainīgā vērtība uzreiz pēc piešķiršanas (real): %e\n",i);
  printf("\n");


  char c1, c2;
  float f1 = 0.0456, f2 = 1.896e2;
  double d1, d2;

  printf("c1 mainīgā izmērs baitos (simbols): %ld\n",sizeof(c1));
  printf("c1 mainīgā atrašanās vieta atmiņā (adrese jeb norāda): %p\n",&c1);
  printf("c2 mainīgā izmērs baitos (simbols): %ld\n",sizeof(c2));
  printf("c2 mainīgā atrašanās vieta atmiņā (adrese jeb norāda): %p\n",&c2);
  printf("f1 mainīgā izmērs baitos (simbols): %ld\n",sizeof(f1));
  printf("f1 mainīgā atrašanās vieta atmiņā (adrese jeb norāda): %p\n",&f1);
  printf("f1 mainīgā vērtība uzreiz pēc piešķiršanas (simbols): %c\n",f1);
  printf("f1 mainīgā vērtība uzreiz pēc piešķiršanas (dec): %d\n",f1);
  printf("f1 mainīgā vērtība uzreiz pēc piešķiršanas (oct): %#o\n",f1);
  printf("f1 mainīgā vērtība uzreiz pēc piešķiršanas (hex): %#x\n",f1);
  printf("f1 mainīgā vērtība uzreiz pēc piešķiršanas (real): %f\n",f1);
  printf("f1 mainīgā vērtība uzreiz pēc piešķiršanas (real): %e\n",f1);
  printf("f2 mainīgā izmērs baitos (simbols): %ld\n",sizeof(f2));
  printf("f2 mainīgā atrašanās vieta atmiņā (adrese jeb norāda): %p\n",&f2);
  printf("d1 mainīgā izmērs baitos (simbols): %ld\n",sizeof(d1));
  printf("d1 mainīgā atrašanās vieta atmiņā (adrese jeb norāda): %p\n",&d1);
  printf("d2 mainīgā izmērs baitos (simbols): %ld\n",sizeof(d2));
  printf("d2 mainīgā atrašanās vieta atmiņā (adrese jeb norāda): %p\n",&d2);



  float f3 = f1; // NB! mainīgā vērtības kopēšana

  int *i_adrese_1 = &i;
  printf("i_adrese_1 mainīgā izmērs baitos (simbols): %ld\n",sizeof(i_adrese_1));
  printf("vērtība, kura ir atrodama pēc i_adreses_1 (dec): %d\n",*i_adrese_1);
  printf("vērtība, kura ir atrodama pēc i_adreses_1 (real): %f\n",*i_adrese_1);

 float *i_adrese_2 = i_adrese_1; //uzmanamies notieks datu tipa izmaiņa

  printf("i_adrese_2 mainīgā izmērs baitos (simbols): %ld\n",sizeof(i_adrese_2));
  printf("vērtība, kura ir atrodama pēc i_adreses_2 (dec): %d\n",*i_adrese_2);
  printf("vērtība, kura ir atrodama pēc i_adreses_2 (real): %f\n",*i_adrese_2);




  return 0;
 }
