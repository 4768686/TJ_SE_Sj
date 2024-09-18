/*2253744 林觉凯 软工*/
#include "hanoi.h"
using namespace std;
static int speed;
static int movecount;
static int A_stack[10], B_stack[10], C_stack[10];
static int A_top, B_top, C_top;
/* ----------------------------------------------------------------------------------

     本文件功能：
    1、存放被 hanoi_main.cpp 中根据菜单返回值调用的各菜单项对应的执行函数

     本文件要求：
    1、不允许定义外部全局变量（const及#define不在限制范围内）
    2、允许定义静态全局变量（具体需要的数量不要超过文档显示，全局变量的使用准则是：少用、慎用、能不用尽量不用）
    3、静态局部变量的数量不限制，但使用准则也是：少用、慎用、能不用尽量不用
    4、按需加入系统头文件、自定义头文件、命名空间等

   ----------------------------------------------------------------------------------- */
   /***************************************************************************
     函数名称：Reset()
     功    能：初始化静态全局变量
     输入参数：无
     返 回 值：无
     说    明：在每一个操作前都需移动步数Movement初始化为1，三个栈顶和三个栈中内容初始化为0
   ***************************************************************************/
void Reset()
{
    movecount = 1;
    A_top = B_top = C_top = 0;
    for (int i = 0; i < 10; i++)
        A_stack[i] = B_stack[i] = C_stack[i] = 0;
}
/***************************************************************************
     函数名称：Time_Sleep(int speed)
     功    能：设置延时功能
     输入参数：延时功能选项speed
     返 回 值：无
     说    明：当speed为0时按回车单步演示，1延时最长，5延时最短
   ***************************************************************************/
void Time_Sleep(int speed)
{
    if (speed)
        Sleep(Time / speed);
    else
        while (getchar() != '\n');
}
/***************************************************************************
     函数名称：Input(char* src, char* tmp, char* dst, int* n, int speed_flag)
     功    能：确定汉诺塔层数和三根柱，并确定是否使用延时（做过错误处理）
     输入参数：汉诺塔层数、起始柱和目标柱，延时标志
     返 回 值：无
     说    明：当speed_flag为-1时表示不使用延时操作
   ***************************************************************************/
void Input(char* src, char* tmp, char* dst, int* n, int speed_flag)
{
    while (1)
    {
        cout << "请输入汉诺塔的层数(1-10)：" << endl;
        cin >> *n;
        if (cin.good() == 0 || *n < 1 || *n > 10)
        {
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
        }
        break;
    }
    while (1)
    {
        cout << "请输入起始柱(A-C)" << endl;
        cin >> *src;
        if (cin.good() == 0)
        {
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
        }
        if (*src >= 'a' && *src <= 'c')
            *src -= 32;
        if (*src > 'C' || *src < 'A')
        {
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
        }
        cin.clear();
        cin.ignore(1024, '\n');
        break;
    }
    while (1)
    {
        cout << "请输入目标柱(A-C)" << endl;
        cin >> *dst;
        if (cin.good() == 0)
        {
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
        }
        if (*dst >= 'a' && *dst <= 'c')
            *dst -= 32;
        if (*dst > 'C' || *dst < 'A')
        {
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
        }
        if (*dst == *src)
        {
            cout << "目标柱(" << *dst << ")不能与起始柱(" << *src << ")相同" << endl;
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
        }
        cin.clear();
        cin.ignore(1024, '\n');
        break;
    }
    *tmp = 'B' * 3 - *src - *dst;
    if (speed_flag)
    {
        while (1)
        {
            cout << "请输入移动速度(0-5: 0-按回车单步演示 1-延时最长 5-延时最短) ";
            cin >> speed;
            if (cin.good() == 0 || speed > 5 || speed < 0)
            {
                cin.clear();
                cin.ignore(1024, '\n');
                continue;
            }
            cin.clear();
            cin.ignore(1024, '\n');
            break;
        }
    }
}
/***************************************************************************
     函数名称：Init(int n, char src)
     功    能：初始化起始柱
     输入参数：汉诺塔层数和起始柱
     返 回 值：无
     说    明：将起始柱的对应栈中元素初始为相应盘
   ***************************************************************************/
