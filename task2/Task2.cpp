#include <stdio.h>
#define	SIZE 4

int main() {
	int mass[SIZE], * p, sum=0;
	p = mass; // ������ ������� �������� ������.

	printf("Enter the massive of %d integer elements:", SIZE);

	// �������� ����� �� ��������� ������� �� ����� �������� ��������.
	for ( p; p <= &mass[SIZE-1]; p++)
	{
		scanf_s("%d", p);
		sum += *p;  // ���� ��� �������� ������
	}

	// ���� ���������� ��������.
	printf("Average of values: %f", (float)(sum) / SIZE);

	return 0;
}