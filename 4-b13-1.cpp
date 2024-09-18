/* 2352017 ����� ��14 */
#include <iostream>
#include <iomanip>
using namespace std;

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2����������ȫ�ֱ�������̬�ֲ�����
   3�������������������
   4��main�����������룬����ѭ��
   --------------------------------------------------------------------- */

   /***************************************************************************
     �������ƣ�
     ��    �ܣ���ӡn�㺺ŵ�����ƶ�˳��
     ���������int n������
               char src����ʼ��
               char tmp���м���
               char dst��Ŀ����
     �� �� ֵ��
     ˵    ����1�����������βΡ��������;���׼��
               2������������������κ���ʽ��ѭ��
   ***************************************************************************/
void hanoi(int n, char src, char tmp, char dst)
{
    static int i = 0;
    if (n == 0)
        return;
    else {
        hanoi(n - 1, src, dst, tmp);
        i++;
        cout<<setw(5)<< i <<":" << setw(3) << n << "# " << src << "-->" << dst << endl;
        hanoi(n - 1, tmp, src, dst);
    }
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����1��������롢���õݹ麯��
            2�������������ʱ������ʹ��ѭ��
            3��Ϊ��ͳһ��飬���������������������������ʼ/Ŀ�����Ĵ��벻Ҫ��ͳһ����������ֱ�ӷ���main�У�
***************************************************************************/
int main()
{
    int n;
    char src, dst;
    while (1) {
        cout << "�����뺺ŵ���Ĳ���(1-16)" << endl;
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
                cout << "��������ʼ��(A-C)" << endl;
                cin >> src;
                if (src == 'A' || src == 'a') {
                    cin.clear();
                    cin.ignore(1024, '\n');
                    while (1) {
                        cout << "������Ŀ����(A-C)" << endl;
                        cin >> dst;
                        if (dst == 'A' || dst == 'a') {
                            cout << "Ŀ����(A)��������ʼ��(A)��ͬ" << endl;
                            cin.clear();
                            cin.ignore(1024, '\n');
                            continue;
                        }
                        else if (dst == 'B' || dst == 'b') {
                            cout << "�ƶ�����Ϊ:" << endl;
                            hanoi(n, 'A', 'C', 'B');
                            break;
                        }
                        else if (dst == 'C' || dst == 'c') {
                            cout << "�ƶ�����Ϊ:" << endl;
                            hanoi(n, 'A', 'B', 'C');
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
                        cout << "������Ŀ����(A-C)" << endl;
                        cin >> dst;
                        if (dst == 'B' || dst == 'b') {
                            cout << "Ŀ����(A)��������ʼ��(A)��ͬ" << endl;
                            cin.clear();
                            cin.ignore(1024, '\n');
                            continue;
                        }
                        else if (dst == 'A' || dst == 'a') {
                            cout << "�ƶ�����Ϊ:" << endl;
                            hanoi(n, 'B', 'C', 'A');
                            break;
                        }
                        else if (dst == 'C' || dst == 'c') {
                            cout << "�ƶ�����Ϊ:" << endl;
                            hanoi(n, 'B', 'A', 'C');
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
                        cout << "������Ŀ����(A-C)" << endl;
                        cin >> dst;
                        if (dst == 'C' || dst == 'c') {
                            cout << "Ŀ����(A)��������ʼ��(A)��ͬ" << endl;
                            cin.clear();
                            cin.ignore(1024, '\n');
                            continue;
                        }
                        else if (dst == 'B' || dst == 'b') {
                            cout << "�ƶ�����Ϊ:" << endl;
                            hanoi(n, 'C', 'A', 'B');
                            break;
                        }
                        else if (dst == 'A' || dst == 'a') {
                            cout << "�ƶ�����Ϊ:" << endl;
                            hanoi(n, 'C', 'B', 'A');
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