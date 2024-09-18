/*2352017 信14 张睿琦*/
#include<iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	char str[3][128];
	for (int i = 0; i < 3; i++) {
		cout << "请输入第" << i + 1 << "行" << endl;
		cin.getline(str[i], 128);
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; str[i][j] != '\0'; j++) {
			if (str[i][j] >= 'A' && str[i][j] <= 'Z') {
				a++;
			}
			else if (str[i][j] >= 'a' && str[i][j] <= 'z') {
				b++;
			}
			else if (str[i][j] >= '0' && str[i][j] <= '9') {
				c++;
			}
			else if (str[i][j] == ' ' ) {
				d++;
			}
			else {
				e++;
			}
		}
	}
	cout << "大写 : " << a << endl;
	cout << "小写 : " << b << endl;
	cout << "数字 : " << c << endl;
	cout << "空格 : " << d << endl;
	cout << "其它 : " << e << endl;
	return 0;
}