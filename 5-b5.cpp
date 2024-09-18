/*2352017 信14 张睿琦*/
#include<iostream>
#define N 1001
using namespace std;

int main()
{
	int a[N]{}, i = 0, j, k, p, q, sum1 = 1, sum2 = 1;
	cout << "请输入成绩（最多1000个），负数结束输入" << endl;
	while (i < N) {
		cin >> a[i];
		if (a[i] < 0) {
			break;
		}
		else {
			i++;
			continue;
		}
	}
	while (1) {
		if (a[0] < 0) {
			cout << "无有效输入";
			break;
		}
		if (i >= 0 && i < N) {
			cout << "输入的数组为:" << endl;;
			for (j = 0; j < i; j++) {
				cout<<a[j]<<' ';
				if ((j >= 9 && (j + 1) % 10 == 0) || j == i - 1)
					cout << endl;
			}
			break;
		}
	}
	for (k = 0; k < i - 1; k++) {
		for (q = 0; q < i - k - 1; q++) {
			if (a[q] < a[q + 1]) {
				swap(a[q], a[q + 1]);
			}
		}
	}
	cout << "分数与名次的对应关系为:" << endl;
	for (p = 0; p < i; p++) {
		if (a[p] >= 0) {
			if (a[p] == a[p + 1]) {
				cout << a[p] <<' '<< sum1 << endl;
				sum2++;
			}
			else {
				cout << a[p] <<' '<< sum1 << endl;
				sum2++;
				sum1 = sum2;
			}
		}
	}
	return 0;
}