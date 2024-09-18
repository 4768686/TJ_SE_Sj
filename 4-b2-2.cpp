/* 2352017 信14 张睿琦 */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

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
	w1 = y + y / 4 + c / 4 - 2 * c + (13 * (m + 1) / 5) + d - 1;
	while (w1 < 0){
		w1 += 7;
	}
	w = w1 % 7;
	return w;
}

int main()
{
	int y, m, d, w;
	while (1)
	{
		cout << "请输入年[1900-2100]、月、日：" << endl;
		cin >> y >> m >> d;
		if (!cin.good()) {
			cin.clear();
			cin.ignore(1024, '\n');
			cout << "输入错误，请重新输入"<<endl;
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
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {

			if (d < 1 || d > 31) {
				cin.clear();
				cin.ignore(1024, '\n');
				cout << "日不正确，请重新输入" << endl;
				continue;
			}
		}
		else if (m == 4 || m == 6 || m == 9 || m == 11) {
			if (d < 1 || d > 30) {
				cin.clear();
				cin.ignore(1024, '\n');
				cout << "日不正确，请重新输入" << endl;
				continue;
			}
		}
		else if (m == 2) {
			if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
				if (d < 1 || d > 29) {
					cin.clear();
					cin.ignore(1024, '\n');
					cout << "日不正确，请重新输入" << endl;
					continue;
				}
			}
			else if (d < 1 || d > 28) {
					cin.clear();
					cin.ignore(1024, '\n');
					cout << "日不正确，请重新输入" << endl;
					continue;
			}
		}
		w = zeller(y, m, d);
		switch (w) {
		case(0):
			cout << "星期日";
			break;
		case(1):
			cout << "星期一";
			break;
		case(2):
			cout << "星期二";
			break;
		case(3):
			cout << "星期三";
			break;
		case(4):
			cout << "星期四";
			break;
		case(5):
			cout << "星期五";
			break;
		case(6):
			cout << "星期六";
			break;
		default:
			break;
		}
		break;
	}
	cout << endl;
	return 0;
}