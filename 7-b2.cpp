/* 2352017 ��14 �����*/
#include <iostream>
#include <iomanip>
#include <string.h>
#include <conio.h>
#include <Windows.h>
#include "7-b2.h"
#include "E:/�߳���ҵ/��ҵ9/�ۺ��� - ��01�� - ��ŵ���ۺ���ʾ��5.16��ֹ��/23242-900101-W0901.�ۺ��� - ��01�� - ��ŵ���ۺ���ʾ��5.16��ֹ��/cmd_console_tools.h"
using namespace std;
/* 1���������ͷ�ļ�
   2����������ȫ�ֱ�����������̬ȫ�֣���������const��define
   3����������Ҫ�Ľṹ�塢�����ȣ������ޱ�Դ�����ļ�ʹ�� */

/* ������������Դ�����ļ���Ҫ�Ľṹ�壬��Ҫ�ŵ�.h��
       ��Ϊʾ��������Ҫ��ɾ�� */
struct MenuItem {
	char text[MAX_ITEM_LEN];
};

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    �����������Դ�����ļ���Ҫ�ĺ���������Ϊstatic����
***************************************************************************/
//static int min(const struct PopMenu* original_para,)
//{
// //��Ϊʾ��������Ҫ��ɾ��
//}

/***************************************************************************
  �������ƣ�
  ��    �ܣ��������������õĺ���������������ͷ�ļ���
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int pop_menu(const char menu[][MAX_ITEM_LEN], const struct PopMenu* original_para)
{
	int X, Y;
	const int MENU_SIZE = 10;
	MenuItem _menu[MENU_SIZE] = {
		{" 1.�ڲ����飬���ɳ�ʼ״̬��Ѱ���Ƿ��г�ʼ��������"},
		{" 2.�ڲ����飬������ʼ����������0�����䲢��0���"},
		{" 3.�ڲ����飬������ʼ������������������ʾ"},
		{" 4.n*n�Ŀ��(�޷ָ���)����ʾ��ʼ״̬"},
		{" 5.n*n�Ŀ��(�зָ���)����ʾ��ʼ״̬"},
		{" 6.n*n�Ŀ��(�޷ָ���)����ʾ��ʼ״̬����ʼ��������"},
		{" 7.n*n�Ŀ��(�зָ���)��������ʼ�����������ʾ������ʾ"},
		{" 8.cmdͼ�ν���������(�зָ��ߣ�����ƶ�ʱ��ʾ���꣬�Ҽ��˳�)"},
		{" 9.cmdͼ�ν���������"},
		{" 0.�˳�"}
	};
	cct_gotoxy(original_para->start_x, original_para->start_y);
	X = original_para->start_x;
	Y = original_para->start_y;
	cout << "�X";
	for (int i = 0; i < ((original_para->width) - 4) / 2; i++) {
		cout << "�T";
	}
	cout << ' '<<original_para->title;
	for (int i = 0; i < ((original_para->width) - 4) / 2; i++) {
		cout << "�T";
	}
	cout << "�[" << endl;
	for (int j = 0; j < min(original_para->high - 2, 10); j++) {
		cct_gotoxy(X, Y + j + 1);
		cout << "�U"; 
	}
	for (int j = 0; j < min(original_para->high - 2, 10); j++) {
		cct_gotoxy(X + 1, Y + j + 1);
		cout << _menu[j].text << endl;
	}
	cct_gotoxy(X + original_para->width, Y);
	for (int j = 0; j < min(original_para->high - 2, 10); j++) {
		cct_gotoxy(X + original_para->width + 7, Y + j + 1);
		cout << "�U" << endl;
	}

	cct_gotoxy(X, Y + min(original_para->high,10) + 1);
	cout << "�^";
	for (int i = 0; i < original_para->width + 6; i++) {
		cout << "�T";
	}
	cout << "�a";
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
	return 0; //���践��
}
