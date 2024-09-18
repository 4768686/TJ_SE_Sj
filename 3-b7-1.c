/*2352017 信14 张睿琦*/
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	double a;
	int b,b1,b2,b3,b4,c = 0,d = 0,e = 0,g = 0,h = 0,i = 0,j = 0,k = 0,m = 0,n = 0,sum;
	printf("请输入找零值：\n");
	scanf("%lf", &a);
	b = (int)(a * 100);
	b1 = b / 1000;
	b2 = (b - 1000 * b1) / 100;
	b3 = (b - 1000 * b1 - 100 * b2) / 10;
	b4 = b % 10;
	if (b1 >= 5)
	{
		c++;
		b1 -= 5;
	}
	if (b1 >= 2)
	{
		switch (b1 / 1)
		{
		case 4:
			d += 2;
			break;
		case 3:
		{
			d += 1;
			b1 -= 2;
		}
		break;
		case 2:
			d += 1;
			break;
		default:
			break;
		}
	}
	if (b1 == 1)
	{
		e++;
	}

	if (b2 >= 5)
	{
		g++;
		b2 -= 5;
	}
	if (b2 >= 1)
	{
		switch (b2 / 1)
		{
		case 4:
			h += 4;
			break;
		case 3:
			h += 3;
		break;
		case 2:
			h += 2;
			break;
		case 1:
			h += 1;
			break;
		default:
			break;
		}
	}

	if (b3 >= 5)
	{
		i++;
		b3 -= 5;
	}
	if (b3 >= 1)
	{
		switch (b3 / 1)
		{
		case 4:
			j += 4;
			break;
		case 3:
			j += 3;
			break;
		case 2:
			j += 2;
			break;
		case 1:
			j += 1;
			break;
		default:
			break;
		}
	}

	if (b4 >= 5)
	{
		k++;
		b4 -= 5;
	}
	if (b4 >= 2)
	{
		switch (b4 / 1)
		{
		case 4:
			m += 2;
			break;
		case 3:
		{
			m += 1;
			b4 -= 2;
		}
		break;
		case 2:
			m += 1;
			break;
		default:
			break;
		}
	}
	if (b4 == 1)
	{
		n++;
	}
	
	sum = c + d + e + g + h + i + j + k + m + n;
	printf("共%d张找零，具体如下：\n", sum);
	if (c > 0)
		printf("50元 : %d张\n", c);
	if (d > 0)
		printf("20元 : %d张\n", d);
	if (e > 0)
		printf("10元 : %d张\n", e);
	if (g > 0)
		printf("5元  : %d张\n", g);
	if (h > 0)
		printf("1元  : %d张\n", h);
	if (i > 0)
		printf("5角  : %d张\n", i);
	if (j > 0)
		printf("1角  : %d张\n", j);
	if (k > 0)
		printf("5分  : %d张\n", k);
	if (m > 0)
		printf("2分  : %d张\n", m);
	if (n > 0)
		printf("1分  : %d张\n", n);

	return 0;
}