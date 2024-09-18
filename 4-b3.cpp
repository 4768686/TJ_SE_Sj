/*2352017 信14 张睿琦*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

void calender(int year, int month ,int week)
{
	int  i = 1;

	cout << year << "年" << month << "月" << endl;
	/* 头部分隔线，不算打表 */
	cout << "======================================================" << endl;
	cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
	cout << "======================================================" << endl;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		while (1) {
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
				cout << setw(4 + 8 * static_cast<std::streamsize>(week)) << i;
				while (i <= 30) {
					if (week + i == 7 || week + i == 14 || week + i == 21 || week + i == 28 || week + i == 35) {
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
			else if (month == 4 || month == 6 || month == 9 || month == 11) {
				cout << setw(4 + 8 * static_cast<std::streamsize>(week)) << i;
				while (i <= 29) {
					if (week + i == 7 || week + i == 14 || week + i == 21 || week + i == 28 || week + i == 35) {
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
			else if (month == 2) {
				cout << setw(4 + 8 * static_cast<std::streamsize>(week)) << i;
				while (i <= 28) {
					if (week + i == 7 || week + i == 14 || week + i == 21 || week + i == 28 || week + i == 35) {
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
		}
	}
	else {
		while (1) {
			if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
				cout << setw(4 + 8 * static_cast<std::streamsize>(week)) << i;
				while (i <= 30) {
					if (week + i == 7 || week + i == 14 || week + i == 21 || week + i == 28 || week + i == 35) {
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
			else if (month == 4 || month == 6 || month == 9 || month == 11) {
				cout << setw(4 + 8 * static_cast<std::streamsize>(week)) << i;
				while (i <= 29) {
					if (week + i == 7 || week + i == 14 || week + i == 21 || week + i == 28 || week + i == 35) {
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
			else if (month == 2) {
				cout << setw(4 + 8 * static_cast<std::streamsize>(week)) << i;
				while (i <= 27) {
					if (week + i == 7 || week + i == 14 || week + i == 21 || week + i == 28 || week + i == 35) {
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
		}
	}
	cout << endl;
	/* 尾部分隔线，不算打表 */
	cout << "======================================================" << endl;
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
	w1 = y + y / 4 + c / 4 - 2 * c + (13 * (m + 1) / 5) ;
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
		cout << "请输入年[1900-2100]、月" << endl;
		cin >> y >> m ;
		if (!cin.good()) {
			cin.clear();
			cin.ignore(1024, '\n');
			cout << "输入错误，请重新输入" << endl;
			continue;
		}
		if (y < 1900 || y > 2100) {
			cin.clear();
			cin.ignore(1024, '\n');
			cout << "年份不正确，请重新输入" << endl;
			continue;
		}
		if (m < 1 || m > 12) {
			cin.clear();
			cin.ignore(1024, '\n');
			cout << "月份不正确，请重新输入" << endl;
			continue;
		}
		cout << endl;
		w = zeller(y, m, 1);
		calender(y, m, w);
		break;
	}
}