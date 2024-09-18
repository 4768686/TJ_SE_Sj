/* 2352017 ĞÅ14 ÕÅî£çù */
#include <iostream>
using namespace std;
#define N 80

int tj_strrev(char* str)
{
	if (str == NULL) {
		return 0;
	}
	else {
		int length;
		length = int(strlen(str));
		char* str_1 = str;
		char* str_2 = str + length - 2;
		for (; str_1 < str_2;str_1++,str_2--) {
			if (*str_1 != *str_2) {
				return 0;
			}
			else {
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	char str1[N];
	fgets(str1, N, stdin);
	int a = tj_strrev(str1);
	if (a == 0) {
		cout << "no";
	}
	else {
		cout << "yes";
	}
	cout << endl;
	return 0;
}