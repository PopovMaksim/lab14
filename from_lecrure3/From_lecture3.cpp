#include <stdio.h>

int fact(int num) {
	if (num <= 1) return 1; // ���� ����� �� ����� 1, ��������� 1
	else return num * fact(num - 1); // ����������� ������ ��� ����� �� 1 �����

}
int main()
{
	int a;
	float r;	printf("a= ");
	scanf_s("%d", &a);
	r = fact(a);
	printf("%d! = %lf", a, r);
	getchar();
	return 0;
}