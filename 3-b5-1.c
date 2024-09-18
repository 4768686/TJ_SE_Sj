/*2352017 信14 张睿琦*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("请输入年，月，日\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a % 4 == 0 && a % 100 != 0 || a / 400 == 0)
	{
		if (b < 1 || b>12)
			printf("输入错误-月份不正确\n");
		else if (b == 1)
		{
			if (c < 1 || c>31)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c);
		}
		else if (b == 2)
		{
			if (c < 1 || c>29)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+31);
		}
		else if (b == 3)
		{
			if (c < 1 || c>31)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+60);
		}
		else if (b == 4)
		{
			if (c < 1 || c>30)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+91);
		}
		else if (b == 5)
		{
			if (c < 1 || c>31)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+121);
		}
		else if (b == 6)
		{
			if (c < 1 || c>30)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+152);
		}
		else if (b == 7)
		{
			if (c < 1 || c>31)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+182);
		}
		else if (b == 8)
		{
			if (c < 1 || c>31)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+213);
		}
		else if (b == 9)
		{
			if (c < 1 || c>30)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+244);
		}
		else if (b == 10)
		{
			if (c < 1 || c>31)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+274);
		}
		else if (b == 11)
		{
			if (c < 1 || c>30)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+305);
		}
		else if (b == 12)
		{
			if (c < 1 || c>31)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+335);
		}
	}
	else
	{
		if (b < 1 || b>12)
			printf("输入错误-月份不正确\n");
		else if (b == 1)
		{
			if (c < 1 || c>31)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c);
		}
		else if (b == 2)
		{
			if (c < 1 || c>28)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+31);
		}
		else if (b == 3)
		{
			if (c < 1 || c>31)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+59);
		}
		else if (b == 4)
		{
			if (c < 1 || c>30)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+90);
		}
		else if (b == 5)
		{
			if (c < 1 || c>31)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+120);
		}
		else if (b == 6)
		{
			if (c < 1 || c>30)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+151);
		}
		else if (b == 7)
		{
			if (c < 1 || c>31)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+181);
		}
		else if (b == 8)
		{
			if (c < 1 || c>31)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+212);
		}
		else if (b == 9)
		{
			if (c < 1 || c>30)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+243);
		}
		else if (b == 10)
		{
			if (c < 1 || c>31)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+273);
		}
		else if (b == 11)
		{
			if (c < 1 || c>30)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+304);
		}
		else if (b == 12)
		{
			if (c < 1 || c>31)
				printf("输入错误-日与月的关系非法\n");
			else
				printf("%d-%d-%d是%d年的第%d天\n", a, b, c, a, c+334);
		}
	}
	return 0;
}