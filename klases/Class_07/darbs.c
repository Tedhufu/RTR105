#include <stdio.h>

int main ()
{
  char str [80];
  int i; 
  char  gender;
  printf ("Ievadiet savu uzvārdu: ");
  scanf ("%79s",str);  
  printf ("Ievadiet savu dzimšanas gadu: ");
  scanf ("%d",&i);

  printf ("Ievadi savu dzimumu:MALE/FEMALE/OTHER ");
  scanf ("%79gender",gender);   

  if (%gender="MALE"){
  printf ("Mr. %s , jūs esat dzimis %d.gadā.\n",str,i);



}
  else if (%gender="FEMALE"){
printf ("Mrs. %s , jūs esat dzimis %d.gadā.\n",str,i);

}

  else {
printf ("%s , jūs esat dzimis %d.gadā.\n",str,i);

}




  return 0;
}
