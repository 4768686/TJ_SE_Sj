/*2352017 ��14 �����*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 1001

int main()
{
	int a[N] = {0}, i = 0, j, k, p, q, swap, sum = 1;
	printf("������ɼ������1000������������������\n");
	while (i < N) {
		scanf("%d",&a[i]);
		if (a[i] < 0) {
			break;
		}
		else {
			i++;
			continue;
		}
	}
	while (1) {
		if (a[0] < 0) {
			printf("����Ч����");
			return 0;
		}
		if(i>= 0 && i < N) {
			printf("���������Ϊ:\n");
			for (j = 0; j < i; j++) {
				printf("%d ", a[j]);
				if ((j >= 9 && (j + 1) % 10 == 0) || j == i - 1)
					printf("\n");
			}
			break;
		}
	}
	for (k = 0; k < i - 1; k++) {
		for (q = 0; q < i - k - 1; q++) {
			if (a[q] < a[q + 1]) {
				swap = a[q];
				a[q] = a[q + 1];
				a[q + 1] = swap;
			}
		}
	}
	printf("�����������Ķ�Ӧ��ϵΪ:\n");
	for (p = 0; p < i ; p++) {
		if (a[p] >= 0) {
			if (a[p] == a[p + 1]) {
				sum++;
			}
			else {
				printf("%d %d\n", a[p], sum);
				sum = 1;
			}
		}
	}
	return 0;
}