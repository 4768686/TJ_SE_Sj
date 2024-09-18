/*2352017 信14 张睿琦*/
#include <iostream>
using namespace std;

int f1()
{
	int a[9][9] = {};
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - 1; j++) {
			for (int k = j + 1; k < 9; k++) {
				if (a[i][j] == a[i][k]) 
					return 0;
			}
		}
	}
	return 1;
}

int f2()
{
	int a[9][9] = {};
	for (int j = 0; j < 9; j++) {
		for (int i = 0; i < 9 - 1; i++) {
			for (int k = i + 1; k < 9; k++) {
				if (a[i][j] == a[k][j]) 
					return 0;
			}
		}
	}
	return 1;
}

int f3()
{
	int a[9][9] = {};
	int a1[9], a2[9], a3[9], a4[9], a5[9], a6[9], a7[9], a8[9], a9[9];
	for (int k = 0; k < 9; k++) {
		for (int i = 0; i < 3; k++) {
			for (int j = 0; j < 3; k++) {
				a1[k] = a[i][j];
				for (int k = 0; k < 9 - 1; k++) {
					for (int p = k + 1; p < 9; p++) {
						if (a1[p] == a1[k])
							return 0;
					}
				}
			}
		}
	}
	for (int k = 0; k < 9; k++) {
		for (int i = 0; i < 3; k++) {
			for (int j = 3; j < 6; k++) {
				a2[k] = a[i][j];
				for (int k = 0; k < 9 - 1; k++) {
					for (int p = k + 1; p < 9; p++) {
						if (a1[p] == a1[k])
							return 0;
					}
				}
			}
		}
	}
	for (int k = 0; k < 9; k++) {
		for (int i = 0; i < 3; k++) {
			for (int j = 6; j < 9; k++) {
				a3[k] = a[i][j];
				for (int k = 0; k < 9 - 1; k++) {
					for (int p = k + 1; p < 9; p++) {
						if (a1[p] == a1[k])
							return 0;
					}
				}
			}
		}
	}
	for (int k = 0; k < 9; k++) {
		for (int i = 3; i < 6; k++) {
			for (int j = 0; j < 3; k++) {
				a4[k] = a[i][j];
				for (int k = 0; k < 9 - 1; k++) {
					for (int p = k + 1; p < 9; p++) {
						if (a1[p] == a1[k])
							return 0;
					}
				}
			}
		}
	}
	for (int k = 0; k < 9; k++) {
		for (int i = 3; i < 6; k++) {
			for (int j = 3; j < 6; k++) {
				a5[k] = a[i][j];
				for (int k = 0; k < 9 - 1; k++) {
					for (int p = k + 1; p < 9; p++) {
						if (a1[p] == a1[k])
							return 0;
					}
				}
			}
		}
	}
	for (int k = 0; k < 9; k++) {
		for (int i = 3; i < 6; k++) {
			for (int j = 6; j < 9; k++) {
				a6[k] = a[i][j];
				for (int k = 0; k < 9 - 1; k++) {
					for (int p = k + 1; p < 9; p++) {
						if (a1[p] == a1[k])
							return 0;
					}
				}
			}
		}
	}
	for (int k = 0; k < 9; k++) {
		for (int i = 6; i < 9; k++) {
			for (int j = 0; j < 3; k++) {
				a7[k] = a[i][j];
				for (int k = 0; k < 9 - 1; k++) {
					for (int p = k + 1; p < 9; p++) {
						if (a1[p] == a1[k])
							return 0;
					}
				}
			}
		}
	}
	for (int k = 0; k < 9; k++) {
		for (int i = 6; i < 9; k++) {
			for (int j = 3; j < 6; k++) {
				a8[k] = a[i][j];
				for (int k = 0; k < 9 - 1; k++) {
					for (int p = k + 1; p < 9; p++) {
						if (a1[p] == a1[k])
							return 0;
					}
				}
			}
		}
	}
	for (int k = 0; k < 9; k++) {
		for (int i = 6; i < 9; k++) {
			for (int j = 6; j < 9; k++) {
				a9[k] = a[i][j];
				for (int k = 0; k < 9 - 1; k++) {
					for (int p = k + 1; p < 9; p++) {
						if (a1[p] == a1[k])
							return 0;
					}
				}
			}
		}
	}
	return 1;
}

int main()
{
	int a[9][9] = {};
	cout << "请输入9*9的矩阵，值为1-9之间" << endl;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			while (1) {
				cin >> a[i][j];
				if (cin.fail())
				{
					cout << "请重新输入第" << i + 1 << "行" << j + 1 << "列(行列均从1开始计数)的值" << endl;
					cin.clear();
					cin.ignore(1024, '\n');
					continue;
				}
				else if (a[i][j] <= 0 || a[i][j] >= 10)
				{
					cout << "请重新输入第" << i + 1 << "行" << j + 1 << "列(行列均从1开始计数)的值" << endl;
					continue;
				}
				else {
					break;
				}
			}
		}
	}
	f1();
	f2();
	int b = f1();
	int c = f2();
	int d = f3();
	if (b == 0 || c == 0 || d == 0)
		cout << "不是数独的解" << endl;
	else
		cout << "是数独的解" << endl;
	return 0;
}
	
