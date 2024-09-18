/*2352017 信14 张睿琦*/
#include<iostream>
#include<cstdlib>
#include<ctime>
#define line 10
using namespace std;

void output(int length, int daxie, int xiaoxie, int number, int others)
{
	static const char other[] = "!@#$%^&*-_=+,.?";
	srand((unsigned)time(NULL));
	char password[line][17];
	int l = length, d = daxie, x = xiaoxie, n = number, o = others;
	int z = l - d - x - n - o;
	for (int j = 0; j < line; j++) {
		for (int i = 0; i < length; i++) {
			char a = rand() % 94 + 33;
			if (a >= 'A' && a <= 'Z') {
				d--;
				if (d < 0) {
					d++;
					z--;
					if (z < 0) {
						z++;
						i--;
						continue;
					}
				}
			}
			else if (a >= 'a' && a <= 'z') {
				x--;
				if (x < 0) {
					x++;
					z--;
					if (z < 0) {
						z++;
						i--;
						continue;
					}
				}
			}
			else if (a >= '0' && a <= '9') {
				n--;
				if (n < 0) {
					n++;
					z--;
					if (z < 0) {
						z++;
						i--;
						continue;
					}
				}
			}
			else if (a == '!' || a == '@' || a == '#' || a == '$' || a == '%' || a == '^' || a == '&' || a == '*' || a == '-' || a == '_' || a == '=' || a == '+' || a == ',' || a == '.' || a == '?') {
				o--;
				if (o < 0) {
					o++;
					z--;
					if (z < 0) {
						z++;
						i--;
						continue;
					}
				}
			}
			else {
				i--;
				continue;
			}
			password[j][i] = a;
		}
		l = length, d = daxie, x = xiaoxie, n = number, o = others,z = l - d - x - n - o;
	}
	for (int j = 0; j < line; j++) {
		for (int i = 0; i < length; i++) {
			cout << password[j][i];
		}
		cout << endl;
	}
}
int main()
{
	int length, daxie, xiaoxie, number, others;
	cout << "请输入密码长度(12-16)， 大写字母个数(≥2)， 小写字母个数(≥2)， 数字个数(≥2)， 其它符号个数(≥2)" << endl;
	cin >> length >> daxie >> xiaoxie >> number >> others;
	if (cin.fail()) {
		cout << "输入非法" << endl;
		return 0;
	}
	if(length < 12 || length>16) {
		cout << "密码长度[" << length << "]不正确" << endl;
		return 0;
	}
	if (daxie < 2||daxie >= length) {
		cout << "大写字母个数["<<daxie<<"]不正确" << endl;
		return 0;
	}
	if (xiaoxie < 2 || xiaoxie >= length) {
		cout << "小写字母个数[" << xiaoxie << "]不正确" << endl;
		return 0;
	}
	if (number < 2 || number >= length) {
		cout << "数字个数[" << number << "]不正确" << endl;
		return 0;
	}
	if (others < 2 || others >= length) {
		cout << "其它符号个数[" << others << "]不正确" << endl;
		return 0;
	}
	if (length < daxie + xiaoxie + number + others) {
		cout << "所有字符类型之和[" << daxie << "+" << xiaoxie << "+" << number << "+" << others << "]大于总密码长度[" << length << "]" << endl;
		return 0;
	}
	cout << length << ' ' << daxie << ' ' << xiaoxie << ' ' << number << ' ' << others << endl;
	output(length, daxie, xiaoxie, number, others);
	return 0;
}
