/* 2352017 信14 张睿琦 */
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a, b, c, i = 1;
	while (1) {
		cout << "请输入年份(2000-2030)和月份(1-12) : ";
		cin >> a >> b;
		if (a >= 2000 && a <= 2030 && b >= 1 && b <= 12) {
			if (a == 2000 || a == 2004 || a == 2008 || a == 2012 || a == 2016 || a == 2020 || a == 2024 || a == 2028) {
				while (1) {
					cout << "请输入" << a << "年" << b << "月1日的星期(0 - 6表示星期日 - 星期六) : ";
					cin >> c;
					if (c >= 0 && c <= 6) {
						if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
							cout<< endl << a << "年" << b << "月的日历为:" << endl;
							cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
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
							cout <<endl<< a << "年" << b << "月的日历为:" << endl;
							cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
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
							cout <<endl<< a << "年" << b << "月的日历为:" << endl;
							cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
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
							cout << "输入非法，请重新输入" << endl;
							continue;
						}
					}
					else {
						cin.clear();
						cin.ignore(114514, '\n');
						cout << "输入非法，请重新输入" << endl;
						continue;
					}
				}
				break;
			}
			else {
				while (1) {
					cout << "请输入" << a << "年" << b << "月1日的星期(0 - 6表示星期日 - 星期六) : ";
					cin >> c;
					if (c >= 0 && c <= 6) {
						if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) {
							cout <<endl<< a << "年" << b << "月的日历为:" << endl;
							cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
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
							cout <<endl<< a << "年" << b << "月的日历为:" << endl;
							cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
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
							cout << endl << a << "年" << b << "月的日历为:" << endl;
							cout << "星期日  星期一  星期二  星期三  星期四  星期五  星期六" << endl;
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
							cout << "输入非法，请重新输入" << endl;
							continue;
						}
					}
					else {
						cin.clear();
						cin.ignore(114514, '\n');
						cout << "输入非法，请重新输入" << endl;
						continue;
					}
				}
				break;
			}
		}
		else {
			cin.clear();
			cin.ignore(114514, '\n');
			cout << "输入非法，请重新输入" << endl;
			continue;
		}
	}
	cout << endl;
	return 0;
}