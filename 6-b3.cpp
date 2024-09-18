/* 2352017 信14 张睿琦 */
#include <iostream>
#include<cmath>
using namespace std;
#define N 33

int main()
{
	char str[N];
	cout << "请输入一个0/1组成的字符串，长度不超过32" << endl;
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