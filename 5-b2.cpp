/*2352017 ĞÅ14 ÕÅî£çù*/
#include<iostream>
#include<string>
#define N 101
using namespace std;

int main()
{
	int a[N] = {}, i, j;
	for (i = 1; i < N; i++) {
		for (j = 1; j < N; j++) {
			if (j % i == 0) {
				a[j] == 0 ? a[j] = 1 : a[j] = 0;
			}
		}
	}
	for (j = 0; j < N; j++) {
		if (a[j] == 1 && j != 100)
			cout << j <<' ';
		if (j == 100)
			cout << j;
	}
	cout << endl;
	return 0;
}