void Init(int n, char src)
{
    if (src == 'A')
    {
        while (A_top < n)
            A_stack[A_top++] = n - A_top;
    }
    else if (src == 'B')
    {
        while (B_top < n)
            B_stack[B_top++] = n - B_top;
    }
    else if (src == 'C')
    {
        while (C_top < n)
            C_stack[C_top++] = n - C_top;
    }
}
/***************************************************************************
     函数名称：Hanoi_Stack(char src, char dst)
     功    能：实现元素在汉诺塔塔栈里的移动
     输入参数：此步移动的起始柱和目标柱
     返 回 值：无
     说    明：通过栈的出栈入栈操作实现汉诺塔的塔栈内元素的互相移动
   ***************************************************************************/
void Hanoi_Stack(char src, char dst)
{
    int element = 0;
    if (src == 'A' && A_top > 0)
    {
        element = A_stack[--A_top];
        A_stack[A_top] = 0;
    }
    else if (src == 'B' && B_top > 0)
    {
        element = B_stack[--B_top];
        B_stack[B_top] = 0;
    }
    else if (src == 'C' && C_top > 0)
    {
        element = C_stack[--C_top];
        C_stack[C_top] = 0;
    }
    if (dst == 'A' && A_top < 10)
        A_stack[A_top++] = element;
    else if (dst == 'B' && B_top < 10)
        B_stack[B_top++] = element;
    else if (dst == 'C' && C_top < 10)
        C_stack[C_top++] = element;
}
/***************************************************************************
     函数名称：Print_Bottom(int x,int y)
     功    能：打印选项4中的底盘
     输入参数：底盘最左侧的坐标x,y
     返 回 值：无
     说    明：类似于上次作业的打印底盘，将初始位置改变即可
   ***************************************************************************/
void Print_Bottom(int x, int y)
{
    cct_gotoxy(x, y);
    cout << "         =========================" << endl;
    cout << "           A         B         C";
}
/***************************************************************************
     函数名称：Print_Crosswise(int x, int y)
     功    能：横向打印汉诺塔数组各元素
     输入参数：汉诺塔横向打印数组的位置坐标
     返 回 值：无
     说    明：类似于上次作业的横向打印数组，将初始位置改变即可
   ***************************************************************************/
