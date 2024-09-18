/* 2352017 信14 张睿琦 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, i = 1;
	while (1) {
		printf("请输入年份(2000-2030)和月份(1-12) : ");
		scanf("%d %d",&a ,&b);
		if (a >= 2000 && a <= 2030 && b >= 1 && b <= 12) {
			if (a == 2000 || a == 2004 || a == 2008 || a == 2012 || a == 2016 || a == 2020 || a == 2024 || a == 2028) {
				while (1) {
					printf ("请输入%d年%d月1日的星期(0 - 6表示星期日 - 星期六) : ",a,b);
					scanf("%d",&c);
					if (c >= 0 && c <= 6) {
						if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
							printf("\n%d年%d月的日历为:\n",a,b);
							printf("星期日  星期一  星期二  星期三  星期四  星期五  星期六\n");
							switch (c) {
							case 0:
								printf("%4d", i);
								break;
							case 1:
								printf("%12d", i);
								break;
							case 2:
								printf("%20d", i);
								break;
							case 3:
								printf("%28d", i);
								break;
							case 4:
								printf("%36d", i);
								break;
							case 5:
								printf("%44d", i);
								break;
							case 6:
								printf("%52d", i);
								break;
							default:
								break;
							}
							while (i <= 30) {
								if (c + i == 7 || c + i == 14 || c + i == 21 || c + i == 28) {
									printf("\n");
									i++;
									printf("%4d",i);
									continue;
								};
								i++;
								printf("%8d",i);
							}
							break;
						}
						else if (b == 4 || b == 6 || b == 9 || b == 11) {
							printf("\n%d年%d月的日历为:\n", a, b);
							printf("星期日  星期一  星期二  星期三  星期四  星期五  星期六\n");
							switch (c) {
							case 0:
								printf("%4d", i);
								break;
							case 1:
								printf("%12d", i);
								break;
							case 2:
								printf("%20d", i);
								break;
							case 3:
								printf("%28d", i);
								break;
							case 4:
								printf("%36d", i);
								break;
							case 5:
								printf("%44d", i);
								break;
							case 6:
								printf("%52d", i);
								break;
							default:
								break;
							}
							while (i <= 29) {
								if (c + i == 7 || c + i == 14 || c + i == 21 || c + i == 28) {
									printf("\n");
									i++;
									printf("%4d", i);
									continue;
								};
								i++;
								printf("%8d", i);
							}
							break;
						}
						else if (b == 2) {
							printf("\n%d年%d月的日历为:\n", a, b);
							printf("星期日  星期一  星期二  星期三  星期四  星期五  星期六\n");
							switch (c) {
							case 0:
								printf("%4d", i);
								break;
							case 1:
								printf("%12d", i);
								break;
							case 2:
								printf("%20d", i);
								break;
							case 3:
								printf("%28d", i);
								break;
							case 4:
								printf("%36d", i);
								break;
							case 5:
								printf("%44d", i);
								break;
							case 6:
								printf("%52d", i);
								break;
							default:
								break;
							}
							while (i <= 28) {
								if (c + i == 7 || c + i == 14 || c + i == 21 || c + i == 28) {
									printf("\n");
									i++;
									printf("%4d", i);
									continue;
								};
								i++;
								printf("%8d", i);
							}
							break;
						}
						else {
							char a = 1;
							while (a = getchar() != '\n' && a != EOF) {
								continue;
							}
							printf("输入非法，请重新输入\n");
							continue;
						}
					}
					else {
						char a = 1;
						while (a = getchar() != '\n' && a != EOF) {
							continue;
						}
						printf("输入非法，请重新输入\n");
						continue;
					}
				}
				break;
			}
			else {
				while (1) {
					printf("请输入%d年%d月1日的星期(0 - 6表示星期日 - 星期六) : ", a, b);
					scanf("%d",&c);
					if (c >= 0 && c <= 6) {
						if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
							printf("\n%d年%d月的日历为:\n", a, b);
							printf("星期日  星期一  星期二  星期三  星期四  星期五  星期六\n");
							switch (c) {
							case 0:
								printf("%4d", i);
								break;
							case 1:
								printf("%12d", i);
								break;
							case 2:
								printf("%20d", i);
								break;
							case 3:
								printf("%28d", i);
								break;
							case 4:
								printf("%36d", i);
								break;
							case 5:
								printf("%44d", i);
								break;
							case 6:
								printf("%52d", i);
								break;
							default:
								break;
							}
							while (i <= 30) {
								if (c + i == 7 || c + i == 14 || c + i == 21 || c + i == 28) {
									printf("\n");
									i++;
									printf("%4d", i);
									continue;
								};
								i++;
								printf("%8d", i);
							}
							break;
						}
						else if (b == 4 || b == 6 || b == 9 || b == 11) {
							printf("\n%d年%d月的日历为:\n", a, b);
							printf("星期日  星期一  星期二  星期三  星期四  星期五  星期六\n");
							switch (c) {
							case 0:
								printf("%4d", i);
								break;
							case 1:
								printf("%12d", i);
								break;
							case 2:
								printf("%20d", i);
								break;
							case 3:
								printf("%28d", i);
								break;
							case 4:
								printf("%36d", i);
								break;
							case 5:
								printf("%44d", i);
								break;
							case 6:
								printf("%52d", i);
								break;
							default:
								break;
							}
							while (i <= 29) {
								if (c + i == 7 || c + i == 14 || c + i == 21 || c + i == 28) {
									printf("\n");
									i++;
									printf("%4d", i);
									continue;
								};
								i++;
								printf("%8d", i);
							}
							break;
						}
						else if (b == 2) {
							printf("\n%d年%d月的日历为:\n", a, b);
							printf("星期日  星期一  星期二  星期三  星期四  星期五  星期六\n");
							switch (c) {
							case 0:
								printf("%4d", i);
								break;
							case 1:
								printf("%12d", i);
								break;
							case 2:
								printf("%20d", i);
								break;
							case 3:
								printf("%28d", i);
								break;
							case 4:
								printf("%36d", i);
								break;
							case 5:
								printf("%44d", i);
								break;
							case 6:
								printf("%52d", i);
								break;
							default:
								break;
							}
							while (i <= 27) {
								if (c + i == 7 || c + i == 14 || c + i == 21 || c + i == 28) {
									printf("\n");
									i++;
									printf("%4d", i);
									continue;
								};
								i++;
								printf("%8d", i);
							}
							break;
						}
						else {
							char a = 1;
							while (a = getchar() != '\n' && a != EOF) {
								continue;
							}
							printf("输入非法，请重新输入\n");
							continue;
						}
					}
					else {
						char a = 1;
						while (a = getchar() != '\n' && a != EOF) {
							continue;
						}
						printf("输入非法，请重新输入\n");
						continue;
					}
				}
				break;
			}
		}
		else {
			char a = 1;
			while (a = getchar() != '\n' && a != EOF) {
				continue;
			}
			printf("输入非法，请重新输入\n");
			continue;
		}
	}
	printf("\n");
	return 0;
}