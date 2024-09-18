/* 2352017 信14 张睿琦 */
#include<iostream>
#include <iomanip>
#include <string.h>
#include <Windows.h>
#include<conio.h>
#include"magic_ball.h"
#include"cmd_console_tools.h"
using namespace std;

int main()
{
	cct_setcolor(0, 7);
	cct_setcursor(CURSOR_INVISIBLE);
	srand((unsigned)time(NULL));
	cct_setconsoleborder(120, 40, 120, 9000);
	char choice;
	while (1)
	{
		cct_cls();
		cct_setfontsize("新宋体", 18, 8);
		cct_setconsoleborder(120, 40, 120, 9000);
		choice = menu();
		if (choice == '0'){
			return 0;
		}
		cout << endl << endl;
		switch (choice)
		{
		case '1':
			choice_1();
			cout << endl;
			break;
		case '2':
			choice_2();
			cout << endl;
			break;
		case '3':
			choice_3();
			cout << endl;
			break;
		case '4':
			choice_4();
			cout << endl;
			break;
		case '5':
			choice_5();
			cout << endl;
			break;
		case '6':
			choice_6();
			cout << endl;
			break;
		case '7':
			choice_7();
			cout << endl;
			break;
		case '8':
			choice_8();
			cout << endl;
			break;
		case '9':
			choice_9();
			cout << endl;
			break;
		}
	}
	cct_setcolor(0, 7);
	return 0;
}