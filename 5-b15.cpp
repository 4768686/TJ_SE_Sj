/*2352017 ��14 �����*/
#include<iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	char str[3][128];
	for (int i = 0; i < 3; i++) {
		cout << "�������" << i + 1 << "��" << endl;
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
	cout << "��д : " << a << endl;
	cout << "Сд : " << b << endl;
	cout << "���� : " << c << endl;
	cout << "�ո� : " << d << endl;
	cout << "���� : " << e << endl;
	return 0;
}