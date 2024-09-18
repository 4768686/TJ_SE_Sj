/* 2352017 ��14 ����� */
#include<iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <Windows.h>
#include<conio.h>
#include"magic_ball.h"
#include"cmd_console_tools.h"
using namespace std;

//�����
/* ˫�߿��ʹ���������������滻Ϊ�������ͣ�
	   �X�T�j�T�[
	   �U  �U  �U
	   �d�T�p�T�g
	   �U  �U  �U
	   �^�T�m�T�a*/

void graph1(char hang, char lie, int **map)
{
	int X, Y;
	cct_cls();
	cct_setfontsize("������", 50, 50);
	cct_setconsoleborder(40, (int)hang - 48 + 6);
	cout << "��Ļ��" << (int)hang - 48 + 6 << "��" << 40 << "��" << endl;
	cct_getxy(X, Y);
	cct_showstr(X, Y, "�X", 15, 0);
	for (int i = 0; i < (int)lie - 48; i++) {
		cct_getxy(X, Y);
		Sleep(20);
		cct_showstr(X, Y, "�T", 15, 0);
	}
	cct_getxy(X, Y);
	Sleep(20);
	cct_showstr(X, Y, "�[", 15, 0);
	cout << endl;
	for (int i = 0; i < (int)hang - 48; i++) {
		cct_getxy(X, Y);
		Sleep(20);
		cct_showstr(X, Y, "�U", 15, 0);
		for (int j = 0; j < (int)lie - 48; j++) {
			cct_getxy(X, Y);
			Sleep(20);
			cct_showstr(X, Y,"��", map[i][j], 0);
		}
		cct_getxy(X, Y);
		Sleep(20);
		cct_showstr(X, Y, "�U", 15, 0);
		cout << endl;
	}
	cct_getxy(X, Y);
	Sleep(20);
	cct_showstr(X, Y, "�^", 15, 0);
	for (int i = 0; i < (int)lie - 48; i++) {
		cct_getxy(X, Y);
		Sleep(20);
		cct_showstr(X, Y, "�T", 15, 0);
	}
	cct_getxy(X, Y);
	Sleep(20);
	cct_showstr(X, Y, "�a", 15, 0);
	cct_setcolor(0, 7);
	cout << endl;
}

void graph2(char hang, char lie, int** map)
{
	int X, Y;
	cct_cls();
	cct_setfontsize("������", 50, 50);
	cct_setconsoleborder(40, 2 * ((int)hang - 48) + 5);
	cout << "��Ļ��" << 2 * ((int)hang - 48) + 5 << "��" << 40 << "��" << endl;
	cct_getxy(X, Y);
	cct_showstr(X, Y, "�X", 15, 0);
	for (int i = 0; i < (int)lie - 48 - 1; i++) {
		cct_getxy(X, Y);
		Sleep(20);
		cct_showstr(X, Y, "�T�j", 15, 0);
	}
	cct_getxy(X, Y);
	Sleep(20);
	cct_showstr(X, Y, "�T�[", 15, 0);
	cout << endl;
	for (int i = 0; i < 2 * ((int)hang - 48) - 1; i++) {
		if (i % 2 == 0) {
			cct_getxy(X, Y);
			Sleep(20);
			cct_showstr(X, Y, "�U", 15, 0);
			for (int j = 0; j < (int)lie - 48 + 1; j++) {
				Sleep(20);
				cct_showstr(X + 4 * j, Y, "�U", 15, 0);
			}
			cout << endl;
		}
		if (i % 2 == 1) {
			cct_getxy(X, Y);
			Sleep(20);
			cct_showstr(X, Y, "�d", 15, 0);
			for (int j = 0; j < (int)lie - 48 - 1; j++) {
				cct_getxy(X, Y);
				Sleep(20);
				cct_showstr(X, Y, "�T�p", 15, 0);
			}
			cct_getxy(X, Y);
			Sleep(20);
			cct_showstr(X, Y, "�T�g", 15, 0);
			cout << endl;
		}
	}
	cct_getxy(X, Y);
	Sleep(20);
	cct_showstr(X, Y, "�^", 15, 0);
	for (int i = 0; i < (int)lie - 48 - 1; i++) {
		cct_getxy(X, Y);
		Sleep(20);
		cct_showstr(X, Y, "�T�m", 15, 0);
	}
	cct_getxy(X, Y);
	Sleep(20);
	cct_showstr(X, Y, "�T�a", 15, 0);
	for (int i = 0; i < (int)hang - 48; i++) {
		cct_gotoxy(0, 2 + 2 * i);
		for (int j = 0; j < (int)lie - 48; j++) {
			cct_getxy(X, Y);
			Sleep(20);
			cct_showstr(X + 2, Y, "��", map[i][j], 0);
		}
		cout << endl;
	}
	cct_setcolor(0, 7);
	cout << endl;
}

