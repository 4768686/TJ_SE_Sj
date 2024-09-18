/*2352017 信14 张睿琦*/
#include<iostream>
#include<string>
#define N 21
using namespace std;

int main()
{
	int a[N]{}, i = 0, j, b;
	cout << "请输入任意个正整数（升序，最多20个），0或负数结束输入" << endl;
	while(i < 20) {
		cin >> a[i];
		if (a[i] <= 0) {
			break;
		}
		else {
			i++;
			continue;
		}
	}
	while(1) {
		if (a[0] <= 0 || i == 0) {
			cout << "无有效输入";
			break;
		}
		if (i > 0 && i < 20) {
			cout << "原数组为：" << endl;
			for (j = 0; j < N; j++) {
				if (a[j] > 0) {
					cout << a[j] << ' ';
				}
			}
			cout << endl;
			cout << "请输入要插入的正整数" << endl;
			cin >> a[N - 1];
			for (j = N - 1; j > 0; j--) {
				for (b = 0; b < j; b++) {
					if (a[b] > a[b + 1]) {
						swap(a[b], a[b + 1]);
					}
				}
			}
			cout << "插入后的数组为：" << endl;
			for (j = 0; j < N; j++) {
				if (a[j] > 0) {
					cout << a[j] << ' ';
				}
			}
			break;
		}
		if (i >= 20) {
			cin.clear();
			cin.ignore(1024, '\n');
			cout << "原数组为：" << endl;
			for (j = 0; j < 20; j++) {
				if (a[j] > 0) {
					cout << a[j] << ' ';
				}
			}
			cout << endl;
			cout << "请输入要插入的正整数" << endl;
			cin >> a[N - 1];
			for (j = N - 1; j > 0; j--) {
				for (b = 0; b < j; b++) {
					if (a[b] > a[b + 1]) {
						swap(a[b], a[b + 1]);
					}
				}
			}
			cout << "插入后的数组为：" << endl;
			for (j = 0; j < N; j++) {
				if (a[j] > 0) {
					cout << a[j] << ' ';
				}
			}
			break;
		}
	}
	cout << endl;
	return 0;
}