/* 2352017 ��14 ����� */
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

/* -----------------------------------------------------------------------------------
		����   ��1����������һ�����������������ݹ麯�����������������ӵĺ����в������κ���ʽ��ѭ��
				 2��������ų���
				 3������const�ͱ���

		������ ��1������ȫ�ֱ���
				 2����print_tower֮������������в������徲̬�ֲ�����
   ----------------------------------------------------------------------------------- */
void f1(char start_char, char end_char)
{
	cout << start_char;
	if (start_char == end_char)
	{
		return;
	}
	else
	{
		f1(start_char - 1, end_char);
	}
}
void f2(char start_char, char end_char)
{
	cout << start_char;
	if (end_char == start_char)
	{
		return;
	}
	else {
		f2(start_char + 1, end_char);
	}
}
void f3(char start_char, char end_char)
{
	cout << end_char;
	if (end_char == start_char)
	{
		return;
	}
	else
		f3(start_char , end_char - 1);
}
void f4(char start_char, char end_char)
{
	cout << start_char;
	if (end_char == start_char)
	{
		return;
	}
	else {
		f4(start_char + 1, end_char);
	}
}
   /***************************************************************************
	 �������ƣ�
	 ��    �ܣ���ӡ��ĸ��
	 ���������
	 �� �� ֵ��
	 ˵    �����βΰ�������
			   ��ʾ����һ������order��ָ������/����
   ***************************************************************************/
void print_tower(char start_ch, char end_ch, int order)
{
	if (order == 0)/*������*/ {
		cout << setfill(' ') << setw((end_ch - start_ch) + 1) << start_ch;
		if (start_ch != 'A')
		{
			f1(start_ch - 1, 'A');
			f2('B', start_ch);
			cout << endl;
			if (start_ch == end_ch)
				return;
			else
				print_tower(start_ch + 1, end_ch, order);
		}
		else
		{
			cout << endl;
			if (end_ch != 'A')
				print_tower(start_ch + 1, end_ch, order);
			else
				return;
		}
	}
	else if(order == 1)/*������*/{
		static int a = end_ch;
		cout << setfill(' ') << setw((a - end_ch) + 1) << end_ch;
		if (end_ch == start_ch) {
			cout << endl;
			return;
		}
		else {
			f3(start_ch, end_ch - 1);
			f4('B', end_ch);
			cout << endl;
			print_tower(start_ch, end_ch - 1, order);
		}
	}
	else if (order == 2)/*����������*/ {

		static int a = end_ch + 1;
		if (a == 65)
			return;
		else {
			cout << setfill(' ') << setw((a - end_ch) + 1) << end_ch;
			if (end_ch == start_ch) {
				cout << endl;
				return;
			}
			else {
				f3(start_ch, end_ch - 1);
				f4('B', end_ch);
				cout << endl;
				print_tower(start_ch, end_ch - 1, order);
			}
		}
	}
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main�����е�...�����޸ģ�����λ�ò�׼�޸�
***************************************************************************/
int main()
{
	char end_ch;

	/* ������������ַ�(����д��Ч��Ϊ����ѭ�����֣��������������) */
	cout << "����������ַ�(A~Z)" << endl;
	end_ch = getchar();			//����������һ���ַ�
	if (end_ch < 'A' || end_ch > 'Z') {
		cout << "�����ַ����Ǵ�д��ĸ" << endl;
		return -1;
	}

	/* ��������ĸ��(�м�ΪA) */
	cout << setfill('=') << setw(2 * (end_ch-'A') + 1) << '=' << endl; /* ����ĸ����������=(��������ѭ��) */
	cout << "��������ĸ��(" << end_ch << "->A)" << endl;
	cout << setfill('=') << setw(2 * (end_ch-'A') + 1) << '=' << endl; /* ����ĸ����������=(��������ѭ��) */
	print_tower('A', end_ch, 0); //�����ӡ A~�����ַ� 
	cout << endl;

	/* ��������ĸ��(�м�ΪA) */
	cout << setfill('=') << setw(2 * (end_ch-'A') + 1) << '=' << endl; /* ����ĸ����������=(��������ѭ��) */
	cout << "��������ĸ��(" << end_ch << "->A)" << endl;
	cout << setfill('=') << setw(2 * (end_ch-'A') + 1) << '=' << endl; /* ����ĸ����������=(��������ѭ��) */
	print_tower('A', end_ch, 1); //�����ӡ A~�����ַ� 
	cout << endl;

	/* ����������Ư�������Σ��м�ΪA�� */
	cout << setfill('=') << setw(2 * (end_ch - 'A') + 1) << '=' << endl;/* ����ĸ����������= */
	cout << "����(" << end_ch << "->A)" << endl;
	cout << setfill('=') << setw(2 * (end_ch - 'A') + 1) << '=' << endl;/* ����ĸ����������= */
	print_tower('A', end_ch, 0);   //��ӡ A~�����ַ��������� 
	print_tower('A', end_ch - 1, 2);   //��ӡ A~�����ַ�-1�ĵ����� 
	cout << endl;
	return 0;
}