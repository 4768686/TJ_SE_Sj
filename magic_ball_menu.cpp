/* 2352017 ��14 ����� */
#include<iostream>
#include <iomanip>
#include <string.h>
#include <Windows.h>
#include<conio.h>
#include"magic_ball.h"
#include"cmd_console_tools.h"
using namespace std;

char menu()
{
	cout << "------------------------------------------------------------" << endl;
	cout << "1.�ڲ����飬���ɳ�ʼ״̬��Ѱ���Ƿ��г�ʼ��������" << endl;
	cout << "2.�ڲ����飬������ʼ����������0�����䲢��0���" << endl;
	cout << "3.�ڲ����飬������ʼ������������������ʾ" << endl;
	cout << "4.n * n�Ŀ��(�޷ָ���)����ʾ��ʼ״̬" << endl;
	cout << "5.n * n�Ŀ��(�зָ���)����ʾ��ʼ״̬" << endl;
	cout << "6.n * n�Ŀ��(�޷ָ���)����ʾ��ʼ״̬����ʼ��������" << endl;
	cout << "7.n * n�Ŀ��(�зָ���)��������ʼ�����������ʾ������ʾ" << endl;
	cout << "8.cmdͼ�ν���������(�зָ��ߣ�����ƶ�ʱ��ʾ���꣬�Ҽ��˳�)" << endl;
	cout << "9.cmdͼ�ν���������" << endl;
	cout << "0.�˳�" << endl;
	cout << "------------------------------------------------------------" << endl;
	cout << "[��ѡ��:] ";
	char input;
	while (1)
	{
		input = _getche();
		if (input >= '0' && input <= '9'){
			break;
		}
	}
	return input;
}