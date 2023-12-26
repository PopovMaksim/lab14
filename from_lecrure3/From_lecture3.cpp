#include <stdio.h>

int fact(int num) {
	if (num <= 1) return 1; // якщо число не більше 1, повертаємо 1
	else return num * fact(num - 1); // рекурсивний виклик для числа на 1 менше

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