void Print_Crosswise(int x, int y)
{
    cct_gotoxy(x, y);
    cout << " A:";
    for (int i = 0; i < 10; i++)
    {
        if (A_stack[i])
            cout << setw(2) << A_stack[i];
        else
            cout << "  ";
    }
    cout << " B:";
    for (int i = 0; i < 10; i++)
    {
        if (B_stack[i])
            cout << setw(2) << B_stack[i];
        else
            cout << "  ";
    }
    cout << " C:";
    for (int i = 0; i < 10; i++)
    {
        if (C_stack[i])
            cout << setw(2) << C_stack[i];
        else
            cout << "  ";
    }
    cout << endl;
}
/***************************************************************************
  函数名称：Print_Vertical(char src, char dst, int init, int bottom_x, int bottom_y, int x, int y)
  功    能：纵向打印汉诺塔数组各元素
  输入参数：起始柱、目标柱、是否初始化状态、底盘的x、y坐标和打印纵向数组的x、y坐标
  返 回 值：无
  说    明：init为1是表示初始化状态，此时打印起始柱的数组内容即可
***************************************************************************/
void Print_Vertical(char src, char dst, int init, int bottom_x, int bottom_y, int x, int y)
{
    Print_Bottom(bottom_x, bottom_y);
    if (init)
    {
        for (int i = 0; i < A_top; i++)
        {
            cct_gotoxy(x, y - i);
            if (A_stack[i])
                cout << setw(2) << A_stack[i];
        }
        for (int i = 0; i < B_top; i++)
        {
            cct_gotoxy(x + 10, y - i);
            if (B_stack[i])
                cout << setw(2) << B_stack[i];
        }
        for (int i = 0; i < C_top; i++)
        {
            cct_gotoxy(x + 20, y - i);
            if (C_stack[i])
                cout << setw(2) << C_stack[i];
        }
    }
    else
    {
        if (src == 'A')
        {
            cct_gotoxy(x, y - A_top);
            cout << "  ";
        }
        else if (src == 'B')
        {
            cct_gotoxy(x + 10, y - B_top);
            cout << "  ";
        }
        else if (src == 'C')
        {
            cct_gotoxy(x + 20, y - C_top);
            cout << "  ";
        }
        if (dst == 'A')
        {
            cct_gotoxy(x, y + 1 - A_top);
            cout << setw(2) << A_stack[A_top - 1];
        }
        else if (dst == 'B')
        {
            cct_gotoxy(x + 10, y + 1 - B_top);
            cout << setw(2) << B_stack[B_top - 1];
        }
        else if (dst == 'C')
        {
            cct_gotoxy(x + 20, y + 1 - C_top);
            cout << setw(2) << C_stack[C_top - 1];
        }
    }
}
/***************************************************************************
  函数名称：Operation(char src, char tmp, char dst, int n, int speed, int choice)
  功    能：完成选项1、2、3、4、7、8中在递归过程中的各类打印操作
  输入参数：起始柱、中间柱、目标柱、汉诺塔层数、速度设置和菜单选项
  返 回 值：无
  说    明：无
***************************************************************************/
void Operation(char src, char tmp, char dst, int n, int speed, int choice)
{
    if (choice == 1)
        cout << n << "# " << src << "---->" << dst << endl;
    else if (choice == 2)
        cout << "第" << setw(4) << movecount++ << " 步(" << setw(2) << n << "#: " << src << "-->" << dst << ")" << endl;
    else if (choice == 3)
    {
        int x, y;
        cout << "第" << setw(4) << movecount++ << " 步(" << setw(2) << n << "#: " << src << "-->" << dst << ")";
        Hanoi_Stack(src, dst);
        cct_getxy(x, y);
        Print_Crosswise(x, y);
    }
    else if (choice == 4)
    {
        cct_gotoxy(0, 17);
        cout << "第" << setw(4) << movecount++ << " 步(" << setw(2) << n << "#: " << src << "-->" << dst << ")";
        Hanoi_Stack(src, dst);
        Print_Crosswise(22, 17);
        Print_Vertical(src, dst, 0, 0, 12, 10, 11);
        Time_Sleep(speed);
    }
/***************************************************************************
  函数名称：Hanoi(char src, char tmp, char dst, int n, int speed, int choice)
  功    能：汉诺塔递归主函数
  输入参数：起始柱、中间柱、目标柱、汉诺塔层数、速度设置和菜单选项
  返 回 值：无
  说    明：在选项7中只显示第一次移动步骤，故当choice == 7进行一步操作后直接return
***************************************************************************/
void Hanoi(char src, char tmp, char dst, int n, int speed, int choice)
{
    if (n == 1)
        Operation(src, tmp, dst, n, speed, choice);
    else
    {
        Hanoi(src, dst, tmp, n - 1, speed, choice);
        if (choice == 7)
            return;
        Operation(src, tmp, dst, n, speed, choice);
        Hanoi(tmp, src, dst, n - 1, speed, choice);
    }
}
/***************************************************************************
  函数名称：Choice_1()、Choice_2()、Choice_3()、Choice_4()、Choice_5()、Choice_6()、Choice_7()、Choice_8()、Choice_9()
  功    能：完成每一个菜单选项的功能
  输入参数：无
  返 回 值：无
  说    明：以下九个函数分别对应着菜单的九个操作选项，每一个函数都按照具体要求将上述函数组合而成
***************************************************************************/
void Choice_1()
{
    char src, tmp, dst;
    int n;
    Input(&src, &tmp, &dst, &n, 0);
    Hanoi(src, tmp, dst, n, -1, 1);
}
void Choice_2()
{
    char src, tmp, dst;
    int n;
    Reset();
    Input(&src, &tmp, &dst, &n, 0);
    Hanoi(src, tmp, dst, n, -1, 2);
}
void Choice_3()
{
    char src, tmp, dst;
    int n;
    Reset();
    Input(&src, &tmp, &dst, &n, 0);
    Init(n, src);
    Hanoi(src, tmp, dst, n, -1, 3);
}
void Choice_4()
{
    char src, tmp, dst;
    int n;
    Reset();
    Input(&src, &tmp, &dst, &n, 1);
    Init(n, src);
    cct_setcursor(CURSOR_INVISIBLE);
    cct_cls();
    cout << "从 " << src << " 移动到 " << dst << "，共 " << n << " 层，延时设置为 " << speed << endl;
    cct_gotoxy(0, 17);
    cout << "初始:  ";
    int x, y;
    cct_getxy(x, y);
    Print_Crosswise(x, y);
    Print_Vertical(src, dst, 1, 0, 12, 10, 11);
    Time_Sleep(speed);
    Hanoi(src, tmp, dst, n, speed, 4);
}
