/* 2352017 ��14 ����� */
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <time.h>
#include <windows.h>
using namespace std;

const int MAX_X = 69;	//����*��ɵı߿�Ŀ��
const int MAX_Y = 17;	//����*��ɵı߿�ĸ߶�

/***************************************************************************
  �������ƣ�
  ��    �ܣ������system("cls")һ���Ĺ��ܣ���Ч�ʸ�
  ���������
  �� �� ֵ��
  ˵    �������������Ļ���������������ǿɼ���������(ʹ�õ�ǰ��ɫ)
***************************************************************************/
void cls(const HANDLE hout)
{
	COORD coord = { 0, 0 };
	CONSOLE_SCREEN_BUFFER_INFO binfo; /* to get buffer info */
	DWORD num;

	/* ȡ��ǰ��������Ϣ */
	GetConsoleScreenBufferInfo(hout, &binfo);
	/* ����ַ� */
	FillConsoleOutputCharacter(hout, (TCHAR)' ', binfo.dwSize.X * binfo.dwSize.Y, coord, &num);
	/* ������� */
	FillConsoleOutputAttribute(hout, binfo.wAttributes, binfo.dwSize.X * binfo.dwSize.Y, coord, &num);

	/* ���ص�(0,0) */
	SetConsoleCursorPosition(hout, coord);
	return;
}

/***************************************************************************
  �������ƣ�gotoxy
  ��    �ܣ�������ƶ���ָ��λ��
  ���������HANDLE hout ������豸���
			int X       ��ָ��λ�õ�x����
			int Y       ��ָ��λ�õ�y����
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void gotoxy(const HANDLE hout, const int X, const int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout, coord);
}

/***************************************************************************
  �������ƣ�showch
  ��    �ܣ���ָ��λ�ô���ӡһ��ָ�����ַ�
  ���������HANDLE hout ������豸���
			int X       ��ָ��λ�õ�x����
			int Y       ��ָ��λ�õ�y����
			char ch     ��Ҫ��ӡ���ַ�
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void showch(const HANDLE hout, const int X, const int Y, const char ch)
{
	gotoxy(hout, X, Y);
	putchar(ch);
}

/***************************************************************************
  �������ƣ�init_border
  ��    �ܣ���ʾ��ʼ�ı߿�����ַ�
  ���������HANDLE hout������豸���
  �� �� ֵ����
  ˵    �����˺�����׼�޸�
***************************************************************************/
void init_border(const HANDLE hout)
{
	gotoxy(hout, 0, 0);	//����ƻ����Ͻ�(0,0)
	cout << "***********************************************************************" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "***********************************************************************" << endl;

	/* �����ʾ20����д��ĸ����ĸ��ֵ��XY���궼�����ʾ
	   rand()�����Ĺ��ܣ��������һ���� 0-32767 ֮�������
	   ˼������ʲô����£��������ѭ��ִ�����ɺ��㿴����ʵ����ĸ��������20���� */
	int i;
	for (i = 0; i < 20; i++)
		showch(hout, rand() % MAX_X + 1, rand() % MAX_Y + 1, 'A' + rand() % 26);

	return;
}

