/* 2352017 信14 张睿琦 */
#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<conio.h>
#include<cstring>
#include"magic_ball.h"
#include"cmd_console_tools.h"
using namespace std;
#define rows 10
#define cols 10

void input_hang(char *hang)
{
    while (1) {
        cout << "请输入行数(5-9)：" << endl;
        cin >> *hang;
        if (cin.fail() || (*hang < '5' || *hang > '10')) {
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
        }
        else {
            cin.clear();
            cin.ignore(1024, '\n');
            break;
        }
    }
}

void input_lie(char *lie)
{
    while (1) {
        cout << "请输入列数(5-9)：" << endl;
        cin >> *lie;
        if (cin.fail() || (*lie < '5' || *lie > '10')) {
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
        }
        else {
            cin.clear();
            cin.ignore(1024, '\n');
            break;
        }
    }
}
void enter()
{
    while (1) {
        if (getchar() == '\n') {
            break;
        }
        else {
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
        }
    }
}

void change(int hang,int lie,int **map)
{
    int flag_of_map,flag = 0;
    int a[cols][rows];
    for (int i = 0; i < (int(hang) - 48); i++) {
        for (int j = 0; j < (int(lie) - 48); j++) {
            a[i][j] = map[i][j];
        }
    }
    for (int i = 0; i < (int(hang) - 48); i++) {
        for (int j = 0; j < (int(lie) - 48); j++) {
            flag_of_map = a[i][j];
            if (i > 2 && a[i - 1][j] == flag_of_map && a[i - 2][j] == flag_of_map && a[i - 3][j] == flag_of_map) {
                flag = 1;
                a[i][j] = 0;
                continue;
            }
            if (i < (int(hang) - 48) - 3 && a[i + 1][j] == flag_of_map && a[i + 2][j] == flag_of_map && a[i + 3][j] == flag_of_map) {
                flag = 1;
                a[i][j] = 0;
                continue;
            }
            if (i > 1 && a[i - 1][j] == flag_of_map && a[i - 2][j] == flag_of_map) {
                flag = 1;
                a[i][j] = 0;
                a[i - 1][j] = 0;
                a[i - 2][j] = 0;
            }
            if (i < (int(hang) - 48) - 2 && a[i + 1][j] == flag_of_map && a[i + 2][j] == flag_of_map) {
                flag = 1;
                a[i][j] = 0;
                a[i + 1][j] = 0;
                a[i + 2][j] = 0;
            }
            if (j > 2 && a[i][j - 1] == flag_of_map && a[i][j - 2] == flag_of_map && a[i][j - 3] == flag_of_map) {
                flag = 1;
                a[i][j] = 0;
                continue;
            }
            if (j < (int(lie) - 48) - 3 && a[i][j + 1] == flag_of_map && a[i][j + 2] == flag_of_map && a[i][j + 3] == flag_of_map) {
                flag = 1;
                a[i][j] = 0;
                continue;
            }
            if (j > 1 && a[i][j - 1] == flag_of_map && a[i][j - 2] == flag_of_map) {
                flag = 1;
                a[i][j] = 0;
                a[i][j - 1] = 0;
                a[i][j - 2] = 0;
            }
            if (j < (int(lie) - 48) - 2 && a[i][j + 1] == flag_of_map && a[i][j + 2] == flag_of_map) {
                flag = 1;
                a[i][j] = 0;
                a[i][j + 1] = 0;
                a[i][j + 2] = 0;
            }
        }
    }
    for (int i = 0; i < (int(hang) - 48); i++) {
        for (int j = 0; j < (int(lie) - 48); j++) {
            if(a[i][j] == 0)
            map[i][j] = 0;
        }
    }
}

void print_up(char lie)
{
    cout << "  |";
    for (int i = 1; i < int(lie) - 47; i++) {
        cout << setw(3) << i;
    }
    cout << endl;
    cout << "--+" << setfill('-') << setw((int(lie) - 48) * 3 + 2) << ' ' << endl;
}

void wait_for_enter1()
{
    cout << "按回车键进行消除及下落除0的操作" << endl;
    enter();
}