void graph3(char hang, char lie, int** map)
{
	int X, Y;
	int a[cols][rows] = { 0 };
	cct_cls();
	cct_setfontsize("������", 50, 50);
	cct_setconsoleborder(40, (int)hang - 48 + 6);
	cout << "��Ļ��" << (int)hang - 48 + 6 << "��" << 40 << "��" << endl;
	cct_getxy(X, Y);
	Sleep(20);
	cct_showstr(X, Y, "�X", 15, 0);
	for (int i = 0; i < (int)lie - 48; i++) {
		cct_getxy(X, Y);
		Sleep(20);
		cct_showstr(X, Y, "�T", 15, 0);
	}
	cct_getxy(X, Y);
	Sleep(20);
	cct_showstr(X, Y, "�[", 15, 0);
	cout << endl;
	for (int i = 0; i < (int)hang - 48; i++) {
		for (int j = 0; j < (int)lie - 48; j++) {
			a[i][j] = map[i][j];
		}
	}
	change(hang, lie, map);
	for (int i = 0; i < (int)hang - 48; i++) {
		cct_getxy(X, Y);
		cct_showstr(X, Y, "�U", 15, 0);
		for (int j = 0; j < (int)lie - 48; j++) {
			cct_getxy(X, Y);
			if (map[i][j] == 0) {
				cct_showstr(X, Y, "��", a[i][j], 0);
			}
			else{
				cct_showstr(X, Y, "��", a[i][j], 0);
			}
		}
		cct_getxy(X, Y);
		cct_showstr(X, Y, "�U", 15, 0);
		cout << endl;
	}
	cct_getxy(X, Y);
	cct_showstr(X, Y, "�^", 15, 0);
	for (int i = 0; i < (int)lie - 48; i++) {
		cct_getxy(X, Y);
		cct_showstr(X, Y, "�T", 15, 0);
	}
	cct_getxy(X, Y);
	cct_showstr(X, Y, "�a", 15, 0);
	cct_setcolor(0, 7);
	cout << endl;
}

void graph4(char hang, char lie, int** map, int num)
{
	int X, Y;
	cct_cls();
	cct_setfontsize("������", 50, 50);
	cct_setconsoleborder(40, 2 * ((int)hang - 48) + 5);
	cout << "��Ļ��" << 2 * ((int)hang - 48) + 5 << "��" << 40 << "��" << endl;
	cct_getxy(X, Y);
	Sleep(20);
	cct_showstr(X, Y, "�X", 15, 0);
	for (int i = 0; i < (int)lie - 48 - 1; i++) {
		cct_getxy(X, Y);
		Sleep(20);
		cct_showstr(X, Y, "�T�j", 15, 0);
	}
	cct_getxy(X, Y);
	Sleep(20);
	cct_showstr(X, Y, "�T�[", 15, 0);
	cout << endl;
	for (int i = 0; i < 2 * ((int)hang - 48) - 1; i++) {
		if (i % 2 == 0) {
			cct_getxy(X, Y);
			Sleep(20);
			cct_showstr(X, Y, "�U", 15, 0);
			for (int j = 0; j < (int)lie - 48 + 1; j++) {
				Sleep(20);
				cct_showstr(X + 4 * j, Y, "�U", 15, 0);
			}
			cout << endl;
		}
		if (i % 2 == 1) {
			cct_getxy(X, Y);
			Sleep(20);
			cct_showstr(X, Y, "�d", 15, 0);
			for (int j = 0; j < (int)lie - 48 - 1; j++) {
				cct_getxy(X, Y);
				Sleep(20);
				cct_showstr(X, Y, "�T�p", 15, 0);
			}
			cct_getxy(X, Y);
			Sleep(20);
			cct_showstr(X, Y, "�T�g", 15, 0);
			cout << endl;
		}
	}
	cct_getxy(X, Y);
	Sleep(20);
	cct_showstr(X, Y, "�^", 15, 0);
	for (int i = 0; i < (int)lie - 48 - 1; i++) {
		cct_getxy(X, Y);
		Sleep(20);
		cct_showstr(X, Y, "�T�m", 15, 0);
	}
	cct_getxy(X, Y);
	Sleep(20);
	cct_showstr(X, Y, "�T�a", 15, 0);
	if (num == 1)
		graph4_0(hang, lie, map, 1);
	if (num == 0)
		graph4_0(hang, lie, map, 0);
}
void graph4_0(char hang, char lie, int** map, int num)
{
	int X, Y;
	int a[cols][rows] = { 0 };
	for (int i = 0; i < (int)hang - 48; i++) {
		for (int j = 0; j < (int)lie - 48; j++) {
			a[i][j] = map[i][j];
		}
	}
	change(hang, lie, map);
	for (int i = 0; i < (int)hang - 48; i++) {
		cct_gotoxy(0, 2 + 2 * i);
		for (int j = 0; j < (int)lie - 48; j++) {
			cct_getxy(X, Y);
			if (map[i][j] == 0) {
				cct_showstr(X + 2, Y, "��", a[i][j], 0);
			}
			else {
				cct_showstr(X + 2, Y, "��", a[i][j], 0);
			}
		}
		cout << endl;
	}
	cct_setcolor(0, 7);
	cout << endl;
	if (num == 1)
		graph4_1(hang, lie, map, 1);
	if (num == 0)
		graph4_1(hang, lie, map, 0);
}
void graph4_1(char hang, char lie, int** map,int num)
{
	int sum = 0;
	if (num == 1)
		wait_for_enter1();
	int flag = 0;
	cct_gotoxy(5, 3);
	int X, Y;
	int a[cols][rows] = { 0 };
	for (int i = 0; i < (int)hang - 48; i++) {
		for (int j = 0; j < (int)lie - 48; j++) {
			a[i][j] = map[i][j];
		}
	}
	for (int i = 0; i < (int)hang - 48; i++) {
		cct_gotoxy(0, 2 + 2 * i);
		for (int j = 0; j < (int)lie - 48; j++) {
			cct_getxy(X, Y);
			if (map[i][j] == 0) {
				flag = 1;
				sum++;
				cct_showstr(X + 2, Y, "��", 0, 15);
				Sleep(200);
				cct_showstr(X + 2, Y, "  ", 15, 15);
			}
			else {
				cct_showstr(X + 2, Y, "��", a[i][j], 0);
			}
		}
		cout << endl;
	}
	cct_setcolor(0, 7);
	cout << endl;
	cct_setcolor(0, 7);
	cct_gotoxy(15, 0);
	cout << "(��ǰ������" << sum << " �Ҽ��˳�)";
	if (flag == 1 && num == 1)
		graph4_2(hang, lie, map, 1);
	if (flag == 1 && num == 0)
		graph4_2(hang, lie, map, 0);
	if(flag == 0 && num == 1){
		cct_gotoxy(15, 0);
		cout << "(δ�ҵ���ʼ��������)";
		graph4_4(hang, lie, map, 1);
	}
	if (flag == 0 && num == 0) {
		graph4_4(hang, lie, map, 0);
	}
}
void graph4_2(char hang, char lie, int** map, int num)
{
	cct_gotoxy(5, 3);
	int X, Y;
	int a[cols][rows] = { 0 };
	for (int i = 0; i < (int)hang - 48; i++) {
		for (int j = 0; j < (int)lie - 48; j++) {
			a[i][j] = map[i][j];
		}
	}
	for (int i = 0; i < int(hang) - 48; i++) {
		for (int j = 0; j < int(lie) - 48; j++) {
			if (map[i][j] == 0) {
				for (int k = 0; k < i; k++) {
					swap(map[i - k][j], map[i - k - 1][j]);
				}
			}
		}
	}
	for (int i = 0; i < int(hang) - 48; i++) {
		cct_gotoxy(0, 2 + 2 * i);
		for (int j = 0; j < int(lie) - 48; j++) {
			cct_getxy(X, Y);
			if (map[i][j] == 0) {
				cct_showstr(X + 2, Y, "  ", 15, 15);
			}
			else {
				cct_showstr(X + 2, Y, "��", map[i][j], 0);
			}
		}
	}
	cct_setcolor(0, 7);
	cout << endl << endl;
	cct_getxy(X, Y);
	cct_showstr(X, Y, "                              ", 0, 0);
	cct_setcolor(0, 7);
	cct_gotoxy(0, 2 * ((int)hang - 48) + 2);
	if (num == 1) {
		wait_for_enter2();
		graph4_3(hang, lie, map, 1);
	}
	if (num == 0)
		graph4_3(hang, lie, map, 0);
}
void graph4_3(char hang, char lie, int** map, int num)
{
	cct_gotoxy(5, 3);
	int X, Y;
	int a[cols][rows] = { 0 };
	for (int i = 0; i < (int)hang - 48; i++) {
		for (int j = 0; j < (int)lie - 48; j++) {
			a[i][j] = map[i][j];
		}
	}
	for (int i = 0; i < int(hang) - 48; i++) {
		cct_gotoxy(0, 2 + 2 * i);
		for (int j = 0; j < int(lie) - 48; j++) {
			cct_getxy(X, Y);
			if (map[i][j] == 0) {
				map[i][j] = rand() % 9 + 1;
				Sleep(100);
				cct_showstr(X + 2, Y, "��", map[i][j], 0);
				Sleep(100);
			}
			cct_showstr(X + 2, Y, "��", map[i][j], 0);
		}
	}
	cout << endl << endl;
	cct_getxy(X, Y);
	cct_showstr(X, Y, "                              ", 0, 0);
	cct_setcolor(0, 7);
	cct_gotoxy(0, 2 * ((int)hang - 48) + 2);
	if (num == 1)
		graph4_0(hang, lie, map, 1);
	if (num == 0)
		graph4_0(hang, lie, map, 0);
}

