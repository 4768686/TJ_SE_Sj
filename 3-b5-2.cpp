/*2352017 信14 张睿琦*/
#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "请输入年，月，日" << endl;
	cin >> a >> b >> c;
	if (a % 4 == 0 && a % 100 != 0|| a / 400 == 0)
	{
		if (b < 1 || b>12)
			cout << "输入错误-月份不正确" << endl;
		else if (b == 1)
		{
			if (c < 1 || c>31)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第"<<c<<"天" << endl;
		}
		else if (b == 2)
		{
			if (c < 1 || c>29)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 31 << "天" << endl;
		}
		else if (b == 3)
		{
			if (c < 1 || c>31)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 60 << "天" << endl;
		}
		else if (b == 4)
		{
			if (c < 1 || c>30)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 91 << "天" << endl;
		}
		else if (b == 5)
		{
			if (c < 1 || c>31)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 121 << "天" << endl;
		}
		else if (b == 6)
		{
			if (c < 1 || c>30)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 152 << "天" << endl;
		}
		else if (b == 7)
		{
			if (c < 1 || c>31)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 182 << "天" << endl;
		}
		else if (b == 8)
		{
			if (c < 1 || c>31)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 213 << "天" << endl;
		}
		else if (b == 9)
		{
			if (c < 1 || c>30)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 244 << "天" << endl;
		}
		else if (b == 10)
		{
			if (c < 1 || c>31)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 274 << "天" << endl;
		}
		else if (b == 11)
		{
			if (c < 1 || c>30)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 305 << "天" << endl;
		}
		else if (b == 12)
		{
			if (c < 1 || c>31)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 335 << "天" << endl;
		}	
	}
	else
	{
		if (b < 1 || b>12)
			cout << "输入错误-月份不正确" << endl;
		else if (b == 1)
		{
			if (c < 1 || c>31)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c << "天" << endl;
		}
		else if (b == 2)
		{
			if (c < 1 || c>28)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 31 << "天" << endl;
		}
		else if (b == 3)
		{
			if (c < 1 || c>31)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 60-1 << "天" << endl;
		}
		else if (b == 4)
		{
			if (c < 1 || c>30)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 91-1 << "天" << endl;
		}
		else if (b == 5)
		{
			if (c < 1 || c>31)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 121-1 << "天" << endl;
		}
		else if (b == 6)
		{
			if (c < 1 || c>30)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 152-1 << "天" << endl;
		}
		else if (b == 7)
		{
			if (c < 1 || c>31)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 182-1 << "天" << endl;
		}
		else if (b == 8)
		{
			if (c < 1 || c>31)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 213-1 << "天" << endl;
		}
		else if (b == 9)
		{
			if (c < 1 || c>30)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 244-1 << "天" << endl;
		}
		else if (b == 10)
		{
			if (c < 1 || c>31)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 274-1 << "天" << endl;
		}
		else if (b == 11)
		{
			if (c < 1 || c>30)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 305-1 << "天" << endl;
		}
		else if (b == 12)
		{
			if (c < 1 || c>31)
				cout << "输入错误-日与月的关系非法" << endl;
			else
				cout << a << "-" << b << "-" << c << "是" << a << "年的第" << c + 335-1 << "天" << endl;
		}
	}
	return 0;
}