void wait_for_enter2()
{
    cout << "按回车键进行新值填充           " << endl;
    enter();
}

void wait_for_enter3()
{
    cout << "按回车键显示消除提示           " << endl;
    enter();
}


void exit()
{
    int X, Y;
    cout << "本小题结束，请输入End继续...  ";
    cct_getxy(X, Y);
    while (1) {
        char a[4];
        for (int i = 0; i < 3; i++) {
            a[i] = getchar();
        }
        a[3] = '\0';
        if (cin.good() && (strcmp(a, "end") == 0 || strcmp(a, "End") == 0 || strcmp(a, "eNd") == 0 || strcmp(a, "enD") == 0 || strcmp(a, "ENd") == 0 || strcmp(a, "eND") == 0 || strcmp(a, "EnD") == 0 || strcmp(a, "END") == 0)) {
            return;
        }
        else {
            cct_showstr(X,Y,"      ",0,7);
            cct_gotoxy(X, Y);
            cin.clear();
            cin.ignore(1024, '\n');
            cout << endl <<"输入错误，请重新输入";
            cct_gotoxy(X, Y);
            continue;
        }
    }
}

void choice_1()
{
    cct_cls();
    char hang, lie;
    input_hang(&hang);
    input_lie(&lie);
    int** map = broad(hang, lie);
    print(hang, lie, map);
    cout << endl;
    judge1(hang, lie, map, 1);
    exit();
    return;
}

void choice_2()
{
    cct_cls();
    char hang, lie;
    input_hang(&hang);
    input_lie(&lie);
    int** map = broad(hang, lie);
    print(hang, lie, map);
    cout << endl;
    judge1(hang, lie, map, 2);
    exit();
    return;
}

void choice_3()
{
    cct_cls();
    char hang, lie;
    input_hang(&hang);
    input_lie(&lie);
    int** map = broad(hang, lie);
    print(hang, lie, map);
    cout << endl;
    judge1(hang, lie, map, 2);
    judge3(hang, lie, map, 3);
    exit();
    return;
}

void choice_4()
{
    cct_cls();
    char hang, lie;
    input_hang(&hang);
    input_lie(&lie);
    int** map = broad(hang, lie);
    print(hang, lie, map);
    cout << endl;
    cout << "按回车键显示图形" << endl;
    enter();
    graph1(hang, lie, map);
    exit();
    return;
}

void choice_5()
{
    cct_cls();
    char hang, lie;
    input_hang(&hang);
    input_lie(&lie);
    int** map = broad(hang, lie);
    print(hang, lie, map);
    cout << endl;
    cout << "按回车键显示图形" << endl;
    enter();
    graph2(hang, lie, map);
    exit();
    return;
}

void choice_6()
{
    cct_cls();
    char hang, lie;
    input_hang(&hang);
    input_lie(&lie);
    int** map = broad(hang, lie);
    print(hang, lie, map);
    cout << endl;
    cout << "按回车键显示图形" << endl;
    enter();
    graph3(hang, lie, map);
    exit();
    return;
}

void choice_7()
{
    cct_cls();
    char hang, lie;
    input_hang(&hang);
    input_lie(&lie);
    int** map = broad(hang, lie);
    print(hang, lie, map);
    cout << endl;
    cout << "按回车键显示图形" << endl;
    enter();
    graph4(hang, lie, map, 1);
    exit();
    return;
}

void choice_8()
{
    cct_cls();
    char hang, lie;
    input_hang(&hang);
    input_lie(&lie);
    int** map = broad(hang, lie);
    print(hang, lie, map);
    cout << endl;
    cout << "按回车键显示图形" << endl;
    enter();
    graph4(hang, lie, map, 0);
    graph5(hang, lie, map);
    exit();
    return;
}

void choice_9()
{
    cct_cls();
    char hang, lie;
    input_hang(&hang);
    input_lie(&lie);
    int** map = broad(hang, lie);
    print(hang, lie, map);
    cout << endl;
    cout << "按回车键显示图形" << endl;
    enter();
    graph4(hang, lie, map, 0);
    graph6(hang, lie, map);
    exit();
    return;
}