/* -- �������ӵ����ɺ������Է��ڴ˴� --*/

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����main���������ڳ�ʼ��ʾ�����԰���ĿҪ��ȫ���Ʒ���д
***************************************************************************/
int menu()
{

	cout << "1.��I��J��K��L��������������(��Сд���ɣ��߽�ֹͣ)" << endl;
	cout << "2.��I��J��K��L��������������(��Сд���ɣ��߽����)" << endl;
	cout << "3.�ü�ͷ�������������ң��߽�ֹͣ" << endl;
	cout << "4.�ü�ͷ�������������ң��߽����" << endl;
	cout << "5.��I��J��K��L��������������(��Сд���ɣ��߽�ֹͣ)" << endl;
	cout << "6.��I��J��K��L��������������(��Сд���ɣ��߽����)" << endl;
	cout << "0.�˳�" << endl;
	cout << "[��ѡ��0-6] ";
	int a;
	a = _getche();

	return a;
}
void move_by_ijkl(const HANDLE hout, int a)
{
	int x, y, z;
	gotoxy(hout, 35, 9);
	x = 35;
	y = 9;
	if (a == 49) {
		while (1) {
			z = _getch();
			if (z == 'j' || z == 'J') {
				if (x == 1)
					continue;
				x--;
				gotoxy(hout, x, y);
			}
			if (z == 'k' || z == 'K') {
				if (y == 17)
					continue;
				y++;
				gotoxy(hout, x, y);
			}
			if (z == 'i' || z == 'I') {
				if (y == 1)
					continue;
				y--;
				gotoxy(hout, x, y);
			}
			if (z == 'l' || z == 'L') {
				if (x == 69)
					continue;
				x++;
				gotoxy(hout, x, y);
			}
			if (z == ' ') {
				putchar(' ');
				gotoxy(hout, x, y);
			}
			if (z == 'q' || z == 'Q') {
				gotoxy(hout, 0, 23);
				printf("��Ϸ���������س������ز˵�.");
				while (1) {
					int b = _getch();
					if (b == 13) {
						return;
					}
				}
			}
		}
	}
	else if (a == 50) {
		while (1) {
			z = _getch();
			if (z == 224)
				z = _getch();
			if (z == 'j' || z == 'J') {
				if (x == 1) {
					gotoxy(hout, 70, y);
					x = 70;
				}
				x--;
				gotoxy(hout, x, y);
			}
			if (z == 'k' || z == 'K') {
				if (y == 17) {
					gotoxy(hout, x, 0);
					y = 0;
				}
				y++;
				gotoxy(hout, x, y);
			}
			if (z == 'i' || z == 'I') {
				if (y == 1) {
					gotoxy(hout, x, 18);
					y = 18;
				}
				y--;
				gotoxy(hout, x, y);
			}
			if (z == 'l' || z == 'L') {
				if (x == 69) {
					gotoxy(hout, 0, y);
					x = 0;
				}
				x++;
				gotoxy(hout, x, y);
			}
			if (z == ' ') {
				putchar(' ');
				gotoxy(hout, x, y);
			}
			if (z == 'q' || z == 'Q') {
				gotoxy(hout, 0, 23);
				printf("��Ϸ���������س������ز˵�.");
				while (1) {
					int b = _getch();
					if (b == 13) {
						return;
					}
				}
			}
		}
	}
	else if (a == 53) {
		while (1) {
			z = _getch();
			if (z == 224) {
				z = _getch();
				continue;
			}
			if (z == 224)
				z = _getch();
			if (z == 'j' || z == 'J') {
				if (x == 1) {
					gotoxy(hout, 70, y);
					x = 70;
				}
				x--;
				gotoxy(hout, x, y);
			}
			if (z == 'k' || z == 'K') {
				if (y == 17) {
					gotoxy(hout, x, 0);
					y = 0;
				}
				y++;
				gotoxy(hout, x, y);
			}
			if (z == 'i' || z == 'I') {
				if (y == 1) {
					gotoxy(hout, x, 18);
					y = 18;
				}
				y--;
				gotoxy(hout, x, y);
			}
			if (z == 'l' || z == 'L') {
				if (x == 69) {
					gotoxy(hout, 0, y);
					x = 0;
				}
				x++;
				gotoxy(hout, x, y);
			}
			if (z == ' ') {
				putchar(' ');
				gotoxy(hout, x, y);
			}
			if (z == 'q' || z == 'Q') {
				gotoxy(hout, 0, 23);
				printf("��Ϸ���������س������ز˵�.");
				while (1) {
					int b = _getch();
					if (b == 13) {
						return;
					}
				}
			}
		}
	}
	else if (a == 54) {
		while (1) {
			z = _getch();
			if (z == 224) {
				z = _getch();
				continue;
			}
			if (z == 224)
				z = _getch();
			if (z == 'j' || z == 'J') {
				if (x == 1) {
					gotoxy(hout, 70, y);
					x = 70;
				}
				x--;
				gotoxy(hout, x, y);
			}
			if (z == 'k' || z == 'K') {
				if (y == 17) {
					gotoxy(hout, x, 0);
					y = 0;
				}
				y++;
				gotoxy(hout, x, y);
			}
			if (z == 'i' || z == 'I') {
				if (y == 1) {
					gotoxy(hout, x, 18);
					y = 18;
				}
				y--;
				gotoxy(hout, x, y);
			}
			if (z == 'l' || z == 'L') {
				if (x == 69) {
					gotoxy(hout, 0, y);
					x = 0;
				}
				x++;
				gotoxy(hout, x, y);
			}
			if (z == ' ') {
				putchar(' ');
				gotoxy(hout, x, y);
			}
			if (z == 'q' || z == 'Q') {
				gotoxy(hout, 0, 23);
				printf("��Ϸ���������س������ز˵�.");
				while (1) {
					int b = _getch();
					if (b == 13) {
						return;
					}
				}
			}
		}
	}
}

