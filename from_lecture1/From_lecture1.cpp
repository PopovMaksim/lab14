#include <stdio.h>

int multiplication(int num1, int num2); //прототип функції
int main()
{
	int num1;
	int num2;
	printf("Введіть числа для множення: ");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);
	printf("Результат множення %d\n", multiplication(num1, num2)); //виклик функції
	return 0;
}

int multiplication(int num1, int num2) // визначення функції
{
	return num1 * num2;
}