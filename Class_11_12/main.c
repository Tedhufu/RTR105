#include "foo.h"
#include <stdio.h>
int main(void)
{
	//char *vards_main = "bar";// sadi nodefinetas rindas simbolu saturu izmainit vairs nevares
	char vards_main[] = "bar";
	printf("vards_main atrašanās vieta atmiņā: %p\n", vards_main);
	printf("vards_main vērtība pirms foo izpildīšanas: %s\n\n", vards_main);

	int id_main = 42;
	printf("id_main atrašanās vieta atmiņā: %p\n", &id_main);
	printf("id_main vērtība pirms foo izpildīšanas: %d\n\n", id_main);

	foo(id_main, vards_main);

	printf("\nname_main atrašanās vieta atmiņā: %p\n", vards_main);
	printf("vards_main vērtība pirms foo izpildīšanas: %s\n\n", vards_main);

	printf("id_main atrašanās vieta atmiņā: %p\n", &id_main);
	printf("id_main vērtība pirms foo izpildīšanas: %d\n", id_main);

	return 0;

}
