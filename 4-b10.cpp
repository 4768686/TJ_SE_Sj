/* 2352017 ��14 ����� */
#include <iostream>
using namespace std;

/* ----����Ҫ��----
   1����������������ͷ�ļ�
   2������������ȫ�ֱ�������̬�ֲ�����
   3��������������������
   4�������������������κ���ʽ��ѭ��
   --------------------------------------------------------------------- */


   /***************************************************************************
     �������ƣ�
     ��    �ܣ���num�ǲ���base����
     ���������
     �� �� ֵ��0 - ����
               1 - ��
     ˵    �������������βΡ��������;���׼��
   ***************************************************************************/
int is_power(int num, int base)
{
    if (num == 0)
        return 0;
    else if (num == 1|| num == base)
        return 1;
    else if (num % base == 0)
        return is_power(num / base, base);
    else
        return 0;
}
/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����������롢���õݹ麯�������
***************************************************************************/
int main()
{
    int num, base;
    cout << "����������num������base" << endl;
    cin >> num >> base;
    if (is_power(num, base))
        cout << num << "��" << base << "����" << endl;
    else
        cout << num << "����" << base << "����" << endl;
    return 0;
}