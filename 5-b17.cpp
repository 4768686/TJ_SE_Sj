/*2352017 ��14 �����*/
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
	cout << "���������볤��(12-16)�� ��д��ĸ����(��2)�� Сд��ĸ����(��2)�� ���ָ���(��2)�� �������Ÿ���(��2)" << endl;
	cin >> length >> daxie >> xiaoxie >> number >> others;
	if (cin.fail()) {
		cout << "����Ƿ�" << endl;
		return 0;
	}
	if(length < 12 || length>16) {
		cout << "���볤��[" << length << "]����ȷ" << endl;
		return 0;
	}
	if (daxie < 2||daxie >= length) {
		cout << "��д��ĸ����["<<daxie<<"]����ȷ" << endl;
		return 0;
	}
	if (xiaoxie < 2 || xiaoxie >= length) {
		cout << "Сд��ĸ����[" << xiaoxie << "]����ȷ" << endl;
		return 0;
	}
	if (number < 2 || number >= length) {
		cout << "���ָ���[" << number << "]����ȷ" << endl;
		return 0;
	}
	if (others < 2 || others >= length) {
		cout << "�������Ÿ���[" << others << "]����ȷ" << endl;
		return 0;
	}
	if (length < daxie + xiaoxie + number + others) {
		cout << "�����ַ�����֮��[" << daxie << "+" << xiaoxie << "+" << number << "+" << others << "]���������볤��[" << length << "]" << endl;
		return 0;
	}
	cout << length << ' ' << daxie << ' ' << xiaoxie << ' ' << number << ' ' << others << endl;
	output(length, daxie, xiaoxie, number, others);
	return 0;
}
