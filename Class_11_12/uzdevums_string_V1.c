#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{

	char vards[100];
	int skaits = 0;
	printf(" Ievadiet teikumu:\n");

	fgets(vards, sizeof(vards), stdin);

	printf("Teikuma garums(ieskaitot atstarpes): %ld\n ", strlen(vards)-1);

	for(int i=0; i<=100; i++)
	{

		if()
		{
		skaits=skaits+1
		}
		else(isspace(vards))
		{
		skaits=skaits+0

		}




	}
	printf("Teikuma garums(neieskaitot atstarpes): %ld\n ", skaits);

return 0;
}
