/*2352017 ��14 �����*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c, result = 1, i = 1, sum = 1;
	cout << "������x��ֵ[-10 ~ +65]" << endl;
	cin >> a;
	while (a <= -11 || a >= 66)
	{
		cout << "����Ƿ�������������" << endl;
		cout << "������x��ֵ[-10 ~ +65]" << endl;
		cin >> a;
	}
	if (a >= -10 && a <= 65)
	{
		b = a, c = a;
		while (fabs(b) >= 1e-6)
		{
			result = result + b;
			i++;
			b = (b * a) / i;
		}
		cout << "e^" << a << "=" << setprecision(10) << result << endl;
	}
	return 0;
}