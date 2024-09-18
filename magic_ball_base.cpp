/* 2352017 ��14 ����� */
#include<iostream>
#include <iomanip>
#include <cstring>
#include <Windows.h>
#include<conio.h>
#include"magic_ball.h"
#include"cmd_console_tools.h"
using namespace std;

int** broad(char hang, char lie) 
{
    int** map = new int* [hang];
    for (int i = 0; i < hang; i++) {
        map[i] = new int[lie];
    }
    return map;
}
void print(char hang,char lie,int **map)
{
    cout << "��ʼ���飺" << endl;
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < lie; j++) {
            map[i][j] = rand() % 9 + 1;
        }
    }
    cout << "  |";
    for (int j = 1; j < int(lie) - 47; j++) {
        cout << setw(3) << j;
    }
    cout << endl;
    cout << "--+" << setfill('-') << setw((int(lie) - 48) * 3 + 2) << ' ' << endl;
    for (int i = 0; i < int(hang) - 48; i++) {
        cout << char(i + 'A') << " |";
        for (int j = 0; j < int(lie) - 48; j++) {
            cout << setfill(' ') << setw(3) << map[i][j];
        }
        cout << endl;
    }
}

void judge1(char hang, char lie, int **map, int a)
{
    cout << "���س�������Ѱ�ҳ�ʼ��������Ĳ���..." << endl;
    enter();
    cout << "��ʼ���������ͬɫ��ʶ����" << endl;
    int flag = 0;
    int X, Y;
    print_up(lie);
    for (int i = 0; i < int(hang) - 48; i++) {
        cout << char(i + 'A') << " |";
        for (int j = 0; j < int(lie) - 48; j++) {
            cout << setfill(' ') << setw(3) << map[i][j];
            if (i >= 2 && map[i - 1][j] == map[i][j] && map[i - 2][j] == map[i][j]) {
                flag = 1;
                cct_getxy(X, Y);
                cct_showint(X-1, Y-2, map[i][j], 14, 0);
                cct_showint(X-1, Y-1, map[i][j], 14, 0);
                cct_showint(X-1, Y, map[i][j], 14, 0);
                cct_setcolor(0, 7);
            }
            if (j >= 2 && map[i][j - 1] == map[i][j] && map[i][j - 2] == map[i][j]) {
                flag = 1;
                cct_getxy(X, Y);
                cct_showint(X-7, Y, map[i][j], 14, 0);
                cct_showint(X-4, Y, map[i][j], 14, 0);
                cct_showint(X-1, Y, map[i][j], 14, 0);
                cct_setcolor(0, 7);
            }
            
        }
        cout << endl;
    }
    cct_getxy(X, Y);
    cout << endl;
    cct_setcolor(0,7);
    if (flag == 0) {
        cout << "��ʼ���޿�������" << endl;
        return;
    }
    if (a == 1)
        return;
    if (a == 2 && flag == 1)
        judge2(hang, lie, map, 2);
    if (a == 3 && flag == 1)
        judge2(hang, lie, map, 3);
}

