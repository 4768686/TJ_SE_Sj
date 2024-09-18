/*2352017 信14 张睿琦*/
#include<iostream>
#include<cstring>
#define NUM 10
using namespace std;

void input(string num[], string name[], int grade[])
{
	for (int i = 0; i < NUM; i++) {
		cout << "请输入第" << i + 1 << "个人的学号、姓名、成绩" << endl;
		cin >> num[i] >> name[i] >> grade[i];
	}
}
void ranking(string num[], string name[], int grade[])
{
	int i, j, c;
	string a, b;
	for (i = NUM; i > 0; i--) {
		for (j = 0; j < i - 1; j++) {
			if (num[j] > num[j + 1]) {
				a = num[j];
				num[j] = num[j + 1];
				num[j + 1] = a;
				b = name[j];
				name[j] = name[j + 1];
				name[j + 1] = b;
				c = grade[j];
				grade[j] = grade[j + 1];
				grade[j + 1] = c;
			}
		}
	}
}
void output(string num[], string name[], int grade[])
{
	cout << endl;
	cout << "全部学生(学号升序):\n";
	for (int i = 0; i < NUM; i++) {
		cout << name[i] << ' ' << num[i] << ' ' << grade[i] << endl;
	}
}
int main()
{
	string num[NUM], name[NUM];
	int grade[NUM];
	input(num, name, grade);
	ranking(num, name, grade);
	output(num, name, grade);
	return 0;
}