/*2352017 ��14 �����*/
#include <iostream>
#include <string>
#include<cmath>
//�ɰ���������Ҫ��ͷ�ļ�
using namespace std;

const char chnstr[] = "��Ҽ��������½��ƾ�"; /* ���������д "��" ~ "��" �ĵط���ֻ��������������ȡֵ */
string result;  /* ��result�⣬�����������κ���ʽ��ȫ�ֱ��� */

/* --���������Ҫ�ĺ��� --*/
void daxie(int n, int f)
{
    if (n == 0) {
        if (f != 0) {
            result = result + chnstr[2 * n] + chnstr[2 * n + 1];
        }
    }
    else {
        result = result + chnstr[2 * n] + chnstr[2 * n + 1];
    }
}
/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����
***************************************************************************/
int main()
{
    /* --���������Ҫ������ --*/
    const char danwei[] = "ʰ��Ǫ����Բ�Ƿ���";
    /*01 23 45 67 89 1011 1213 1415 1617*/
    /*ʰ �� Ǫ �� ��  Բ   ��   ��   ��*/
    double a, b;
    long d, e, f, g, h, i, j, k, m, n, o, q;
    int w = 0;
    int flag_of_zero;
    while (1) {
        cout << "������[0,100�ڣ�֮�������:\n";
        cin >> a;
        b = a / 10;
        if (b < 0 || b>1000000000){
            cin.clear();
            cin.ignore(1024, '\n');
            continue;
            }
        else
            break;
    }
    cout << "��д�����:\n";
    d = (unsigned long)b / 100000000;
    e = ((unsigned long)b - 100000000 * d) / 10000000;

    f = (((unsigned long)b - 100000000 * d) - 10000000 * e) / 1000000;
    g = ((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) / 100000;
    h = (((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) - 100000 * g) / 10000;
    i = ((((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) - 100000 * g) - 10000 * h) / 1000;

    j = (((((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) - 100000 * g) - 10000 * h) - 1000 * i) / 100;
    k = ((((((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) - 100000 * g) - 10000 * h) - 1000 * i) - 100 * j) / 10;
    m = (((((((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) - 100000 * g) - 10000 * h) - 1000 * i) - 100 * j) - 10 * k);
    n = (long)(floor((b - floor(b)) * 10 + 0.000001));

    o = (long)(round((a - floor(a)) * 100)) / 10 % 10;
    q = (long)(round((a - floor(a)) * 100)) % 10;

    daxie(d, 0);
    if (d != 0) {
        result = result + danwei[0] + danwei[1];
    }
    daxie(e, 0);
    if (d != 0 || e != 0) {
        result = result + danwei[8] + danwei[9];
    }
    if ((d != 0 || e != 0) && (g != 0 || h != 0 || i != 0)) {
        flag_of_zero = 1;
    }
    else {
        flag_of_zero = 0;
    }
    daxie(f, flag_of_zero);
    if (f != 0) {
        result = result + danwei[4] + danwei[5];
    }
    if (flag_of_zero == 0 && (f != 0) && (h != 0 || i != 0)) {
        flag_of_zero = 1;
    }
    else {
        flag_of_zero = 0;
    }
    daxie(g, flag_of_zero);
    if (g != 0) {
        result = result + danwei[2] + danwei[3];
    }
    if (flag_of_zero == 0 && (g != 0 || h != 0) && (i != 0)) {
        flag_of_zero = 1;
    }
    else {
        flag_of_zero = 0;
    }
    daxie(h, flag_of_zero);
    if (h != 0) {
        result = result + danwei[0] + danwei[1];
    }
    daxie(i, 0);
    if (f != 0 || g != 0 || h != 0 || i != 0) {
        result = result + danwei[6] + danwei[7];
    }
    flag_of_zero = 0;
    if ((d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0) && (k != 0 || m != 0 || n != 0)) {
        flag_of_zero = 1;
    }
    else {
        flag_of_zero = 0;
    }
    daxie(j, flag_of_zero);
    if (j != 0) {
        result = result + danwei[4] + danwei[5];
    }
    if (flag_of_zero == 0 && j != 0 && (m != 0 || n != 0)) {
        flag_of_zero = 1;
    }
    else {
        flag_of_zero = 0;
    }
    daxie(k, flag_of_zero);
    if (k != 0) {
        result = result + danwei[2] + danwei[3];
    }
    if (flag_of_zero == 0 && (j != 0 || k != 0) && (n != 0)) {
        flag_of_zero = 1;
    }
    else {
        flag_of_zero = 0;
    }
    daxie(m, flag_of_zero);
    if (m != 0) {
        result = result + danwei[0] + danwei[1];
    }
    if (d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && m == 0 && n == 0 && o == 0 && q == 0) {
        flag_of_zero = 1;
    }
    daxie(n, flag_of_zero);
    if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0 || n != 0) {
        result = result + danwei[10] + danwei[11];
    }
    else if (d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && m == 0 && n == 0 && o == 0 && q == 0) {
        result = result + danwei[10] + danwei[11];
    }
    flag_of_zero = 0;
    if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0 || n != 0 && q != 0) {
        flag_of_zero = 1;
    }
    daxie(o, flag_of_zero);
    if (o != 0) {
        result = result + danwei[12] + danwei[13];
    }
    if ((d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0 || n != 0) && o != 0) {
        flag_of_zero = 1;
    }
    daxie(q, 0);
    if (q != 0) {
        result = result + danwei[14] + danwei[15];
    }
    if (q == 0) {
        result = result + danwei[16] + danwei[17];
    }
    cout << result << endl;  /* ת���õ��Ĵ�д�����ֻ�����ñ��������������ط����������κ���ʽ�Դ�д�������ȫ��/������� */
    return 0;
}