void move_by_arrow(const HANDLE hout, int a)
{
	int x, y, z;
	gotoxy(hout, 35, 9);
	x = 35;
	y = 9;
	if (a == 51) {
		while (1) {
			z = _getch();
			if (z == 224) {
				z = _getch();
				if (z == 75) {
					if (x == 1)
						continue;
					x--;
					gotoxy(hout, x, y);
				}
				if (z == 80) {
					if (y == 17)
						continue;
					y++;
					gotoxy(hout, x, y);
				}
				if (z == 72) {
					if (y == 1)
						continue;
					y--;
					gotoxy(hout, x, y);
				}
				if (z == 77) {
					if (x == 69)
						continue;
					x++;
					gotoxy(hout, x, y);
				}
			}
			if (z == ' ') {
				putchar(' ');
				gotoxy(hout, x, y);
			}
			if (z == 'q' || z == 'Q') {
				gotoxy(hout, 0, 23);
				printf("��Ϸ���������س������ز˵�.");
				while (1) {
					int b = _getch();
					if (b == 13) {
						return;
					}
				}
			}
		}
	}
	else if (a == 52) {
		while (1) {
			z = _getch();
			if (z == 224) {
				z = _getch();
				if (z == 75) {
					if (x == 1) {
						gotoxy(hout, 70, y);
						x = 70;
					}
					x--;
					gotoxy(hout, x, y);
				}
				if (z == 80) {
					if (y == 17) {
						gotoxy(hout, x, 0);
						y = 0;
					}
					y++;
					gotoxy(hout, x, y);
				}
				if (z == 72) {
					if (y == 1) {
						gotoxy(hout, x, 18);
						y = 18;
					}
					y--;
					gotoxy(hout, x, y);
				}
				if (z == 77) {
					if (x == 69) {
						gotoxy(hout, 0, y);
						x = 0;
					}
					x++;
					gotoxy(hout, x, y);
				}
			}
			if (z == ' ') {
				putchar(' ');
				gotoxy(hout, x, y);
			}
			if (z == 'q' || z == 'Q') {
				gotoxy(hout, 0, 23);
				printf("��Ϸ���������س������ز˵�.");
				while (1) {
					int b = _getch();
					if (b == 13) {
						return;
					}
				}
			}
		}
	}
}
int main()
{
	const HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //ȡ��׼����豸��Ӧ�ľ��

	/* ����α����������ӣ�ֻ���ڳ���ʼʱִ��һ�μ��� */
	srand((unsigned int)(time(0)));

	/* �˾�������ǵ���ϵͳ��cls�������� */
	cls(hout);

	/* ��ʾ��ʼ�ı߿����е�����ַ� */
	init_border(hout);

	while (1) {
		cls(hout);
		int b;
		b = menu();
		switch (b) {
		case 48:
			return 0;
			break;
		case 49:
			cls(hout);
			init_border(hout);
			move_by_ijkl(hout,b);
			break;
		case 50:
			cls(hout);
			init_border(hout);
			move_by_ijkl(hout,b);
			break;
		case 51:
			cls(hout);
			init_border(hout);
			move_by_arrow(hout,b);
			break;
		case 52:
			cls(hout);
			init_border(hout);
			move_by_arrow(hout,b);
			break;
		case 53:
			cls(hout);
			init_border(hout);
			move_by_ijkl(hout, b);
			break;
		case 54:
			cls(hout);
			init_border(hout);
			move_by_ijkl(hout, b);
			break;
		default:
			break;
		}
	}
	return 0;
}
/*�п��ܲ�����ʮ����ĸ��ԭ����������ɵ���ĸ���ܻ����ص��ģ�������ĸ��������20��*/