/*2352017 ��14 �����*/
#include<iostream>
using namespace std;

int main()
{
	double a;
	int b, b1, b2, b3, b4, c = 0, d = 0, e = 0, g = 0, h = 0, i = 0, j = 0, k = 0, m = 0, n = 0, sum;
	cout<<"����������ֵ��"<<endl;
	cin>>a;
	b = (int)(a * 100);
	b1 = b / 1000;
	b2 = (b - 1000 * b1) / 100;
	b3 = (b - 1000 * b1 - 100 * b2) / 10;
	b4 = b % 10;
	if (b1 >= 5)
	{
		c++;
		b1 -= 5;
	}
	if (b1 >= 2)
	{
		switch (b1 / 1)
		{
		case 4:
			d += 2;
			break;
		case 3:
		{
			d += 1;
			b1 -= 2;
		}
		break;
		case 2:
			d += 1;
			break;
		default:
			break;
		}
	}
	if (b1 == 1)
	{
		e++;
	}

	if (b2 >= 5)
	{
		g++;
		b2 -= 5;
	}
	if (b2 >= 1)
	{
		switch (b2 / 1)
		{
		case 4:
			h += 4;
			break;
		case 3:
			h += 3;
			break;
		case 2:
			h += 2;
			break;
		case 1:
			h += 1;
			break;
		default:
			break;
		}
	}

	if (b3 >= 5)
	{
		i++;
		b3 -= 5;
	}
	if (b3 >= 1)
	{
		switch (b3 / 1)
		{
		case 4:
			j += 4;
			break;
		case 3:
			j += 3;
			break;
		case 2:
			j += 2;
			break;
		case 1:
			j += 1;
			break;
		default:
			break;
		}
	}

	if (b4 >= 5)
	{
		k++;
		b4 -= 5;
	}
	if (b4 >= 2)
	{
		switch (b4 / 1)
		{
		case 4:
			m += 2;
			break;
		case 3:
		{
			m += 1;
			b4 -= 2;
		}
		break;
		case 2:
			m += 1;
			break;
		default:
			break;
		}
	}
	if (b4 == 1)
	{
		n++;
	}

	sum = c + d + e + g + h + i + j + k + m + n;
	cout<<"��"<<sum<<"�����㣬�������£�"<<endl;
	if (c > 0)
		cout << "50Ԫ : " << c << "��" << endl;
	if (d > 0)
		cout << "20Ԫ : " << d << "��" << endl;
	if (e > 0)
		cout << "10Ԫ : " << e << "��" << endl;
	if (g > 0)
		cout << "5Ԫ  : " << g << "��" << endl;
	if (h > 0)
		cout << "1Ԫ  : " << h << "��" << endl;
	if (i > 0)
		cout << "5��  : " << i << "��" << endl;
	if (j > 0)
		cout << "1��  : " << j << "��" << endl;
	if (k > 0)
		cout << "5��  : " << k << "��" << endl;
	if (m > 0)
		cout << "2��  : " << m << "��" << endl;
	if (n > 0)
		cout << "1��  : " << n << "��" << endl;

	return 0;
}