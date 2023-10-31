#include <stdio.h>

int main(){
	int long long SK1, SK2, IZN;

	printf("Ievadiet skitli 400'000\n");
	scanf("%lld", &SK1);

	printf("ievadiet skaitli 100'000\n");
	scanf("%lld", &SK2);


	IZN = SK1 * SK2;

	if(IZN == 40000000000)
	{
		printf("Iznakums ir: %lld\n", IZN);

	}
	else
	{
		printf("Tika ievaditi nepareizi skaitli, reizinajums ir: %lld\n", IZN);
	}
	return 0;

}
