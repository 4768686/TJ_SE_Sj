/*2352017 ��14 �����*/
#include<iostream>
#include<string>
#define N 21
using namespace std;

int main()
{
	int a[N]{}, i = 0, j, b;
	cout << "��������������������������20������0������������" << endl;
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
			cout << "����Ч����";
			break;
		}
		if (i > 0 && i < 20) {
			cout << "ԭ����Ϊ��" << endl;
			for (j = 0; j < N; j++) {
				if (a[j] > 0) {
					cout << a[j] << ' ';
				}
			}
			cout << endl;
			cout << "������Ҫ�����������" << endl;
			cin >> a[N - 1];
			for (j = N - 1; j > 0; j--) {
				for (b = 0; b < j; b++) {
					if (a[b] > a[b + 1]) {
						swap(a[b], a[b + 1]);
					}
				}
			}
			cout << "����������Ϊ��" << endl;
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
			cout << "ԭ����Ϊ��" << endl;
			for (j = 0; j < 20; j++) {
				if (a[j] > 0) {
					cout << a[j] << ' ';
				}
			}
			cout << endl;
			cout << "������Ҫ�����������" << endl;
			cin >> a[N - 1];
			for (j = N - 1; j > 0; j--) {
				for (b = 0; b < j; b++) {
					if (a[b] > a[b + 1]) {
						swap(a[b], a[b + 1]);
					}
				}
			}
			cout << "����������Ϊ��" << endl;
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