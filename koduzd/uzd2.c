#include <stdio.h>

int main()
{
	unsigned char SK1;


	printf("Uzrakstat naturalu skaitli, veribu apgabalos no 0 lidz 255\n");
	scanf("%hhu", &SK1);

	printf("Ja skaitli %hhu parveido binaraja koda, tad tas ir:",SK1);

	for (int a = 7; a >= 0; a--)
	{
		if ((SK1 >> a) & 1)
			{
				printf("1");
			}
		else
			{
				printf("0");
			}
	}
	printf("\n");
	return 0;
}
