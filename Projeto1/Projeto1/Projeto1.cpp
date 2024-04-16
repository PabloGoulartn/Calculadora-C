#include <stdio.h>
#include <stdlib.h>

void getValues(float *num1, float *num2);
void chooseOperation(int* option);

float addition(float number1, float number2);
float subtraction(float number1, float number2);
float multiplication(float number1, float number2);
float division(float number1, float number2);

int main()
{
	float num1 = 0, num2 = 0;
	int option = 0;
	
	getValues(&num1, &num2);
	chooseOperation(&option);

	if (option == 1)
	{
		printf("O resultado: %.2f", addition(num1, num2));
	}
	else if (option == 2)
	{
		printf("O resultado: %.2f", subtraction(num1, num2));
	}
	else if (option == 3)
	{
		printf("O resultado: %.2f", multiplication(num1, num2));
	}
	else if (option == 4)
	{
		printf("O resultado: %.2f", division(num1, num2));
	}
	else
	{
		printf("Opcao invalida.");
	}
	
	return 0;
}

void getValues(float *num1, float *num2)
{
	printf("Calculadora\n\n");
	printf("Digite um valor: ");
	scanf_s("%f", num1);
	printf("Digite outro valor: ");
	scanf_s("%f", num2);
}

void chooseOperation(int *option)
{
	printf("\n\nEscolha uma operacao\n\n");
	printf("1. +\n2. -\n3. *\n4. /\n");
	printf("Escolha: ");
	scanf_s("%d", option);
}

float addition(float number1, float number2)
{
	return number1 + number2;
}

float subtraction(float number1, float number2)
{
	return number1 - number2;
}

float multiplication(float number1, float number2)
{
	return number1 * number2;
}

float division(float number1, float number2)
{
	return number1 / number2;
}