/*2253744 �־��� ��*/
#include "hanoi.h"
using namespace std;
static int speed;
static int movecount;
static int A_stack[10], B_stack[10], C_stack[10];
static int A_top, B_top, C_top;
/* ----------------------------------------------------------------------------------

     ���ļ����ܣ�
    1����ű� hanoi_main.cpp �и��ݲ˵�����ֵ���õĸ��˵����Ӧ��ִ�к���

     ���ļ�Ҫ��
    1�����������ⲿȫ�ֱ�����const��#define�������Ʒ�Χ�ڣ�
    2�������徲̬ȫ�ֱ�����������Ҫ��������Ҫ�����ĵ���ʾ��ȫ�ֱ�����ʹ��׼���ǣ����á����á��ܲ��þ������ã�
    3����̬�ֲ����������������ƣ���ʹ��׼��Ҳ�ǣ����á����á��ܲ��þ�������
    4���������ϵͳͷ�ļ����Զ���ͷ�ļ��������ռ��

   ----------------------------------------------------------------------------------- */
   /***************************************************************************
     �������ƣ�Reset()
     ��    �ܣ���ʼ����̬ȫ�ֱ���
     �����������
     �� �� ֵ����
     ˵    ������ÿһ������ǰ�����ƶ�����Movement��ʼ��Ϊ1������ջ��������ջ�����ݳ�ʼ��Ϊ0
   ***************************************************************************/
void Reset()
{
    movecount = 1;
    A_top = B_top = C_top = 0;
    for (int i = 0; i < 10; i++)
        A_stack[i] = B_stack[i] = C_stack[i] = 0;
}
/***************************************************************************
     �������ƣ�Time_Sleep(int speed)
     ��    �ܣ�������ʱ����
     �����������ʱ����ѡ��speed
     �� �� ֵ����
     ˵    ������speedΪ0ʱ���س�������ʾ��1��ʱ���5��ʱ���
   ***************************************************************************/
void Time_Sleep(int speed)
{
    if (speed)
        Sleep(Time / speed);
    else
        while (getchar() != '\n');
}
/***************************************************************************
     �������ƣ�Input(char* src, char* tmp, char* dst, int* n, int speed_flag)
     ��    �ܣ�ȷ����ŵ������������������ȷ���Ƿ�ʹ����ʱ������������
     �����������ŵ����������ʼ����Ŀ��������ʱ��־
     �� �� ֵ����
     ˵    ������speed_flagΪ-1ʱ��ʾ��ʹ����ʱ����
   ***************************************************************************/
