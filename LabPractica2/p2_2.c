#include <stdio.h>
// #include <limits.h>

int	main()
{
	int cont = 0;;
	int num;
	int min;
	int max;

	// min = INT_MAX;
	// max = INT_MIN;

	/*
	El enunciado sugiere usar limits.h en este ejercicio.
	Asumo que es para iniciar min con valor de INT_MAX y max con valor de INT_MIN.
	No es realmente necesario, puedes utilizar una variable contador tal que
	(cont==0 -> primera vuelta).
	*/

	do 
	{
		printf("Introduce un número (n=%d): \n", cont);
		scanf("%d", &num);
		if (cont == 0)
		{
			min = num;
			max = num;
		}
		if (num < min && num != 0) // Excluyo el cero como valor, pues sirve para salir del bucle.
		{
			min = num;
		}
		if (num > max)
		{
			max = num;
		}
		cont++;
	} while (num != 0);

	printf("Total de números introducidos: %d\n", cont);
	printf("Número mínimo: %d\n", min);
	printf("Número máximo: %d\n", max);
	return (0);
}