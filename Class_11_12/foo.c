#include "foo.h"

#include <string.h>
#include <stdio.h>

void foo(int id, char *vards)
{
	fprintf(stderr, "foo(%d, \"%s\");\n", id, vards);

	printf("(izdruka no foo f-n) varda atrašanās vieta atmiņā: %p\n",vards);
	printf("(izdruka no foo f-n) varda vērtība: %s\n",vards);

	printf("(izdruka no foo f-n) id atrašanās vieta atmiņā: %p\n",&id);
	printf("(izdruka no foo f-n) id vērtība: %d\n",id);

	//name = "car"; // ta tas ar simbolu masivu nestrada

	strcpy(vards,"car");

	id = 50;


}
