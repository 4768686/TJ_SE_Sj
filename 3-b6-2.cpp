/*2352017 ��14 �����*/
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double a, b, p;
    long d, e, f, g, h, i, j, k, m, n, o, q;
    cout<<"������[0��100��)֮�������:"<<endl;
    cin >> a;
    cout << "��д�����:" << endl;
    b = a / 10;
    d = (unsigned long)b / 100000000;
    e = ((unsigned long)b - 100000000 * d) / 10000000;
    f = (((unsigned long)b - 100000000 * d) - 10000000 * e) / 1000000;
    g = ((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) / 100000;
    h = (((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) - 100000 * g) / 10000;
    i = ((((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) - 100000 * g) - 10000 * h) / 1000;
    j = (((((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) - 100000 * g) - 10000 * h) - 1000 * i) / 100;
    k = ((((((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) - 100000 * g) - 10000 * h) - 1000 * i) - 100 * j) / 10;
    m = (((((((((unsigned long)b - 100000000 * d) - 10000000 * e) - 1000000 * f) - 100000 * g) - 10000 * h) - 1000 * i) - 100 * j) - 10 * k);
    p = b - 100000000 * d - 10000000 * e - 1000000 * f - 100000 * g - 10000 * h - 1000 * i - 100 * j - 10 * k - m;
    n = (long)(floor((b - floor(b)) * 10 + 0.000001));
    o = (long)(round((a - floor(a)) * 100)) / 10 % 10;
    q = (long)(round((a - floor(a)) * 100)) % 10;
    if (d != 0)
    {
        switch (d)
        {
        case 9:
            cout<<"��";
            break;
        case 8:
            cout << "��";
            break;
        case 7:
            cout << "��";
            break;
        case 6:
            cout << "½";
            break;
        case 5:
            cout << "��";
            break;
        case 4:
            cout << "��";
            break;
        case 3:
            cout << "��";
            break;
        case 2:
            cout << "��";
            break;
        case 1:
            cout << "Ҽ";
            break;
        default:
            break;
        }
        cout << "ʰ";
        if (e == 0)
            cout << "��";
    }
    if (e != 0)
    {
        switch (e)
        {
        case 9:
            cout << "��";
            break;
        case 8:
            cout << "��";
            break;
        case 7:
            cout << "��";
            break;
        case 6:
            cout << "½";
            break;
        case 5:
            cout << "��";
            break;
        case 4:
            cout << "��";
            break;
        case 3:
            cout << "��";
            break;
        case 2:
            cout << "��";
            break;
        case 1:
            cout << "Ҽ";
            break;
        default:
            break;
        }
        cout<<"��";
    }

    if (f != 0)
    {
        switch (f)
        {
        case 9:
            cout << "��";
            break;
        case 8:
            cout << "��";
            break;
        case 7:
            cout << "��";
            break;
        case 6:
            cout << "½";
            break;
        case 5:
            cout << "��";
            break;
        case 4:
            cout << "��";
            break;
        case 3:
            cout << "��";
            break;
        case 2:
            cout << "��";
            break;
        case 1:
            cout << "Ҽ";
            break;
        default:
            break;
        }
        cout<<"Ǫ";
        if (g == 0 && h == 0 && i == 0)
            cout<<"��";
    }
    else if (g != 0 || h != 0 || i != 0)
    {
        if (d != 0 || e != 0)
            cout<<"��";
    }
    if (g != 0)
    {
        switch (g)
        {
        case 9:
            cout << "��";
            break;
        case 8:
            cout << "��";
            break;
        case 7:
            cout << "��";
            break;
        case 6:
            cout << "½";
            break;
        case 5:
            cout << "��";
            break;
        case 4:
            cout << "��";
            break;
        case 3:
            cout << "��";
            break;
        case 2:
            cout << "��";
            break;
        case 1:
            cout << "Ҽ";
            break;
        default:
            break;
        }
        cout<<"��";
        if (h == 0 && i == 0)
            cout<<"��";
    }
    else if (f != 0)
    {
        if (h != 0 || i != 0)
            cout<<"��";
    }
    if (h != 0)
    {
        switch (h)
        {
        case 9:
            cout << "��";
            break;
        case 8:
            cout << "��";
            break;
        case 7:
            cout << "��";
            break;
        case 6:
            cout << "½";
            break;
        case 5:
            cout << "��";
            break;
        case 4:
            cout << "��";
            break;
        case 3:
            cout << "��";
            break;
        case 2:
            cout << "��";
            break;
        case 1:
            cout << "Ҽ";
            break;
        default:
            break;
        }
        cout<<"ʰ";
        if (i == 0)
            cout<<"��";
    }
    else if (g != 0 && i != 0)
        cout<<"��";
    if (i != 0)
    {
        switch (i)
        {
        case 9:
            cout << "��";
            break;
        case 8:
            cout << "��";
            break;
        case 7:
            cout << "��";
            break;
        case 6:
            cout << "½";
            break;
        case 5:
            cout << "��";
            break;
        case 4:
            cout << "��";
            break;
        case 3:
            cout << "��";
            break;
        case 2:
            cout << "��";
            break;
        case 1:
            cout << "Ҽ";
            break;
        default:
            break;
        }
        cout<<"��";
    }

    if (j != 0)
    {
        switch (j)
        {
        case 9:
            cout << "��";
            break;
        case 8:
            cout << "��";
            break;
        case 7:
            cout << "��";
            break;
        case 6:
            cout << "½";
            break;
        case 5:
            cout << "��";
            break;
        case 4:
            cout << "��";
            break;
        case 3:
            cout << "��";
            break;
        case 2:
            cout << "��";
            break;
        case 1:
            cout << "Ҽ";
            break;
        default:
            break;
        }
        cout<<"Ǫ";
    }
    else if (k != 0 || m != 0 || n != 0)
        if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0)
            cout<<"��";
    if (k != 0)
    {
        switch (k)
        {
        case 9:
            cout << "��";
            break;
        case 8:
            cout << "��";
            break;
        case 7:
            cout << "��";
            break;
        case 6:
            cout << "½";
            break;
        case 5:
            cout << "��";
            break;
        case 4:
            cout << "��";
            break;
        case 3:
            cout << "��";
            break;
        case 2:
            cout << "��";
            break;
        case 1:
            cout << "Ҽ";
            break;
        default:
            break;
        }
        cout<<"��";
    }
    else if (j != 0)
    {
        if (m != 0 || n != 0)
            cout<<"��";
    }
    if (m != 0)
    {
        switch (m)
        {
        case 9:
            cout << "��";
            break;
        case 8:
            cout << "��";
            break;
        case 7:
            cout << "��";
            break;
        case 6:
            cout << "½";
            break;
        case 5:
            cout << "��";
            break;
        case 4:
            cout << "��";
            break;
        case 3:
            cout << "��";
            break;
        case 2:
            cout << "��";
            break;
        case 1:
            cout << "Ҽ";
            break;
        default:
            break;
        }
        cout<<"ʰ";
    }
    else if (k != 0 && n != 0)
        cout<<"��";
    if (n != 0)
    {
        switch (n)
        {
        case 9:
            cout << "��";
            break;
        case 8:
            cout << "��";
            break;
        case 7:
            cout << "��";
            break;
        case 6:
            cout << "½";
            break;
        case 5:
            cout << "��";
            break;
        case 4:
            cout << "��";
            break;
        case 3:
            cout << "��";
            break;
        case 2:
            cout << "��";
            break;
        case 1:
            cout << "Ҽ";
            break;
        default:
            break;
        }
        cout<<"Բ";
    }
    else if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0 || n != 0)
    {
        cout<<"Բ";
    }
    if (o != 0)
    {
        if (q == 0)
        {
            switch (o)
            {
            case 9:
                cout << "��";
                break;
            case 8:
                cout << "��";
                break;
            case 7:
                cout << "��";
                break;
            case 6:
                cout << "½";
                break;
            case 5:
                cout << "��";
                break;
            case 4:
                cout << "��";
                break;
            case 3:
                cout << "��";
                break;
            case 2:
                cout << "��";
                break;
            case 1:
                cout << "Ҽ";
                break;
            default:
                break;
            }
            cout<<"����";
        }
        else
        {
            switch (o)
            {
            case 9:
                cout << "��";
                break;
            case 8:
                cout << "��";
                break;
            case 7:
                cout << "��";
                break;
            case 6:
                cout << "½";
                break;
            case 5:
                cout << "��";
                break;
            case 4:
                cout << "��";
                break;
            case 3:
                cout << "��";
                break;
            case 2:
                cout << "��";
                break;
            case 1:
                cout << "Ҽ";
                break;
            default:
                break;
            }
            cout<<"��";

            switch (q)
            {
            case 9:
                cout << "��";
                break;
            case 8:
                cout << "��";
                break;
            case 7:
                cout << "��";
                break;
            case 6:
                cout << "½";
                break;
            case 5:
                cout << "��";
                break;
            case 4:
                cout << "��";
                break;
            case 3:
                cout << "��";
                break;
            case 2:
                cout << "��";
                break;
            case 1:
                cout << "Ҽ";
                break;
            default:
                break;
            }
            cout<<"��";
        }
    }
    else
    {
        if ((d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0 || n != 0) && q != 0)
        {
            cout<<"��";
            switch (q)
            {
            case 9:
                cout << "��";
                break;
            case 8:
                cout << "��";
                break;
            case 7:
                cout << "��";
                break;
            case 6:
                cout << "½";
                break;
            case 5:
                cout << "��";
                break;
            case 4:
                cout << "��";
                break;
            case 3:
                cout << "��";
                break;
            case 2:
                cout << "��";
                break;
            case 1:
                cout << "Ҽ";
                break;
            default:
                break;
            }
            cout<<"��";
        }
        else if ((d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && m == 0 && n == 0) && q != 0)
        {
            switch (q)
            {
            case 9:
                cout << "��";
                break;
            case 8:
                cout << "��";
                break;
            case 7:
                cout << "��";
                break;
            case 6:
                cout << "½";
                break;
            case 5:
                cout << "��";
                break;
            case 4:
                cout << "��";
                break;
            case 3:
                cout << "��";
                break;
            case 2:
                cout << "��";
                break;
            case 1:
                cout << "Ҽ";
                break;
            default:
                break;
            }
            cout<<"��";
        }

    }
    if ((d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0 || n != 0) && (o == 0 && q == 0))
        cout<<"��";
    else if (d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && m == 0 && n == 0 && o == 0 && q == 0)
        cout<<"��Ԫ��";
    cout<<endl;
    return 0;
}