void graph4_4(char hang, char lie, int** map, int num)
{
	cct_gotoxy(0, 2 * ((int)hang - 48) + 2);
	if (num == 1)
		wait_for_enter3();
	cct_gotoxy(5, 3);
	int X, Y;
	int map1[cols][rows] = { 0 };
	for (int i = 0; i < int(hang) - 48; i++) {
		cct_gotoxy(0, 2 + 2 * i);
		for (int j = 0; j < int(lie) - 48; j++) {
			cct_getxy(X, Y);
			cct_showstr(X + 2, Y, "��", map[i][j], 0);
			if (i > 0 && j > 0 && i < int(hang) - 49) {
				if (map[i - 1][j] == map[i][j - 1] && map[i - 1][j] == map[i + 1][j]) {
					cct_getxy(X, Y);
					cct_showstr(X - 6, Y, "��", map[i][j - 1], 0);
					cct_showstr(X - 2, Y, "��", map[i][j], 0);
					cct_setcolor(0, 7);
				}
			}
			if (i > 0 && j > 0 && j < int(lie) - 49) {
				if (map[i - 1][j] == map[i][j - 1] && map[i - 1][j] == map[i][j + 1]) {
					cct_getxy(X, Y);
					cct_showstr(X - 2, Y - 2, "��", map[i - 1][j], 0);
					cct_showstr(X - 2, Y, "��", map[i][j], 0);
					cct_setcolor(0, 7);
					cct_gotoxy(X, Y);
				}
			}
			if (i > 0 && i < int(hang) - 49 && j < int(lie) - 49) {
				if (map[i - 1][j] == map[i][j + 1] && map[i - 1][j] == map[i + 1][j]) {
					cct_getxy(X, Y);
					cct_showstr(X - 2, Y, "��", map[i][j], 0);
					cct_showstr(X + 2, Y, "��", map[i][j + 1], 0);
					cct_setcolor(0, 7);
					j++;
				}
			}
			if(j > 0 && i < int(hang) - 49 && j < int(lie) - 49){
				if (map[i + 1][j] == map[i][j - 1] && map[i + 1][j] == map[i][j + 1]) {
					cct_getxy(X, Y);
					cct_showstr(X - 2, Y, "��", map[i][j],0);
					map1[i + 1][j] = 1;
					cct_setcolor(0, 7);
					cct_gotoxy(X, Y);
				}
			}

			if (i > 1 && i < int(hang) - 49) {
				if (map[i - 2][j] == map[i - 1][j] && map[i - 1][j] == map[i + 1][j]) {
					cct_getxy(X, Y);
					cct_showstr(X - 2, Y, "��", map[i][j], 0);
					map1[i + 1][j] = 1;
					cct_setcolor(0, 7);
					cct_gotoxy(X, Y);
				}
			}
			if (i > 1 && j > 0) {
				if (map[i - 2][j] == map[i - 1][j] && map[i - 1][j] == map[i][j - 1]) {
					cct_getxy(X, Y);
					cct_showstr(X - 6, Y, "��", map[i][j - 1], 0);
					cct_showstr(X - 2, Y, "��", map[i][j], 0);
					cct_setcolor(0, 7);
				}
			}
			if (i > 1 && j < int(lie) - 49) {
				if (map[i - 2][j] == map[i - 1][j] && map[i - 1][j] == map[i][j + 1]) {
					cct_getxy(X, Y);
					cct_showstr(X - 2, Y, "��", map[i][j], 0);
					cct_showstr(X + 2, Y, "��", map[i][j + 1], 0);
					cct_setcolor(0, 7);
					j++;
				}
			}
			if (i > 0 && i < int(hang) - 50) {
				if (map[i + 2][j] == map[i + 1][j] && map[i + 1][j] == map[i - 1][j]) {
					cct_getxy(X, Y);
					cct_showstr(X - 2, Y - 2, "��", map[i - 1][j], 0);
					cct_showstr(X - 2, Y, "��", map[i][j], 0);
					cct_setcolor(0, 7);
					cct_gotoxy(X, Y);
				}
			}
			if (j > 0 && i < int(hang) - 50) {
				if (map[i + 2][j] == map[i + 1][j] && map[i + 1][j] == map[i][j - 1]) {
					cct_getxy(X, Y);
					cct_showstr(X - 6, Y, "��", map[i][j - 1], 0);
					cct_showstr(X - 2, Y, "��", map[i][j], 0);
					cct_setcolor(0, 7);
				}
			}
			if (i < int(hang) - 50 && j < int(lie) - 49) {
				if (map[i + 2][j] == map[i + 1][j] && map[i + 1][j] == map[i][j + 1]) {
					cct_getxy(X, Y);
					cct_showstr(X - 2, Y, "��", map[i][j], 0);
					cct_showstr(X + 2, Y, "��", map[i][j + 1], 0);
					cct_setcolor(0, 7);
					j++;
				}
			}
			if (i > 0 && j > 1) {
				if (map[i][j - 2] == map[i][j - 1] && map[i][j - 1] == map[i - 1][j]) {
					cct_getxy(X, Y);
					cct_showstr(X - 2, Y - 2, "��", map[i - 1][j], 0);
					cct_showstr(X - 2, Y, "��", map[i][j], 0);
					cct_setcolor(0, 7);
				}
			}
			if (j > 1 && i < int(hang) - 49) {
				if (map[i][j - 2] == map[i][j - 1] && map[i][j - 1] == map[i + 1][j]) {
					cct_getxy(X, Y);
					cct_showstr(X - 2, Y, "��", map[i][j], 0);
					map1[i + 1][j] = 1;
					cct_setcolor(0, 7);
					cct_gotoxy(X, Y);
				}
			}
			if (j > 1 && j < int(lie) - 49) {
				if (map[i][j - 2] == map[i][j - 1] && map[i][j - 1] == map[i][j + 1]) {
					cct_getxy(X, Y);
					cct_showstr(X - 2, Y, "��", map[i][j], 0);
					cct_showstr(X + 2, Y, "��", map[i][j + 1], 0);
					cct_setcolor(0, 7);
					j++;
				}
			}
			if (i > 0 && j < int(lie) - 50) {
				if (map[i][j + 2] == map[i][j + 1] && map[i][j + 1] == map[i - 1][j]) {
					cct_getxy(X, Y);
					cct_showstr(X - 2, Y - 2, "��", map[i - 1][j], 0);
					cct_showstr(X - 2, Y, "��", map[i][j], 0);
					cct_setcolor(0, 7);
				}
			}
			if (i < int(hang) - 49 && j < int(lie) - 50) {
				if (map[i][j + 2] == map[i][j + 1] && map[i][j + 1] == map[i + 1][j]) {
					cct_getxy(X, Y);
					cct_showstr(X - 2, Y, "��", map[i][j], 0);
					map1[i + 1][j] = 1;
					cct_setcolor(0, 7);
					cct_gotoxy(X, Y);
				}
			}
			if (j > 0 && j < int(lie) - 50) {
				if (map[i][j + 2] == map[i][j + 1] && map[i][j + 1] == map[i][j - 1]) {
					cct_getxy(X, Y);
					cct_showstr(X - 6, Y, "��", map[i][j - 1], 0);
					cct_showstr(X - 2, Y, "��", map[i][j],0);
					cct_setcolor(0, 7);
				}
			}
			if (i > 0 && map1[i][j] == 1) {
				cct_getxy(X, Y);
				cct_showstr(X - 2, Y, "��", map[i][j],0);
				cct_setcolor(0, 7);
			}
		}
		cout << endl;
	}
	cout << endl << endl;
	cct_getxy(X, Y);
	cct_showstr(X, Y, "                              ", 0, 0);
	cct_setcolor(0, 7);
	cct_gotoxy(0, 2 * ((int)hang - 48) + 2);
}

