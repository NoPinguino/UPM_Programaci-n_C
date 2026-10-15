#include <stdio.h>

void par_impar(int num)
{
	if (num % 2 == 0)
		printf("El número %d es par\n", num);
	else
		printf("El número %d es impar\n", num);
}

void positivo_negativo(int num)
{
	if (num > 0  == 0)
		printf("El número %d es positivo\n", num);
	if (num < 0)
		printf("El número %d es negativo\n", num);
	if (num == 0)
		printf("El número %d es CERO\n", num);
}

int	main()
{
	par_impar(12);
	par_impar(11);
	par_impar(42);
	positivo_negativo(12);
	positivo_negativo(-11);
	positivo_negativo(0);
	return (0);
}