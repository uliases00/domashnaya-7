#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, ".UTF-8");

	int n;

	printf("Введите число от 1 до 99\n");
	scanf("%d", &n);

	if (n < 1 || n > 99)
	{
		printf("Число должно быть от 1 до 99\n");
	}
	else
	{
		printf("%d", n);

		if (n % 100 >= 11 && 100 <= 14)
		{
			printf(" копеек\n");
		}
		else if (n % 10 == 1)
		{
			printf(" копейка\n");
		}
		else if (n % 10 <= 2 && n % 10 <= 4)
		{
			printf(" копейки\n");
		}
		else
		{
			printf(" копеек\n");
		}
	}
	return 0;
}