#include <stdio.h>

void	calc_imc(double peso, double estatura)
{
	double imc;

	imc = peso / (estatura * estatura);
	if (imc < 18.5)
	{
		printf("Peso insuficiente (peso=%f / imc=%f)\n", peso, imc);
	}
	if (imc >= 18.5 && imc < 25)
	{
		printf("Peso normal (peso=%f / imc=%f)\n", peso, imc);
	}
	if (imc >= 25)
	{
		printf("Sobrepeso (peso=%f / imc=%f)\n", peso, imc);
	}
}

int	main()
{
	double peso;
	double estatura;
	char seguir = 's';
	
	do {
		printf("Introduce el peso: \n");
		scanf("%lf", &peso);
		printf("Introduce la estatura: \n");
		scanf("%lf", &estatura);
		calc_imc(peso, estatura);

		printf("Introduce 's' para continuar: \n");
		scanf("%c", &seguir);
	} while (seguir == 's' || seguir == 'S');

	return (0);
}