void judge2(char hang, char lie, int** map, int a)
{
    cout << "���س����������������0����..." << endl;
    enter();
    cout << "������0�����飨��ͬɫ��ʶ����" << endl;
    int X, Y;
    int f = 0;
    change(hang, lie, map);
    for (int i = 0; i < int(hang) - 48; i++) {
        for (int j = 0; j < int(lie) - 48; j++) {
            if (map[i][j] == 0) {
                for (int k = 0; k < i; k++) {
                    swap(map[i - k][j], map[i - k - 1][j]);
                }
            }
        }
    }
    print_up(lie);
    for (int i = 0; i < int(hang) - 48; i++) {
        cout << char(i + 'A') << " |";
        for (int j = 0; j < int(lie) - 48; j++) {
            cout << setfill(' ') << setw(3) << map[i][j];
            if (map[i][j] == 0) {
                cct_getxy(X, Y);
                cct_showint(X - 1, Y, map[i][j], 14, 0);
                cct_setcolor(0, 7);
            }
        }
        cout << endl;
    }
    cout << "���س���������ֵ���..." << endl;
    enter();
    print_up(lie);
    for (int i = 0; i < int(hang) - 48; i++) {
        cout << char(i + 'A') << " |";
        for (int j = 0; j < int(lie) - 48; j++) {
            while (map[i][j] == 0) {
                map[i][j] = rand() % 9 + 1;
                f = 1;
            }
            cout << setfill(' ') << setw(3) << map[i][j];
            if (f == 1) {
                cct_getxy(X, Y);
                cct_showint(X - 1, Y, map[i][j], 14, 0);
                cct_setcolor(0, 7);
            }
            f = 0;
        }
        cout << endl;
    }
    cct_getxy(X, Y);
    cout << endl;
    cct_setcolor(0, 7);
    if(a == 2)
        judge1(hang, lie, map, 2);
    if(a == 3)
        judge3(hang, lie, map, 3);
}
void judge3(char hang, char lie, int** map, int a) {
    int X, Y;
    int map1[cols][rows] = { 0 };
    print_up(lie);
    for (int i = 0; i < int(hang) - 48; i++) {
        cout << char(i + 'A') << " |";
        for (int j = 0; j < int(lie) - 48; j++) {
            cout << setfill(' ') << setw(3) << map[i][j];
            if (i > 0 && j > 0 && i < int(hang) - 49) {
                if (map[i - 1][j] == map[i][j - 1] && map[i - 1][j] == map[i + 1][j]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 4, Y, map[i][j - 1], 14, 0);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    cct_setcolor(0, 7);
                }
            }
            if (i > 0 && j > 0 && j < int(lie) - 49) {
                if (map[i - 1][j] == map[i][j - 1] && map[i - 1][j] == map[i][j + 1]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 1, Y - 1, map[i - 1][j], 14, 0);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    cct_setcolor(0, 7);
                    cct_gotoxy(X, Y);
                }
            }
            if (i > 0 && i < int(hang) - 49 && j < int(lie) - 49) {
                if (map[i - 1][j] == map[i][j + 1] && map[i - 1][j] == map[i + 1][j]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    cct_showint(X + 2, Y, map[i][j + 1], 14, 0);
                    cct_setcolor(0, 7);
                    j++;
                }
            }
            if (j > 0 && i < int(hang) - 49 && j < int(lie) - 49) {
                if (map[i + 1][j] == map[i][j - 1] && map[i + 1][j] == map[i][j + 1]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    map1[i + 1][j] = 1;
                    cct_setcolor(0, 7);
                    cct_gotoxy(X, Y);
                }
            }

            if (i > 1 && i < int(hang) - 49) {
                if (map[i - 2][j] == map[i - 1][j] && map[i - 1][j] == map[i + 1][j]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    map1[i + 1][j] = 1;
                    cct_setcolor(0, 7);
                    cct_gotoxy(X, Y);
                }
            }
            if (i > 1 && j > 0) {
                if (map[i - 2][j] == map[i - 1][j] && map[i - 1][j] == map[i][j - 1]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 4, Y, map[i][j - 1], 14, 0);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    cct_setcolor(0, 7);
                }
            }
            if (i > 1 && j < int(lie) - 49) {
                if (map[i - 2][j] == map[i - 1][j] && map[i - 1][j] == map[i][j + 1]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    cct_showint(X + 2, Y, map[i][j + 1], 14, 0);
                    cct_setcolor(0, 7);
                    j++;
                }
            }
            if (i > 0 && i < int(hang) - 50) {
                if (map[i + 2][j] == map[i + 1][j] && map[i + 1][j] == map[i - 1][j]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 1, Y - 1, map[i - 1][j], 14, 0);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    cct_setcolor(0, 7);
                    cct_gotoxy(X, Y);
                }
            }
            if (j > 0 && i < int(hang) - 50) {
                if (map[i + 2][j] == map[i + 1][j] && map[i + 1][j] == map[i][j - 1]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 4, Y, map[i][j - 1], 14, 0);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    cct_setcolor(0, 7);
                }
            }
            if (i < int(hang) - 50 && j < int(lie) - 49) {
                if (map[i + 2][j] == map[i + 1][j] && map[i + 1][j] == map[i][j + 1]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    cct_showint(X + 2, Y, map[i][j + 1], 14, 0);
                    cct_setcolor(0, 7);
                    j++;
                }
            }
            if (i > 0 && j > 1) {
                if (map[i][j - 2] == map[i][j - 1] && map[i][j - 1] == map[i - 1][j]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 1, Y - 1, map[i - 1][j], 14, 0);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    cct_setcolor(0, 7);
                }
            }
            if (j > 1 && i < int(hang) - 49) {
                if (map[i][j - 2] == map[i][j - 1] && map[i][j - 1] == map[i + 1][j]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    map1[i + 1][j] = 1;
                    cct_setcolor(0, 7);
                    cct_gotoxy(X, Y);
                }
            }
            if (j > 1 && j < int(lie) - 49) {
                if (map[i][j - 2] == map[i][j - 1] && map[i][j - 1] == map[i][j + 1]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    cct_showint(X + 2, Y, map[i][j + 1], 14, 0);
                    cct_setcolor(0, 7);
                    j++;
                }
            }
            if (i > 0 && j < int(lie) - 50) {
                if (map[i][j + 2] == map[i][j + 1] && map[i][j + 1] == map[i - 1][j]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 1, Y - 1, map[i - 1][j], 14, 0);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    cct_setcolor(0, 7);
                }
            }
            if (i < int(hang) - 49 && j < int(lie) - 50) {
                if (map[i][j + 2] == map[i][j + 1] && map[i][j + 1] == map[i + 1][j]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    map1[i + 1][j] = 1;
                    cct_setcolor(0, 7);
                    cct_gotoxy(X, Y);
                }
            }
            if (j > 0 && j < int(lie) - 50) {
                if (map[i][j + 2] == map[i][j + 1] && map[i][j + 1] == map[i][j - 1]) {
                    cct_getxy(X, Y);
                    cct_showint(X - 4, Y, map[i][j - 1], 14, 0);
                    cct_showint(X - 1, Y, map[i][j], 14, 0);
                    cct_setcolor(0, 7);
                }
            }
            if (i > 0 && map1[i][j] == 1) {
                cct_getxy(X, Y);
                cct_showint(X - 1, Y, map[i][j], 14, 0);
                cct_setcolor(0, 7);
            }
        }
        cout << endl;
    }
}