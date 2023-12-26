#include <stdio.h>
#define	SIZE 4

int main() {
	int mass[SIZE], * p, sum=0;
	p = mass; // Адреса першого елемента масиву.

	printf("Enter the massive of %d integer elements:", SIZE);

	// Покажчик вакзує на наступний елемент на кожній наступній ітерації.
	for ( p; p <= &mass[SIZE-1]; p++)
	{
		scanf_s("%d", p);
		sum += *p;  // Сума всіх елементів масиву
	}

	// Вивід середнього значення.
	printf("Average of values: %f", (float)(sum) / SIZE);

	return 0;
}