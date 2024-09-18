/*2352017 信14 张睿琦*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define NUM 10

void input(char num[][8], char name[][9], int grade[])
{
	for (int i = 0; i < NUM; i++) {
		printf("请输入第%d个人的学号、姓名、成绩\n", i + 1);
		scanf("%s %s %d", num[i], name[i], &grade[i]);
	}
}
void ranking(char num[][8], char name[][9], int grade[])
{
	int i, j, c;
	char a[8], b[9];
	for (i = NUM; i > 0; i--) {
		for (j = 0; j < i - 1; j++) {
			if (grade[j] < grade[j + 1]) {
				strcpy(a, num[j]);
				strcpy(num[j], num[j + 1]);
				strcpy(num[j + 1], a);
				strcpy(b, name[j]);
				strcpy(name[j], name[j + 1]);
				strcpy(name[j + 1], b);
				c = grade[j];
				grade[j] = grade[j + 1];
				grade[j + 1] = c;
			}
		}
	}
}
void output(char num[][8], char name[][9], int grade[])
{
	printf("\n");
	printf("全部学生(成绩降序):\n");
	for (int i = 0; i < NUM; i++) {
		printf("%s %s %d\n", name[i], num[i], grade[i]);
	}
}
int main()
{
	char num[NUM][8], name[NUM][9];
	int grade[NUM];
	input(num, name, grade);
	ranking(num, name, grade);
	output(num, name, grade);
	return 0;
}