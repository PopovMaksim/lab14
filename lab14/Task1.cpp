#include <stdio.h>
#include <math.h>
#define SIZE 4

int main() {
	int i, max, min, dist , mass[SIZE];
	int * p1, * p2;		// ��������� ���������

	for ( i = 0; i < SIZE; i++)
	{
		printf("Element of massive #%d : ", i);
		scanf_s("%d", &mass[i]);
	}

	max = mass[0];	// ������ ������� ������ ������� ��������� 
	min = mass[0];	// � ������������.
	p1 = mass; // �������� ������ ������� ��������
	p2 = mass; 

	for ( i = 1; i < SIZE; i++)
	{
		// ���� ��������� ������������ ��� ��������� �������,
		// �������� ���� ������
		if (mass[i] > max) {
			max = mass[i];
			p1 = &mass[i];
		}
		if (mass[i] < min) {
			min = mass[i];
			p2 = &mass[i];
		}
	}
	// ³������ �� ������������ � ��������� - ������ ������ �� �����.
	dist = abs(p2 - p1);

	printf("Max: %d\n", max);
	printf("Min: %d\n", min);
	printf("Dist: %d\n", dist);
	return 0;
}