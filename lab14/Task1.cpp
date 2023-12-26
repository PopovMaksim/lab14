#include <stdio.h>
#include <math.h>
#define SIZE 4

int main() {
	int i, max, min, dist , mass[SIZE];
	int * p1, * p2;		// Створення покажчиків

	for ( i = 0; i < SIZE; i++)
	{
		printf("Element of massive #%d : ", i);
		scanf_s("%d", &mass[i]);
	}

	max = mass[0];	// Спершу обираємо перший елемент мінімальним 
	min = mass[0];	// і максимальним.
	p1 = mass; // зберігаємо адресу першого елемента
	p2 = mass; 

	for ( i = 1; i < SIZE; i++)
	{
		// Якщо знаходимо максимальний або мінімальний елемент,
		// Зберігаємо його адресу
		if (mass[i] > max) {
			max = mass[i];
			p1 = &mass[i];
		}
		if (mass[i] < min) {
			min = mass[i];
			p2 = &mass[i];
		}
	}
	// Відстань між максимальним і мінімальним - модуль різниці їх адрес.
	dist = abs(p2 - p1);

	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
	printf("Dist: %d\n", dist);
	return 0;
}