/* 2352017 ��14 ����� */
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

/* �ɸ�����Ҫ�����Ӧ������ */

/***************************************************************************
  �������ƣ�
  ��    �ܣ������д��0~9
  ���������
  �� �� ֵ��
  ˵    �������������⣬�������κκ�����������㡱-������!!!!!!
***************************************************************************/
void daxie(int num, int flag_of_zero)
{
	/* ������Ա��������κ��޸� */
	switch (num) {
	case 0:
		if (flag_of_zero)	//�˱��ʲô��˼������˼��
			cout << "��";
		break;
	case 1:
		cout << "Ҽ";
		break;
	case 2:
		cout << "��";
		break;
	case 3:
		cout << "��";
		break;
	case 4:
		cout << "��";
		break;
	case 5:
		cout << "��";
		break;
	case 6:
		cout << "½";
		break;
	case 7:
		cout << "��";
		break;
	case 8:
		cout << "��";
		break;
	case 9:
		cout << "��";
		break;
	default:
		cout << "error";
		break;
	}
}

/* �ɸ�����Ҫ�Զ�����������(Ҳ���Բ�����) */

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
	while (1) {
		cout << "������[0-100��)֮�������:" << endl;
		double a, b, p;
		long d, e, f, g, h, i, j, k, m, n, o, q;
		cin >> a;
		if (a < 0 || a > 10000000000)
			continue;
		else {
			cout << "��д�����:" << endl;
			b = a / 10;
			d = (unsigned long)b / 100000000;
			e = ((unsigned long)b - 100000000 * d) / 10000000;
			f = (((unsigned long)b - 100000000 * d) - 10000000 * e) / 1000000;
			g = ((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) / 100000;
			h = (((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) - 100000 * g) / 10000;
			i = ((((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) - 100000 * g) - 10000 * h) / 1000;
			j = (((((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) - 100000 * g) - 10000 * h) - 1000 * i) / 100;
			k = ((((((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) - 100000 * g) - 10000 * h) - 1000 * i) - 100 * j) / 10;
			m = (((((((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) - 100000 * g) - 10000 * h) - 1000 * i) - 100 * j) - 10 * k);
			p = b - 100000000 * d - 10000000 * e - 1000000 * f - 100000 * g - 10000 * h - 1000 * i - 100 * j - 10 * k - m;
			n = (long)(floor((b - floor(b)) * 10 + 0.000001));
			o = (long)(round((a - floor(a)) * 100)) / 10 % 10;
			q = (long)(round((a - floor(a)) * 100)) % 10;
			if (d != 0) {
				daxie(d, e);
				cout << "ʰ";
			}
			if (e != 0) {
				daxie(e, f);
			}
			if (d != 0 || e != 0) {
				cout << "��";
			}
			if (d != 0 || e != 0 || f != 0) {
				daxie(f, g);
				if (f != 0) {
					cout << "Ǫ";
				}
			}
			if (d != 0 || e != 0 || f != 0 || g != 0) {
				daxie(g, h);
				if (g != 0) {
					cout << "��";
				}
			}
			if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0) {
				daxie(h, i);
				if (h != 0) {
					cout << "ʰ";
				}
			}
			if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0) {
				if (i != 0) {
					daxie(i, j);
				}
				if (f != 0 || g != 0 || h != 0 || i != 0) {
					cout << "��";
				}
			}
			if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0) {
				daxie(j, k);
				if (j != 0) {
					cout << "Ǫ";
				}
			}
			if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0) {
				daxie(k, m);
				if (k != 0) {
					cout << "��";
				}
			}
			if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0) {
				daxie(m, n);
				if (m != 0) {
					cout << "ʰ";
				}
			}
			if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0 || n != 0) {
				if (m != 0) {
					daxie(n, o);
				}
				cout << "Բ";
				if (o == 0 && q == 0)
					cout << "��";
			}
			if (o != 0) {
				if (q == 0) {
					daxie(o, q);
					cout << "����";
				}
				else if (q != 0) {
					daxie(o, q);
					cout << "��";
					daxie(q, 1);
					cout << "��";
				}
			}
			else if (o == 0) {
				if (q != 0) {
					if (d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && m == 0 && n == 0) {
						daxie(q, 1);
						cout << "��";
					}
					else
					{
						daxie(o, q);
						daxie(q, 1);
						cout << "��";
					}
				}
				else if (q == 0)
					if (d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && m == 0 && n == 0) {
						daxie(n, 1);
						cout << "Բ��";
					}
			}
			cout << endl;
			return 0;
		}
	}
}
