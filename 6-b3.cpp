/* 2352017 ��14 ����� */
#include <iostream>
#include<cmath>
using namespace std;
#define N 33

int main()
{
	char str[N];
	cout << "������һ��0/1��ɵ��ַ��������Ȳ�����32" << endl;
	cin.getline(str, N, '\n');
	char* p;
	unsigned int sum, dec = 0;
	sum = unsigned int(strlen(str)) - 1;
	for (p = str; *p != '\0'; p++) {
		dec = unsigned int(int(*p - '0') * pow(2, sum) + dec);
		sum--;
	}
	cout << dec << endl;
}