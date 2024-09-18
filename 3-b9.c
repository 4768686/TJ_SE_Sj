/*2352017 ĞÅ14 ÕÅî£çù*/
#include<stdio.h>

int main()
{
	int a, b, n = 0;
	for (a = 1; a <= 9; a++) {
		for (b = 1; b <= a; b++) {
			printf("%dx%d=%-4d", b, a, a * b);
		}
		printf("\n");
	}

	return 0;
}
