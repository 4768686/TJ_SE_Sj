/* 2352017 信14 张睿琦 */
#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

/* 可根据需要添加相应的内容 */

/***************************************************************************
  函数名称：
  功    能：输出大写的0~9
  输入参数：
  返 回 值：
  说    明：除本函数外，不允许任何函数中输出“零”-“玖”!!!!!!
***************************************************************************/
void daxie(int num, int flag_of_zero)
{
	/* 不允许对本函数做任何修改 */
	switch (num) {
	case 0:
		if (flag_of_zero)	//此标记什么意思请自行思考
			cout << "零";
		break;
	case 1:
		cout << "壹";
		break;
	case 2:
		cout << "贰";
		break;
	case 3:
		cout << "叁";
		break;
	case 4:
		cout << "肆";
		break;
	case 5:
		cout << "伍";
		break;
	case 6:
		cout << "陆";
		break;
	case 7:
		cout << "柒";
		break;
	case 8:
		cout << "捌";
		break;
	case 9:
		cout << "玖";
		break;
	default:
		cout << "error";
		break;
	}
}

/* 可根据需要自定义其它函数(也可以不定义) */

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int main()
{
	while (1) {
		cout << "请输入[0-100亿)之间的数字:" << endl;
		double a, b, p;
		long d, e, f, g, h, i, j, k, m, n, o, q;
		cin >> a;
		if (a < 0 || a > 10000000000)
			continue;
		else {
			cout << "大写结果是:" << endl;
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
				cout << "拾";
			}
			if (e != 0) {
				daxie(e, f);
			}
			if (d != 0 || e != 0) {
				cout << "亿";
			}
			if (d != 0 || e != 0 || f != 0) {
				daxie(f, g);
				if (f != 0) {
					cout << "仟";
				}
			}
			if (d != 0 || e != 0 || f != 0 || g != 0) {
				daxie(g, h);
				if (g != 0) {
					cout << "佰";
				}
			}
			if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0) {
				daxie(h, i);
				if (h != 0) {
					cout << "拾";
				}
			}
			if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0) {
				if (i != 0) {
					daxie(i, j);
				}
				if (f != 0 || g != 0 || h != 0 || i != 0) {
					cout << "万";
				}
			}
			if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0) {
				daxie(j, k);
				if (j != 0) {
					cout << "仟";
				}
			}
			if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0) {
				daxie(k, m);
				if (k != 0) {
					cout << "佰";
				}
			}
			if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0) {
				daxie(m, n);
				if (m != 0) {
					cout << "拾";
				}
			}
			if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0 || n != 0) {
				if (m != 0) {
					daxie(n, o);
				}
				cout << "圆";
				if (o == 0 && q == 0)
					cout << "整";
			}
			if (o != 0) {
				if (q == 0) {
					daxie(o, q);
					cout << "角整";
				}
				else if (q != 0) {
					daxie(o, q);
					cout << "角";
					daxie(q, 1);
					cout << "分";
				}
			}
			else if (o == 0) {
				if (q != 0) {
					if (d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && m == 0 && n == 0) {
						daxie(q, 1);
						cout << "分";
					}
					else
					{
						daxie(o, q);
						daxie(q, 1);
						cout << "分";
					}
				}
				else if (q == 0)
					if (d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && m == 0 && n == 0) {
						daxie(n, 1);
						cout << "圆整";
					}
			}
			cout << endl;
			return 0;
		}
	}
}
