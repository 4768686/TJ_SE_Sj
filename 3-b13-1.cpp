/* 2352017 ��14 ����� */
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a, b, c, i = 1;
	while (1) {
		cout << "���������(2000-2030)���·�(1-12) : ";
		cin >> a >> b;
		if (a >= 2000 && a <= 2030 && b >= 1 && b <= 12) {
			if (a == 2000 || a == 2004 || a == 2008 || a == 2012 || a == 2016 || a == 2020 || a == 2024 || a == 2028) {
				while (1) {
					cout << "������" << a << "��" << b << "��1�յ�����(0 - 6��ʾ������ - ������) : ";
					cin >> c;
					if (c >= 0 && c <= 6) {
						if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
							cout<< endl << a << "��" << b << "�µ�����Ϊ:" << endl;
							cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������" << endl;
							cout << setw(4 + 8 * static_cast<std::streamsize>(c)) << i;
							while (i <= 30) {
								if (c + i == 7 || c + i == 14 || c + i == 21 || c + i == 28) {
									cout << endl;
									i++;
									cout << setw(4) << i;
									continue;
								};
								i++;
								cout << setw(8) << i;
							}
							break;
						}
						else if (b == 4 || b == 6 || b == 9 || b == 11) {
							cout <<endl<< a << "��" << b << "�µ�����Ϊ:" << endl;
							cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������" << endl;
							cout << setw(4 + 8 * static_cast<std::streamsize>(c)) << i;
							while (i <= 29) {
								if (c + i == 7 || c + i == 14 || c + i == 21 || c + i == 28) {
									cout << endl;
									i++;
									cout << setw(4) << i;
									continue;
								};
								i++;
								cout << setw(8) << i;
							}
							break;
						}
						else if (b == 2) {
							cout <<endl<< a << "��" << b << "�µ�����Ϊ:" << endl;
							cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������" << endl;
							cout << setw(4 + 8 * static_cast<std::streamsize>(c)) << i;
							while (i <= 28) {
								if (c + i == 7 || c + i == 14 || c + i == 21 || c + i == 28) {
									cout << endl;
									i++;
									cout << setw(4) << i;
									continue;
								};
								i++;
								cout << setw(8) << i;
							}
							break;
						}
						else {
							cin.clear();
							cin.ignore(114514, '\n');
							cout << "����Ƿ�������������" << endl;
							continue;
						}
					}
					else {
						cin.clear();
						cin.ignore(114514, '\n');
						cout << "����Ƿ�������������" << endl;
						continue;
					}
				}
				break;
			}
			else {
				while (1) {
					cout << "������" << a << "��" << b << "��1�յ�����(0 - 6��ʾ������ - ������) : ";
					cin >> c;
					if (c >= 0 && c <= 6) {
						if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
							cout <<endl<< a << "��" << b << "�µ�����Ϊ:" << endl;
							cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������" << endl;
							cout << setw(4 + 8 * static_cast<std::streamsize>(c)) << i;
							while (i <= 30) {
								if (c + i == 7 || c + i == 14 || c + i == 21 || c + i == 28) {
									cout << endl;
									i++;
									cout << setw(4) << i;
									continue;
								};
								i++;
								cout << setw(8) << i;
							}
							break;
						}
						else if (b == 4 || b == 6 || b == 9 || b == 11) {
							cout <<endl<< a << "��" << b << "�µ�����Ϊ:" << endl;
							cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������" << endl;
							cout << setw(4 + 8 * static_cast<std::streamsize>(c)) << i;
							while (i <= 29) {
								if (c + i == 7 || c + i == 14 || c + i == 21 || c + i == 28) {
									cout << endl;
									i++;
									cout << setw(4) << i;
									continue;
								};
								i++;
								cout << setw(8) << i;
							}
							break;
						}
						else if (b == 2) {
							cout << endl << a << "��" << b << "�µ�����Ϊ:" << endl;
							cout << "������  ����һ  ���ڶ�  ������  ������  ������  ������" << endl;
							cout << setw(4 + 8 * static_cast<std::streamsize>(c)) << i;
							while (i <= 27) {
								if (c + i == 7 || c + i == 14 || c + i == 21 || c + i == 28) {
									cout << endl;
									i++;
									cout << setw(4) << i;
									continue;
								};
								i++;
								cout << setw(8) << i;
							}
							break;
						}
						else {
							cin.clear();
							cin.ignore(114514, '\n');
							cout << "����Ƿ�������������" << endl;
							continue;
						}
					}
					else {
						cin.clear();
						cin.ignore(114514, '\n');
						cout << "����Ƿ�������������" << endl;
						continue;
					}
				}
				break;
			}
		}
		else {
			cin.clear();
			cin.ignore(114514, '\n');
			cout << "����Ƿ�������������" << endl;
			continue;
		}
	}
	cout << endl;
	return 0;
}