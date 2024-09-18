/*2352017 信14 张睿琦*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void calender(int year,int month, int week)
{
	int  i = 1;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		while (1) {
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
				cout << setw(1 + 4 * static_cast<std::streamsize>(week)) << i;
				while (i <= 30) {
					if (week + i == 7 || week + i == 14 || week + i == 21 || week + i == 28 || week + i == 35) {
						cout << endl;
						i++;
						cout << i;
						if (i == 9) {
							cout << ' ';
						}
						continue;
					};
					i++;
					cout << setw(4) << i;
					if (i == 9) {
						cout << ' ';
					}
				}
				break;
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11) {
				cout << setw(1 + 4 * static_cast<std::streamsize>(week)) << i;
				while (i <= 29) {
					if (week + i == 7 || week + i == 14 || week + i == 21 || week + i == 28 || week + i == 35) {
						cout << endl;
						i++;
						cout << i;
						if (i == 9) {
							cout << ' ';
						}
						continue;
					};
					i++;
					cout << setw(4) << i;
					if (i == 9) {
						cout << ' ';
					}
				}
				break;
			}
			else if (month == 2) {
				cout << setw(1 + 4 * static_cast<std::streamsize>(week)) << i;
				while (i <= 28) {
					if (week + i == 7 || week + i == 14 || week + i == 21 || week + i == 28 || week + i == 35) {
						cout << endl;
						i++;
						cout << i;
						if (i == 9) {
							cout << ' ';
						}
						continue;
					};
					i++;
					cout << setw(4) << i;
					if (i == 9) {
						cout << ' ';
					}
				}
				break;
			}
		}
	}
	else {
		while (1) {
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
				cout << setw(1 + 4 * static_cast<std::streamsize>(week)) << i;
				while (i <= 30) {
					if (week + i == 7 || week + i == 14 || week + i == 21 || week + i == 28 || week + i == 35) {
						cout << endl;
						i++;
						cout << i;
						if (i == 9) {
							cout << ' ';
						}
						continue;
					};
					i++;
					cout << setw(4) << i;
					if (i == 9) {
						cout << ' ';
					}
				}
				break;
			}
			else if (month == 4 || month == 6 || month == 9 || month == 11) {
				cout << setw(1 + 4 * static_cast<std::streamsize>(week)) << i;
				while (i <= 29) {
					if (week + i == 7 || week + i == 14 || week + i == 21 || week + i == 28 || week + i == 35) {
						cout << endl;
						i++;
						cout << i;
						if (i == 9) {
							cout << ' ';
						}
						continue;
					};
					i++;
					cout << setw(4) << i;
					if (i == 9) {
						cout << ' ';
					}
				}
				break;
			}
			else if (month == 2) {
				cout << setw(1 + 4 * static_cast<std::streamsize>(week)) << i;
				while (i <= 27) {
					if (week + i == 7 || week + i == 14 || week + i == 21 || week + i == 28 || week + i == 35) {
						cout << endl;
						i++;
						cout << i;
						if (i == 9) {
							cout << ' ';
						}
						continue;
					};
					i++;
					cout << setw(4) << i;
					if (i == 9) {
						cout << ' ';
					}
				}
				break;
			}
		}
	}
	cout << endl;
	/* 尾部分隔线，不算打表 */
}

int zeller(int y, int m, int d)
{
	int c, w, w1;
	switch (m) {
	case 1:
	case 2:
		m = m + 12;
		y = y - 1;
		break;
	default:
		break;
	}
	c = y / 100;
	y = y % 100;
	w1 = y + y / 4 + c / 4 - 2 * c + (13 * (m + 1) / 5);
	while (w1 < 0) {
		w1 += 7;
	}
	w = w1 % 7;
	return w;
}

int main()
{
	int y, m, w;
	while (1)
	{
		cout << "请输入年[1900-2100]" << endl;
		cin >> y;
		if (!cin.good()) {
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
		if (y < 1900 || y > 2100) {
			cin.clear();
			cin.ignore(1024, '\n');
			continue;
		}
		cout << endl;
		cout << y << "年的日历:" << endl;
		cout << endl;
		cout << "            1月                             2月                             3月" << endl;
		cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;
		w = zeller(y, 1, 1);
		calender(y, 1, w);
		w = zeller(y, 2, 1);
		calender(y, 2, w);
		w = zeller(y, 3, 1);
		calender(y, 3, w);
		cout << endl;
		cout << "            4月                             5月                             6月" << endl;
		cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;
		w = zeller(y, 4, 1);
		calender(y, 4, w);
		w = zeller(y, 5, 1);
		calender(y, 5, w);
		w = zeller(y, 6, 1);
		calender(y, 6, w);
		cout << endl;
		cout << "            7月                             8月                             9月" << endl;
		cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;
		w = zeller(y, 7, 1);
		calender(y, 7, w);
		w = zeller(y, 8, 1);
		calender(y, 8, w);
		w = zeller(y, 9, 1);
		calender(y, 9, w);
		cout << endl;
		cout << "           10月                            11月                            12月" << endl;
		cout << "Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat     Sun Mon Tue Wed Thu Fri Sat" << endl;
		w = zeller(y, 10, 1);
		calender(y, 10, w);
		w = zeller(y, 11, 1);
		calender(y, 11, w);
		w = zeller(y, 12, 1);
		calender(y, 12, w);
		break;
	}
	cout << endl;
}