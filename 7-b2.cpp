/* 2352017 信14 张睿琦*/
#include <iostream>
#include <iomanip>
#include <string.h>
#include <conio.h>
#include <Windows.h>
#include "7-b2.h"
#include "E:/高程作业/作业9/综合题 - 第01题 - 汉诺塔综合演示（5.16截止）/23242-900101-W0901.综合题 - 第01题 - 汉诺塔综合演示（5.16截止）/cmd_console_tools.h"
using namespace std;
/* 1、按需加入头文件
   2、不允许定义全局变量，包括静态全局，但不限制const及define
   3、允许定义需要的结构体、函数等，但仅限本源程序文件使用 */

/* 例：声明仅本源程序文件需要的结构体，不要放到.h中
       仅为示例，不需要可删除 */
struct MenuItem {
	char text[MAX_ITEM_LEN];
};

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：定义仅本源程序文件需要的函数，设置为static即可
***************************************************************************/
//static int min(const struct PopMenu* original_para,)
//{
// //仅为示例，不需要可删除
//}

/***************************************************************************
  函数名称：
  功    能：供测试用例调用的函数，函数声明在头文件中
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int pop_menu(const char menu[][MAX_ITEM_LEN], const struct PopMenu* original_para)
{
	int X, Y;
	const int MENU_SIZE = 10;
	MenuItem _menu[MENU_SIZE] = {
		{" 1.内部数组，生成初始状态，寻找是否有初始可消除项"},
		{" 2.内部数组，消除初始可消除项后非0项下落并用0填充"},
		{" 3.内部数组，消除初始可消除项后查找消除提示"},
		{" 4.n*n的框架(无分隔线)，显示初始状态"},
		{" 5.n*n的框架(有分隔线)，显示初始状态"},
		{" 6.n*n的框架(无分隔线)，显示初始状态及初始可消除项"},
		{" 7.n*n的框架(有分隔线)，消除初始可消除项后显示消除提示"},
		{" 8.cmd图形界面完整版(有分隔线，鼠标移动时显示坐标，右键退出)"},
		{" 9.cmd图形界面完整版"},
		{" 0.退出"}
	};
	cct_gotoxy(original_para->start_x, original_para->start_y);
	X = original_para->start_x;
	Y = original_para->start_y;
	cout << "╔";
	for (int i = 0; i < ((original_para->width) - 4) / 2; i++) {
		cout << "═";
	}
	cout << ' '<<original_para->title;
	for (int i = 0; i < ((original_para->width) - 4) / 2; i++) {
		cout << "═";
	}
	cout << "╗" << endl;
	for (int j = 0; j < min(original_para->high - 2, 10); j++) {
		cct_gotoxy(X, Y + j + 1);
		cout << "║"; 
	}
	for (int j = 0; j < min(original_para->high - 2, 10); j++) {
		cct_gotoxy(X + 1, Y + j + 1);
		cout << _menu[j].text << endl;
	}
	cct_gotoxy(X + original_para->width, Y);
	for (int j = 0; j < min(original_para->high - 2, 10); j++) {
		cct_gotoxy(X + original_para->width + 7, Y + j + 1);
		cout << "║" << endl;
	}

	cct_gotoxy(X, Y + min(original_para->high,10) + 1);
	cout << "╚";
	for (int i = 0; i < original_para->width + 6; i++) {
		cout << "═";
	}
	cout << "╝";
	cct_gotoxy(X + 1, Y + 1);
	cct_showstr(X + 1, Y + 1, _menu[0].text, 7, 0 , 1, original_para->width);
	while (1) {
		char ch1 = _getch();
		char ch2 = _getch();
		int i = 0;
		if (ch1 == char(224)) {
			if (ch1 == char(72) && Y >= (original_para->start_y + 1) && Y <= (original_para->start_y + 1 + min(original_para->start_y, 10))) {
				cct_showstr(X + 1, Y--, _menu[i++].text, 7, 0 ,1, original_para->width);
				continue;
			}
			else if (ch2 == char(80) && Y >= (original_para->start_y + 1) && Y <= (original_para->start_y + 1 + min(original_para->start_y, 10))) {
				cct_showstr(X + 1, Y++, _menu[i--].text, 7, 0,1, original_para->width);
				continue;
			}
			else
				continue;
		}
	}
	return 0; //按需返回
}
