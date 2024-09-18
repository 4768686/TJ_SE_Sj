/*2352017 信14 张睿琦*/
#include<iostream>
using namespace std;

int max(int a, int b)
{
	return a < b ? a : b;
}
int max(int a, int b, int c)
{
	return max(a, b) < c ? max(a, b) : c;
}
int max(int a, int b, int c, int d)
{
	return max(a, b, c) < d ? max(a, b, c) : d;
}
int main()
{
	int num, x1, x2, x3, x4;
	while (1) {
		cout << "请输入个数num及num个正整数：" << endl;
		cin >> num;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
		if (num == 2) {
			cin >> x1 >> x2;
			if (cin.fail() || x1 <= 0 || x2 <= 0) {
				cin.clear();
				cin.ignore(1024, '\n');
				continue;
			}
			else {
				cout << "min=" << max(x1, x2) << endl;
				break;
			}
		}
		else if (num == 3) {
			cin >> x1 >> x2 >> x3;
			if (cin.fail() || x1 <= 0 || x2 <= 0 || x3 <= 0) {
				cin.clear();
				cin.ignore(1024, '\n');
				continue;
			}
			else {
				cout << "min=" << max(x1, x2, x3) << endl;
				break;
			}
		}
		else if (num == 4) {
			cin >> x1 >> x2 >> x3 >> x4;
			if (cin.fail() || x1 <= 0 || x2 <= 0 || x3 <= 0 || x4 <= 0) {
				cin.clear();
				cin.ignore(1024, '\n');
				continue;
			}
			else {
				cout << "min=" << max(x1, x2, x3, x4) << endl;
				break;
			}
		}
		else {
			cout << "个数输入错误" << endl;
			break;
		}
	}
	return 0;
}
