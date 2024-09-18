/* 2352017 信14 张睿琦 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int zeller(int y, int m, int d)
{
	int c, w, w1;
	switch (m) {
	case 1:
	case 2:
		m = m + 12;
		y = y - 1;
		break;
	default:
		break;
	}
	c = y / 100;
	y = y % 100;
	w1 = y + y / 4 + c / 4 - 2 * c + (13 * (m + 1) / 5) + d - 1;
	while (w1 < 0) {
		w1 += 7;
	}
	w = w1 % 7;
	return w;
}

int main()
{
	int y, m, d, w, i;
	while (1)
	{
		printf("请输入年[1900-2100]、月、日：\n");
		i = scanf("%d%d%d",&y,&m,&d);
		if (i < 3) {
			while (getchar() != '\n');
			printf("输入错误，请重新输入\n");
			continue;
		}
		if (y < 1900 || y > 2100) {
			while (getchar() != '\n');
			printf("年份不正确，请重新输入\n");
			continue;
		}
		if (m < 1 || m > 12) {
			while ( getchar() != '\n');
			printf("月份不正确，请重新输入\n");
			continue;
		}
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {

			if (d < 1 || d > 31) {
				while (getchar() != '\n');
				printf("日不正确，请重新输入\n");
				continue;
			}
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11) {
			if (d < 1 || d > 30) {
				while (getchar() != '\n');
				printf("日不正确，请重新输入\n");
				continue;
			}
		}
		else if (m == 2) {
			if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
				if (d < 1 || d > 29) {
					while (getchar() != '\n');
					printf("日不正确，请重新输入\n");
					continue;
				}
			}
			else if (d < 1 || d > 28) {
				while ( getchar() != '\n');
				printf("日不正确，请重新输入\n");
				continue;
			}
		}
		w = zeller(y, m, d);
		switch (w) {
		case(0):
			printf("星期日");
			break;
		case(1):
			printf("星期一");
			break;
		case(2):
			printf("星期二");
			break;
		case(3):
			printf("星期三");
			break;
		case(4):
			printf("星期四");
			break;
		case(5):
			printf("星期五");
			break;
		case(6):
			printf("星期六");
			break;
		default:
			break;
		}
		break;
	}
	printf("\n");
	return 0;
}