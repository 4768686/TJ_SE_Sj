/*2352017 ��14 �����*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 
int y(int a)
{
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
		return 1;
	else 
		return 0;
}
int m(int x, int y )
{
	int z = 0;
	int m1[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int m2[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) {
		for (int i = 0; i < y - 1; i++) {
			z = z + m2[i];
		}
		return z;
	}
	else  {
		for (int i = 0; i < y - 1; i++) {
			z = z + m1[i];
		}
		return z;
	}
}
int main()
{
	int a, b, c;
	printf("�������꣬�£���\n");
	scanf("%d%d%d", &a, &b, &c);
	if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
	{
		if (c < 1 || c > 31)
			printf("�������-�����µĹ�ϵ�Ƿ�\n");
		else
			printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, m(a ,b) + c);
	}
	else if (b == 2)
	{
		if (c < 1 || c > (28 + y(a)))
			printf("�������-�����µĹ�ϵ�Ƿ�\n");
		else
			printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, m(a, b) + c);
	}
	else if (b == 4 || b == 6 || b == 9 || b == 11)
	{
		if (c < 1 || c > 30)
			printf("�������-�����µĹ�ϵ�Ƿ�\n");
		else
			printf("%d-%d-%d��%d��ĵ�%d��\n", a, b, c, a, m(a, b) + c);
	}
	else
		printf("�������-�·ݲ���ȷ\n");
	return 0;
}