/* 2352017 张睿琦 信14 */
#include <iostream>
#include<iomanip>
#include<Windows.h>
#include <conio.h>
#include"5-b7.h"
using namespace std;
int a[10] = { 0 }, b[10] = { 0 }, c[10] = { 0 };
int i = 0;
int d;
int x = 0, y = 0, z = 0;
static int t;

void f1(char src, char dst);
void f2();
void f3();
void f4();
void hanoi(int n, char src, char tmp, char dst);

void f1(char src, char dst)
{
    int j = 0;
    switch (src)
    {
    case 'A':
        j = a[x - 1];
        a[x - 1] = 0;
        x--;
        break;
    case 'B':
        j = b[y - 1];
        b[y - 1] = 0;
        y--;
        break;
    case 'C':
        j = c[z - 1];
        c[z - 1] = 0;
        z--;
        break;
    default:
        break;
    }
    switch (dst)
    {
    case 'A':
        a[x] = j;
        x++;
        break;
    case 'B':
        b[y] = j;
        y++;
        break;
    case 'C':
        c[z] = j;
        z++;
        break;
    default:
        break;
    }
}

void f2()
{
    int u;
    cout << "A:";
    for (u = 0; u < 10; u++){
        if (a[u] == 0)
            cout << "  ";
        else
            cout << setw(2) << a[u];;
    }
    cout << " B:";
    for (u = 0; u < 10; u++){
        if (b[u] == 0)
            cout << "  ";
        else
            cout << setw(2) << b[u];
    }
    cout << " C:";
    for (u = 0; u < 10; u++){
        if (c[u] == 0)
            cout << "  ";
        else
            cout << setw(2) << c[u];
    }
    cout << endl;
}

void f3()
{
    cct_gotoxy(9, 13);
    cout << "=========================" << endl;
    cct_gotoxy(11, 14);
    cout << "A         B         C";
    for (int s = 0; s < 10; s++) {
        cct_gotoxy(10, 12 - s);
        if (a[s] != 0)
            cout << setw(2) << a[s];
        else {
            cout << setw(2) << ' ';
            break;
        }
    }
    for (int s = 0; s < 10; s++) {
        cct_gotoxy(20, 12 - s);
        if (b[s] != 0)
            cout << setw(2) << b[s];
        else {
            cout << setw(2) << ' ';
            break;
        }
    }
    for (int s = 0; s < 10; s++) {
        cct_gotoxy(30, 12 - s);
        if (c[s] != 0)
            cout << setw(2) << c[s];
        else {
            cout << setw(2) << ' ';
            break;
        }
    }
}

void f4()
{
    switch (t) {
    case 0:
        int w;
        while (1) {
            w = _getch();
            if (w == 13)
                break;
        }
        break;
    case 1:
        Sleep(10);
        break;
    case 2:
        Sleep(8);
        break;
    case 3:
        Sleep(5);
        break;
    case 4:
        Sleep(3);
        break;
    case 5:
        Sleep(1);
        break;
    default:
        break;
    }
}

