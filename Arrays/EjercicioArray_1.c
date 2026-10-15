/*
Declaramos un Array muy grande de números enteros.
Pedimos al usuario que introduzca números para almacenarlos, si introduce un cero, termina.
Al acabar contar los números cuyo valor absoluto sea menor a 7.
*/

#include <stdio.h>
#include <math.h> // Librería para valor absoluto, yo no la uso pero echarle un ojo si queréis

int	main()
{
	int array_nums[100];
	int	num;
	int	contador;

	int	i = 0;
	do {
		printf("Introduce un número: \n");
		scanf("%d", &num);
		if (num != 0)
		{
			array_nums[i] = num;
			i++;
		}
	} while (num != 0);

	for (int j = 0; j < i; j++)
	{
		if (array_nums[j] > -7 && array_nums[j] < 7)
		{
			contador++;
		}
	}
	
	printf("%d", contador);

	return (0);
}