void Input(char* src, char* tmp, char* dst, int* n, int speed_flag)
{
    while (1)
    {
        cout << "�����뺺ŵ���Ĳ���(1-10)��" << endl;
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
        cout << "��������ʼ��(A-C)" << endl;
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
        cout << "������Ŀ����(A-C)" << endl;
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
            cout << "Ŀ����(" << *dst << ")��������ʼ��(" << *src << ")��ͬ" << endl;
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
            cout << "�������ƶ��ٶ�(0-5: 0-���س�������ʾ 1-��ʱ� 5-��ʱ���) ";
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
     �������ƣ�Init(int n, char src)
     ��    �ܣ���ʼ����ʼ��
     �����������ŵ����������ʼ��
     �� �� ֵ����
     ˵    ��������ʼ���Ķ�Ӧջ��Ԫ�س�ʼΪ��Ӧ��
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
     �������ƣ�Hanoi_Stack(char src, char dst)
     ��    �ܣ�ʵ��Ԫ���ں�ŵ����ջ����ƶ�
     ����������˲��ƶ�����ʼ����Ŀ����
     �� �� ֵ����
     ˵    ����ͨ��ջ�ĳ�ջ��ջ����ʵ�ֺ�ŵ������ջ��Ԫ�صĻ����ƶ�
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
     �������ƣ�Print_Bottom(int x,int y)
     ��    �ܣ���ӡѡ��4�еĵ���
     �����������������������x,y
     �� �� ֵ����
     ˵    �����������ϴ���ҵ�Ĵ�ӡ���̣�����ʼλ�øı伴��
   ***************************************************************************/
void Print_Bottom(int x, int y)
{
    cct_gotoxy(x, y);
    cout << "         =========================" << endl;
    cout << "           A         B         C";
}
/***************************************************************************
     �������ƣ�Print_Crosswise(int x, int y)
     ��    �ܣ������ӡ��ŵ�������Ԫ��
     �����������ŵ�������ӡ�����λ������
     �� �� ֵ����
     ˵    �����������ϴ���ҵ�ĺ����ӡ���飬����ʼλ�øı伴��
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
  �������ƣ�Print_Vertical(char src, char dst, int init, int bottom_x, int bottom_y, int x, int y)
  ��    �ܣ������ӡ��ŵ�������Ԫ��
  �����������ʼ����Ŀ�������Ƿ��ʼ��״̬�����̵�x��y����ʹ�ӡ���������x��y����
  �� �� ֵ����
  ˵    ����initΪ1�Ǳ�ʾ��ʼ��״̬����ʱ��ӡ��ʼ�����������ݼ���
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
  �������ƣ�Operation(char src, char tmp, char dst, int n, int speed, int choice)
  ��    �ܣ����ѡ��1��2��3��4��7��8���ڵݹ�����еĸ����ӡ����
  �����������ʼ�����м�����Ŀ��������ŵ���������ٶ����úͲ˵�ѡ��
  �� �� ֵ����
  ˵    ������
***************************************************************************/
void Operation(char src, char tmp, char dst, int n, int speed, int choice)
{
    if (choice == 1)
        cout << n << "# " << src << "---->" << dst << endl;
    else if (choice == 2)
        cout << "��" << setw(4) << movecount++ << " ��(" << setw(2) << n << "#: " << src << "-->" << dst << ")" << endl;
    else if (choice == 3)
    {
        int x, y;
        cout << "��" << setw(4) << movecount++ << " ��(" << setw(2) << n << "#: " << src << "-->" << dst << ")";
        Hanoi_Stack(src, dst);
        cct_getxy(x, y);
        Print_Crosswise(x, y);
    }
    else if (choice == 4)
    {
        cct_gotoxy(0, 17);
        cout << "��" << setw(4) << movecount++ << " ��(" << setw(2) << n << "#: " << src << "-->" << dst << ")";
        Hanoi_Stack(src, dst);
        Print_Crosswise(22, 17);
        Print_Vertical(src, dst, 0, 0, 12, 10, 11);
        Time_Sleep(speed);
    }
/***************************************************************************
  �������ƣ�Hanoi(char src, char tmp, char dst, int n, int speed, int choice)
  ��    �ܣ���ŵ���ݹ�������
  �����������ʼ�����м�����Ŀ��������ŵ���������ٶ����úͲ˵�ѡ��
  �� �� ֵ����
  ˵    ������ѡ��7��ֻ��ʾ��һ���ƶ����裬�ʵ�choice == 7����һ��������ֱ��return
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
  �������ƣ�Choice_1()��Choice_2()��Choice_3()��Choice_4()��Choice_5()��Choice_6()��Choice_7()��Choice_8()��Choice_9()
  ��    �ܣ����ÿһ���˵�ѡ��Ĺ���
  �����������
  �� �� ֵ����
  ˵    �������¾Ÿ������ֱ��Ӧ�Ų˵��ľŸ�����ѡ�ÿһ�����������վ���Ҫ������������϶���
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
    cout << "�� " << src << " �ƶ��� " << dst << "���� " << n << " �㣬��ʱ����Ϊ " << speed << endl;
    cct_gotoxy(0, 17);
    cout << "��ʼ:  ";
    int x, y;
    cct_getxy(x, y);
    Print_Crosswise(x, y);
    Print_Vertical(src, dst, 1, 0, 12, 10, 11);
    Time_Sleep(speed);
    Hanoi(src, tmp, dst, n, speed, 4);
}