int main()
{
    int k = 0;
    int n;
    char src, dst;
    while (1) {
        cout << "请输入汉诺塔的层数(1-10)" << endl;
        cin >> n;
        if (n < 1 || n>16) {
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
        }
        else if (n >= 1 && n <= 16) {
            cin.clear();
            cin.ignore(1024, '\n');
            while (1) {
                cout << "请输入起始柱(A-C)" << endl;
                cin >> src;
                if (src == 'A' || src == 'a') {
                    cin.clear();
                    cin.ignore(1024, '\n');
                    while (1) {
                        cout << "请输入目标柱(A-C)" << endl;
                        cin >> dst;
                        if (dst == 'A' || dst == 'a') {
                            cout << "目标柱(A)不能与起始柱(A)相同" << endl;
                            cin.clear();
                            cin.ignore(1024, '\n');
                            continue;
                        }
                        else if (dst == 'B' || dst == 'b') {
                            for (int i = n; i > 0; i--) {
                                a[k] = i;
                                k++;
                            }
                            x = k;
                            while (1) {
                                cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)" << endl;
                                cin >> t;
                                if (cin.fail() || t > 5 || t < 0) {
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
                            cct_cls();
                            f3();
                            cct_gotoxy(0, 17);
                            f2();
                            hanoi(n, 'A', 'C', 'B');
                            cct_gotoxy(0, 19);
                            break;
                        }
                        else if (dst == 'C' || dst == 'c') {
                            for (int i = n; i > 0; i--) {
                                a[k] = i;
                                k++;
                            }
                            x = k;
                            while (1) {
                                cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)" << endl;
                                cin >> t;
                                if (cin.fail() || t > 5 || t < 0) {
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
                            cct_cls();
                            f3();
                            cct_gotoxy(0, 17);
                            f2();
                            hanoi(n, 'A', 'B', 'C');
                            cct_gotoxy(0, 19);
                            break;
                        }
                        else {
                            cin.clear();
                            cin.ignore(1024, '\n');
                            continue;
                        }
                        break;
                    }
                }
                else if (src == 'B' || src == 'b') {
                    cin.clear();
                    cin.ignore(1024, '\n');
                    while (1) {
                        cout << "请输入目标柱(A-C)" << endl;
                        cin >> dst;
                        if (dst == 'B' || dst == 'b') {
                            cout << "目标柱(B)不能与起始柱(B)相同" << endl;
                            cin.clear();
                            cin.ignore(1024, '\n');
                            continue;
                        }
                        else if (dst == 'A' || dst == 'a') {
                            for (int i = n; i > 0; i--) {
                                b[k] = i;;
                                k++;
                            }
                            y = k;
                            while (1) {
                                cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)" << endl;
                                cin >> t;
                                if (cin.fail() || t > 5 || t < 0) {
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
                            cct_cls();
                            f3();
                            cct_gotoxy(0, 17);
                            f2();
                            hanoi(n, 'B', 'C', 'A');
                            cct_gotoxy(0, 19);
                            break;
                        }
                        else if (dst == 'C' || dst == 'c') {
                            for (int i = n; i > 0; i--) {
                                b[k] = i;
                                k++;
                            }
                            y = k;
                            while (1) {
                                cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)" << endl;
                                cin >> t;
                                if (cin.fail() || t > 5 || t < 0) {
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
                            cct_cls();
                            f3();
                            cct_gotoxy(0, 17);
                            f2();
                            hanoi(n, 'B', 'A', 'C');
                            cct_gotoxy(0, 19);
                            break;
                        }
                        else {
                            cin.clear();
                            cin.ignore(1024, '\n');
                            continue;
                        }
                    }
                }
                else if (src == 'C' || src == 'c') {
                    cin.clear();
                    cin.ignore(1024, '\n');
                    while (1) {
                        cout << "请输入目标柱(A-C)" << endl;
                        cin >> dst;
                        if (dst == 'C' || dst == 'c') {
                            cout << "目标柱(C)不能与起始柱(C)相同" << endl;
                            cin.clear();
                            cin.ignore(1024, '\n');
                            continue;
                        }
                        else if (dst == 'B' || dst == 'b') {
                            for (int i = n; i > 0; i--) {
                                c[k] = i;
                                k++;
                            }
                            z = k;
                            while (1) {
                                cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)" << endl;
                                cin >> t;
                                if (cin.fail() || t > 5 || t < 0) {
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
                            cct_cls();
                            f3();
                            cct_gotoxy(0, 17);
                            f2();
                            hanoi(n, 'C', 'A', 'B');
                            cct_gotoxy(0, 19);
                            break;
                        }
                        else if (dst == 'A' || dst == 'a') {
                            for (int i = n; i > 0; i--) {
                                c[k] = i;
                                k++;
                            }
                            z = k;
                            while (1) {
                                cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短)" << endl;
                                cin >> t;
                                if (cin.fail() || t > 5 || t < 0) {
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
                            cct_cls();
                            f3();
                            cct_gotoxy(0, 17);
                            f2();
                            hanoi(n, 'C', 'B', 'A');
                            cct_gotoxy(0, 19);
                            break;
                        }
                        else {
                            cin.clear();
                            cin.ignore(1024, '\n');
                            continue;
                        }
                    }
                }
                else {
                    cin.clear();
                    cin.ignore(1024, '\n');
                    continue;
                }
                break;
            }
            break;
        }
    }
}
void hanoi(int n, char src, char tmp, char dst)
{
    if (n == 0)
        return;
    else {
        hanoi(n - 1, src, dst, tmp);
        f4();
        cct_gotoxy(0, 17);
        i++;
        cout << "第" << setw(4) << i << " 步(" << setw(2) << n << ")" << ": " << src << "-->" << dst << ' ';
        f1(src, dst);
        f2();
        f4();
        f3();
        hanoi(n - 1, tmp, src, dst);
    }
}