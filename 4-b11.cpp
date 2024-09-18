/* 2352017 信14 张睿琦 */
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

/* -----------------------------------------------------------------------------------
		允许   ：1、按需增加一个或多个函数（包括递归函数），但是所有增加的函数中不允许任何形式的循环
				 2、定义符号常量
				 3、定义const型变量

		不允许 ：1、定义全局变量
				 2、除print_tower之外的其他函数中不允许定义静态局部变量
   ----------------------------------------------------------------------------------- */
void f1(char start_char, char end_char)
{
	cout << start_char;
	if (start_char == end_char)
	{
		return;
	}
	else
	{
		f1(start_char - 1, end_char);
	}
}
void f2(char start_char, char end_char)
{
	cout << start_char;
	if (end_char == start_char)
	{
		return;
	}
	else {
		f2(start_char + 1, end_char);
	}
}
void f3(char start_char, char end_char)
{
	cout << end_char;
	if (end_char == start_char)
	{
		return;
	}
	else
		f3(start_char , end_char - 1);
}
void f4(char start_char, char end_char)
{
	cout << start_char;
	if (end_char == start_char)
	{
		return;
	}
	else {
		f4(start_char + 1, end_char);
	}
}
   /***************************************************************************
	 函数名称：
	 功    能：打印字母塔
	 输入参数：
	 返 回 值：
	 说    明：形参按需设置
			   提示：有一个参数order，指定正序/倒序
   ***************************************************************************/
void print_tower(char start_ch, char end_ch, int order)
{
	if (order == 0)/*上三角*/ {
		cout << setfill(' ') << setw((end_ch - start_ch) + 1) << start_ch;
		if (start_ch != 'A')
		{
			f1(start_ch - 1, 'A');
			f2('B', start_ch);
			cout << endl;
			if (start_ch == end_ch)
				return;
			else
				print_tower(start_ch + 1, end_ch, order);
		}
		else
		{
			cout << endl;
			if (end_ch != 'A')
				print_tower(start_ch + 1, end_ch, order);
			else
				return;
		}
	}
	else if(order == 1)/*下三角*/{
		static int a = end_ch;
		cout << setfill(' ') << setw((a - end_ch) + 1) << end_ch;
		if (end_ch == start_ch) {
			cout << endl;
			return;
		}
		else {
			f3(start_ch, end_ch - 1);
			f4('B', end_ch);
			cout << endl;
			print_tower(start_ch, end_ch - 1, order);
		}
	}
	else if (order == 2)/*菱形下三角*/ {

		static int a = end_ch + 1;
		if (a == 65)
			return;
		else {
			cout << setfill(' ') << setw((a - end_ch) + 1) << end_ch;
			if (end_ch == start_ch) {
				cout << endl;
				return;
			}
			else {
				f3(start_ch, end_ch - 1);
				f4('B', end_ch);
				cout << endl;
				print_tower(start_ch, end_ch - 1, order);
			}
		}
	}
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：main函数中的...允许修改，其余位置不准修改
***************************************************************************/
int main()
{
	char end_ch;

	/* 键盘输入结束字符(仅大写有效，为避免循环出现，不处理输入错误) */
	cout << "请输入结束字符(A~Z)" << endl;
	end_ch = getchar();			//读缓冲区第一个字符
	if (end_ch < 'A' || end_ch > 'Z') {
		cout << "结束字符不是大写字母" << endl;
		return -1;
	}

	/* 正三角字母塔(中间为A) */
	cout << setfill('=') << setw(2 * (end_ch-'A') + 1) << '=' << endl; /* 按字母塔最大宽度输出=(不允许用循环) */
	cout << "正三角字母塔(" << end_ch << "->A)" << endl;
	cout << setfill('=') << setw(2 * (end_ch-'A') + 1) << '=' << endl; /* 按字母塔最大宽度输出=(不允许用循环) */
	print_tower('A', end_ch, 0); //正序打印 A~结束字符 
	cout << endl;

	/* 倒三角字母塔(中间为A) */
	cout << setfill('=') << setw(2 * (end_ch-'A') + 1) << '=' << endl; /* 按字母塔最大宽度输出=(不允许用循环) */
	cout << "倒三角字母塔(" << end_ch << "->A)" << endl;
	cout << setfill('=') << setw(2 * (end_ch-'A') + 1) << '=' << endl; /* 按字母塔最大宽度输出=(不允许用循环) */
	print_tower('A', end_ch, 1); //逆序打印 A~结束字符 
	cout << endl;

	/* 合起来就是漂亮的菱形（中间为A） */
	cout << setfill('=') << setw(2 * (end_ch - 'A') + 1) << '=' << endl;/* 按字母塔最大宽度输出= */
	cout << "菱形(" << end_ch << "->A)" << endl;
	cout << setfill('=') << setw(2 * (end_ch - 'A') + 1) << '=' << endl;/* 按字母塔最大宽度输出= */
	print_tower('A', end_ch, 0);   //打印 A~结束字符的正三角 
	print_tower('A', end_ch - 1, 2);   //打印 A~结束字符-1的倒三角 
	cout << endl;
	return 0;
}