void graph5(char hang, char lie, int** map)
{
	int MX, MY, MAction, keycode1, keycode2;
	cct_enable_mouse();
	while (1) {
		cct_read_keyboard_and_mouse(MX, MY, MAction, keycode1, keycode2);
		if ((MX > 1 && ((MX + 1) % 4 == 0 || (MX + 1) % 4 == 3) && MX < 4 * (int(lie) - 49) + 4) && (MY > 1 && ((MY - 2) % 2 == 0) && MY < 2 * (int(hang) - 49) + 3)) {
			cct_showstr(0, 2 * (int(hang) - 48) + 2, "                                  ");
			cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
			cout << "[��ǰ���] " << MY << "�� "<< MX << "�� ";
			if (MAction == MOUSE_RIGHT_BUTTON_CLICK) {
				cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
				cct_showstr(0, 2 * (int(hang) - 48) + 2, "                                  ");
				cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
				return;
			}
			if (MAction == MOUSE_LEFT_BUTTON_CLICK) {
				int map1[cols][rows] = { 0 };
				for (int i = 0; i < int(hang) - 48; i++) {
					for (int j = 0; j < int(lie) - 48; j++) {
						if (i > 0 && j > 0 && i < int(hang) - 49) {
							if (map[i - 1][j] == map[i][j - 1] && map[i - 1][j] == map[i + 1][j]) {
								map1[i][j - 1] = 1;
								map1[i][j] = 1;
							}
						}
						if (i > 0 && j > 0 && j < int(lie) - 49) {
							if (map[i - 1][j] == map[i][j - 1] && map[i - 1][j] == map[i][j + 1]) {
								map1[i - 1][j] = 1;
								map1[i][j] = 1;
							}
						}
						if (i > 0 && i < int(hang) - 49 && j < int(lie) - 49) {
							if (map[i - 1][j] == map[i][j + 1] && map[i - 1][j] == map[i + 1][j]) {
								map1[i][j] = 1;
								map1[i][j + 1] = 1;
							}
						}
						if (j > 0 && i < int(hang) - 49 && j < int(lie) - 49) {
							if (map[i + 1][j] == map[i][j - 1] && map[i + 1][j] == map[i][j + 1]) {
								map1[i][j] = 1;
								map1[i + 1][j] = 1;
							}
						}

						if (i > 1 && i < int(hang) - 49) {
							if (map[i - 2][j] == map[i - 1][j] && map[i - 1][j] == map[i + 1][j]) {
								map1[i][j] = 1;
								map1[i + 1][j] = 1;
							}
						}
						if (i > 1 && j > 0) {
							if (map[i - 2][j] == map[i - 1][j] && map[i - 1][j] == map[i][j - 1]) {
								map1[i][j - 1] = 1;
								map1[i][j] = 1;
							}
						}
						if (i > 1 && j < int(lie) - 49) {
							if (map[i - 2][j] == map[i - 1][j] && map[i - 1][j] == map[i][j + 1]) {
								map1[i][j] = 1;
								map1[i][j + 1] = 1;
							}
						}
						if (i > 0 && i < int(hang) - 50) {
							if (map[i + 2][j] == map[i + 1][j] && map[i + 1][j] == map[i - 1][j]) {
								map1[i - 1][j] = 1;
								map1[i][j] = 1;
							}
						}
						if (j > 0 && i < int(hang) - 50) {
							if (map[i + 2][j] == map[i + 1][j] && map[i + 1][j] == map[i][j - 1]) {
								map1[i][j - 1] = 1;
								map1[i][j] = 1;
							}
						}
						if (i < int(hang) - 50 && j < int(lie) - 49) {
							if (map[i + 2][j] == map[i + 1][j] && map[i + 1][j] == map[i][j + 1]) {
								map1[i][j] = 1;
								map1[i][j + 1] = 1;
							}
						}
						if (i > 0 && j > 1) {
							if (map[i][j - 2] == map[i][j - 1] && map[i][j - 1] == map[i - 1][j]) {
								map1[i - 1][j] = 1;
								map1[i][j] = 1;
							}
						}
						if (j > 1 && i < int(hang) - 49) {
							if (map[i][j - 2] == map[i][j - 1] && map[i][j - 1] == map[i + 1][j]) {
								map1[i][j] = 1;
								map1[i + 1][j] = 1;
							}
						}
						if (j > 1 && j < int(lie) - 49) {
							if (map[i][j - 2] == map[i][j - 1] && map[i][j - 1] == map[i][j + 1]) {
								map1[i][j] = 1;
								map1[i][j + 1] = 1;
							}
						}
						if (i > 0 && j < int(lie) - 50) {
							if (map[i][j + 2] == map[i][j + 1] && map[i][j + 1] == map[i - 1][j]) {
								map1[i - 1][j] = 1;
								map1[i][j] = 1;
							}
						}
						if (i < int(hang) - 49 && j < int(lie) - 50) {
							if (map[i][j + 2] == map[i][j + 1] && map[i][j + 1] == map[i + 1][j]) {
								map1[i][j] = 1;
								map1[i + 1][j] = 1;
							}
						}
						if (j > 0 && j < int(lie) - 50) {
							if (map[i][j + 2] == map[i][j + 1] && map[i][j + 1] == map[i][j - 1]) {
								map1[i][j - 1] = 1;
								map1[i][j] = 1;
							}
						}
					}
				}
				if (map1[(MY - 2) / 2][(MX - 2) / 4] == 1) {
					cct_showstr(10, 2 * (int(hang) - 48) + 2, "                                  ");
					cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
					cout << "��ǰѡ��" << char(MY / 2 + 'A' - 1) << "�� " << MX / 4 + 1 << "�� ";
					Sleep(1000);
					cct_showstr(10, 2 * (int(hang) - 48) + 2, "                                  ");
					cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
					return;
				}
				else {
					cct_showstr(10, 2 * (int(hang) - 48) + 2, "                                  ");
					cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
					cout << "����ѡ��" << char(MY / 2 + 'A' - 1) << "�� " << MX / 4 + 1 << "�� ";
					Sleep(1);
				}
			}
		}
		else {
			cct_showstr(10, 2 * (int(hang) - 48) + 2, "                                  ");
			cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
			cout << "[��ǰ���] λ�÷Ƿ�";
		}
	}
}
void graph6(char hang, char lie, int** map)
{
	int MX, MY, MAction, keycode1, keycode2;
	int a[cols][rows];
	int flag = 0;
	for (int i = 0; i < int(hang) - 48; i++) {
		for (int j = 0; j < int(lie) - 48; j++) {
			a[i][j] = 0;
		}
	}
	cct_enable_mouse();
	while (1) {
		cct_read_keyboard_and_mouse(MX, MY, MAction, keycode1, keycode2);
		if ((MX > 1 && ((MX + 1) % 4 == 0 || (MX + 1) % 4 == 3) && MX < 4 * (int(lie) - 49) + 4) && (MY > 1 && ((MY - 2) % 2 == 0) && MY < 2 * (int(hang) - 49) + 3)) {
			cct_showstr(0, 2 * (int(hang) - 48) + 2, "                                  ");
			cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
			cout << "[��ǰ���] " << char(MY / 2 + 'A' - 1) << "�� " << MX / 4 + 1 << "�� ";
			if (MAction == MOUSE_RIGHT_BUTTON_CLICK) {
				cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
				cct_showstr(0, 2 * (int(hang) - 48) + 2, "                                  ");
				cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
				return;
			}
			int map1[cols][rows] = { 0 };
			for (int i = 0; i < int(hang) - 48; i++) {
				for (int j = 0; j < int(lie) - 48; j++) {
					if (i > 0 && j > 0 && i < int(hang) - 49) {
						if (map[i - 1][j] == map[i][j - 1] && map[i - 1][j] == map[i + 1][j]) {
							map1[i][j - 1] = 1;
							map1[i][j] = 1;
							flag = 1;
						}
					}
					if (i > 0 && j > 0 && j < int(lie) - 49) {
						if (map[i - 1][j] == map[i][j - 1] && map[i - 1][j] == map[i][j + 1]) {
							map1[i - 1][j] = 1;
							map1[i][j] = 1;
							flag = 1;
						}
					}
					if (i > 0 && i < int(hang) - 49 && j < int(lie) - 49) {
						if (map[i - 1][j] == map[i][j + 1] && map[i - 1][j] == map[i + 1][j]) {
							map1[i][j] = 1;
							map1[i][j + 1] = 1;
							flag = 1;
						}
					}
					if (j > 0 && i < int(hang) - 49 && j < int(lie) - 49) {
						if (map[i + 1][j] == map[i][j - 1] && map[i + 1][j] == map[i][j + 1]) {
							map1[i][j] = 1;
							map1[i + 1][j] = 1;
							flag = 1;
						}
					}

					if (i > 1 && i < int(hang) - 49) {
						if (map[i - 2][j] == map[i - 1][j] && map[i - 1][j] == map[i + 1][j]) {
							map1[i][j] = 1;
							map1[i + 1][j] = 1;
							flag = 1;
						}
					}
					if (i > 1 && j > 0) {
						if (map[i - 2][j] == map[i - 1][j] && map[i - 1][j] == map[i][j - 1]) {
							map1[i][j - 1] = 1;
							map1[i][j] = 1;
							flag = 1;
						}
					}
					if (i > 1 && j < int(lie) - 49) {
						if (map[i - 2][j] == map[i - 1][j] && map[i - 1][j] == map[i][j + 1]) {
							map1[i][j] = 1;
							map1[i][j + 1] = 1;
							flag = 1;
						}
					}
					if (i > 0 && i < int(hang) - 50) {
						if (map[i + 2][j] == map[i + 1][j] && map[i + 1][j] == map[i - 1][j]) {
							map1[i - 1][j] = 1;
							map1[i][j] = 1;
							flag = 1;
						}
					}
					if (j > 0 && i < int(hang) - 50) {
						if (map[i + 2][j] == map[i + 1][j] && map[i + 1][j] == map[i][j - 1]) {
							map1[i][j - 1] = 1;
							map1[i][j] = 1;
							flag = 1;
						}
					}
					if (i < int(hang) - 50 && j < int(lie) - 49) {
						if (map[i + 2][j] == map[i + 1][j] && map[i + 1][j] == map[i][j + 1]) {
							map1[i][j] = 1;
							map1[i][j + 1] = 1;
							flag = 1;
						}
					}
					if (i > 0 && j > 1) {
						if (map[i][j - 2] == map[i][j - 1] && map[i][j - 1] == map[i - 1][j]) {
							map1[i - 1][j] = 1;
							map1[i][j] = 1;
							flag = 1;
						}
					}
					if (j > 1 && i < int(hang) - 49) {
						if (map[i][j - 2] == map[i][j - 1] && map[i][j - 1] == map[i + 1][j]) {
							map1[i][j] = 1;
							map1[i + 1][j] = 1;
							flag = 1;
						}
					}
					if (j > 1 && j < int(lie) - 49) {
						if (map[i][j - 2] == map[i][j - 1] && map[i][j - 1] == map[i][j + 1]) {
							map1[i][j] = 1;
							map1[i][j + 1] = 1;
							flag = 1;
						}
					}
					if (i > 0 && j < int(lie) - 50) {
						if (map[i][j + 2] == map[i][j + 1] && map[i][j + 1] == map[i - 1][j]) {
							map1[i - 1][j] = 1;
							map1[i][j] = 1;
							flag = 1;
						}
					}
					if (i < int(hang) - 49 && j < int(lie) - 50) {
						if (map[i][j + 2] == map[i][j + 1] && map[i][j + 1] == map[i + 1][j]) {
							map1[i][j] = 1;
							map1[i + 1][j] = 1;
							flag = 1;
						}
					}
					if (j > 0 && j < int(lie) - 50) {
						if (map[i][j + 2] == map[i][j + 1] && map[i][j + 1] == map[i][j - 1]) {
							map1[i][j - 1] = 1;
							map1[i][j] = 1;
							flag = 1;
						}
					}
				}
			}
			if (flag == 0) {
				cct_showstr(10, 2 * (int(hang) - 48) + 2, "                                  ");
				cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
				return;
			}
			if (MAction == MOUSE_LEFT_BUTTON_CLICK) {
				if (map1[(MY - 2) / 2][(MX - 2) / 4] == 1) {
					if (MX == 2 || MX == 6 || MX == 10 || MX == 14 || MX == 18 || MX == 22 || MX == 26 || MX == 30 || MX == 34 || MX == 38) {
						cct_showstr(MX, MY, "��", map[(MY - 2) / 2][(MX - 2) / 4], 15);
						a[(MY - 2) / 2][(MX - 2) / 4] = 1;
					}
					if (MX == 3 || MX == 7 || MX == 11 || MX == 15 || MX == 19 || MX == 23 || MX == 27 || MX == 31 || MX == 35 || MX == 39) {
						cct_showstr(MX - 1, MY, "��", map[(MY - 2) / 2][(MX - 3) / 4], 15);
						a[(MY - 2) / 2][(MX - 3) / 4] = 1;
					}
					cct_showstr(10, 2 * (int(hang) - 48) + 2, "                                  ");
					cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
					cout << "��ǰѡ��" << char(MY / 2 + 'A' - 1) << "�� " << MX / 4 + 1 << "�� ";
					Sleep(1000);
					cct_showstr(10, 2 * (int(hang) - 48) + 2, "                                  ");
					cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
				}
				else {
					cct_showstr(10, 2 * (int(hang) - 48) + 2, "                                  ");
					cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
					cout << "����ѡ��" << char(MY / 2 + 'A' - 1) << "�� " << MX / 4 + 1 << "�� ";
					Sleep(1);
				}
			}
			MAction = CCT_MOUSE_EVENT;
			cct_read_keyboard_and_mouse(MX, MY, MAction, keycode1, keycode2);
			if (MAction == MOUSE_LEFT_BUTTON_CLICK && a[(MY - 2) / 2][(MX - 3) / 4] == 1) {
				cct_showstr(MX - 1, MY, "��", map[(MY - 2) / 2][(MX - 3) / 4], 0);
				a[(MY - 2) / 2][(MX - 3) / 4] = 0;
			}
			if (MAction == MOUSE_LEFT_BUTTON_CLICK && a[(MY - 2) / 2][(MX - 2) / 4] == 1) {
				cct_showstr(MX, MY, "��", map[(MY - 2) / 2][(MX - 2) / 4], 0);
				a[(MY - 2) / 2][(MX - 2) / 4] = 0;
			}
			if (MX == 2 || MX == 6 || MX == 10 || MX == 14 || MX == 18 || MX == 22 || MX == 26 || MX == 30 || MX == 34 || MX == 38) {
				if (a[(MY - 2) / 2][(MX - 2) / 4] == 1 && a[(MY - 2) / 2 + 1][(MX - 2) / 4] == 1) {
					swap(map[(MY - 2) / 2][(MX - 2) / 4], map[(MY - 2) / 2 + 1][(MX - 2) / 4]);
					cct_showstr(MX, MY, "��", map[(MY - 2) / 2][(MX - 2) / 4], 0);
					cct_showstr(MX, MY + 2, "��", map[(MY - 2) / 2 + 1][(MX - 2) / 4], 0);
					graph4_0(hang, lie, map, 0);
					a[(MY - 2) / 2][(MX - 2) / 4] = 0;
					a[(MY - 2) / 2 + 1][(MX - 2) / 4] = 0;
				}
				if (a[(MY - 2) / 2][(MX - 2) / 4] == 1 && a[(MY - 2) / 2 - 1][(MX - 2) / 4] == 1) {
					swap(map[(MY - 2) / 2][(MX - 2) / 4], map[(MY - 2) / 2 - 1][(MX - 2) / 4]);
					cct_showstr(MX, MY, "��", map[(MY - 2) / 2][(MX - 2) / 4], 0);
					cct_showstr(MX, MY - 2, "��", map[(MY - 2) / 2 - 1][(MX - 2) / 4], 0);
					graph4_0(hang, lie, map, 0);
					a[(MY - 2) / 2][(MX - 2) / 4] = 0;
					a[(MY - 2) / 2 - 1][(MX - 2) / 4] = 0;
				}
				if (a[(MY - 2) / 2][(MX - 2) / 4] == 1 && a[(MY - 2) / 2][(MX - 2) / 4 + 1] == 1) {
					swap(map[(MY - 2) / 2][(MX - 2) / 4], map[(MY - 2) / 2][(MX - 2) / 4 + 1]);
					cct_showstr(MX, MY, "��", map[(MY - 2) / 2][(MX - 2) / 4], 0);
					cct_showstr(MX + 4, MY, "��", map[(MY - 2) / 2][(MX - 2) / 4 + 1], 0);
					graph4_0(hang, lie, map, 0);
					a[(MY - 2) / 2][(MX - 2) / 4] = 0;
					a[(MY - 2) / 2][(MX - 2) / 4 + 1] = 0;
				}
				if (a[(MY - 2) / 2][(MX - 2) / 4] == 1 && a[(MY - 2) / 2][(MX - 2) / 4 - 1] == 1) {
					swap(map[(MY - 2) / 2][(MX - 2) / 4], map[(MY - 2) / 2][(MX - 2) / 4 - 1]);
					cct_showstr(MX, MY, "��", map[(MY - 2) / 2][(MX - 2) / 4], 0);
					cct_showstr(MX - 4, MY, "��", map[(MY - 2) / 2][(MX - 2) / 4 - 1], 0);
					graph4_0(hang, lie, map, 0);
					a[(MY - 2) / 2][(MX - 2) / 4] = 0;
					a[(MY - 2) / 2][(MX - 2) / 4 - 1] = 0;
				}
			}
			if (MX == 3 || MX == 7 || MX == 11 || MX == 15 || MX == 19 || MX == 23 || MX == 27 || MX == 31 || MX == 35 || MX == 39) {
				if (a[(MY - 2) / 2][(MX - 3) / 4] == 1 && a[(MY - 2) / 2 + 1][(MX - 3) / 4] == 1) {
					swap(map[(MY - 2) / 2][(MX - 3) / 4], map[(MY - 2) / 2 + 1][(MX - 3) / 4]);
					cct_showstr(MX - 1, MY, "��", map[(MY - 2) / 2][(MX - 3) / 4], 0);
					cct_showstr(MX - 1, MY + 2, "��", map[(MY - 2) / 2 + 1][(MX - 3) / 4], 0);
					graph4_0(hang, lie, map, 0); 
					a[(MY - 2) / 2][(MX - 3) / 4] = 0;
					a[(MY - 2) / 2 + 1][(MX - 3) / 4] = 0;
				}
				if (a[(MY - 2) / 2][(MX - 3) / 4] == 1 && a[(MY - 2) / 2 - 1][(MX - 3) / 4] == 1) {
					swap(map[(MY - 2) / 2][(MX - 3) / 4], map[(MY - 2) / 2 - 1][(MX - 3) / 4]);
					cct_showstr(MX - 1, MY, "��", map[(MY - 2) / 2][(MX - 3) / 4], 0);
					cct_showstr(MX - 1, MY - 2, "��", map[(MY - 2) / 2 - 1][(MX - 3) / 4], 0);
					graph4_0(hang, lie, map, 0);
					a[(MY - 2) / 2][(MX - 3) / 4] = 0;
					a[(MY - 2) / 2 - 1][(MX - 3) / 4] = 0;
				}
				if (a[(MY - 2) / 2][(MX - 3) / 4] == 1 && a[(MY - 2) / 2][(MX - 3) / 4 + 1] == 1) {
					swap(map[(MY - 2) / 2][(MX - 3) / 4], map[(MY - 2) / 2][(MX - 3) / 4 + 1]);
					cct_showstr(MX - 1, MY, "��", map[(MY - 2) / 2][(MX - 3) / 4], 0);
					cct_showstr(MX + 3, MY, "��", map[(MY - 2) / 2][(MX - 3) / 4 + 1], 0);
					graph4_0(hang, lie, map, 0);
					a[(MY - 2) / 2][(MX - 3) / 4] = 0;
					a[(MY - 2) / 2][(MX - 3) / 4 + 1] = 0; 
				}
				if (a[(MY - 2) / 2][(MX - 3) / 4] == 1 && a[(MY - 2) / 2][(MX - 3) / 4 - 1] == 1) {
					swap(map[(MY - 2) / 2][(MX - 3) / 4], map[(MY - 2) / 2][(MX - 3) / 4 - 1]);
					cct_showstr(MX - 1, MY, "��", map[(MY - 2) / 2][(MX - 3) / 4], 0);
					cct_showstr(MX - 5, MY, "��", map[(MY - 2) / 2][(MX - 3) / 4 - 1], 0);
					graph4_0(hang, lie, map, 0);
					a[(MY - 2) / 2][(MX - 3) / 4] = 0;
					a[(MY - 2) / 2][(MX - 3) / 4 - 1] = 0;
				}
			}
			for (int i = 0; i < int(hang) - 48; i++) {
				for (int j = 0; j < int(lie) - 48; j++) {
					if (a[i][j] == 1)
						flag = 1;
				}
			}
			if (flag == 0) {
				cct_showstr(10, 2 * (int(hang) - 48) + 2, "                                  ");
				cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
				return;
			}
			else
				flag = 0;
		}
		else {
			cct_showstr(10, 2 * (int(hang) - 48) + 2, "                                  ");
			cct_gotoxy(0, 2 * (int(hang) - 48) + 2);
			cout << "[��ǰ���] λ�÷Ƿ�";
		}
	}
}