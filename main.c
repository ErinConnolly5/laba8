#include <sdt.h>
//ПРОГРАММА ЯВЛЯЕТСЯ УЧЕБНОЙ
int main()
{
	int a, b,sum,raz,proiz;
	printf("Введите число а\n");
	scanf("%d", &a);
	printf("Введите число b\n");
	scanf("%d", &b);
	int sum = a + b;
	printf("Cумма введенных чисел равна = %d", sum);
	int raz = a - b;
	printf("Разность введенных чисел равна = %d", raz);
	int proiz = a * b;
	printf("Разность введенных чисел равна = %d", proiz);
}
