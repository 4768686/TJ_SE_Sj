/*2352017 ĞÅ14 ÕÅî£çù*/
#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double a, b, p;
    long d, e, f, g, h, i, j, k, m, n, o, q;
    cout<<"ÇëÊäÈë[0µ½100ÒÚ)Ö®¼äµÄÊı×Ö:"<<endl;
    cin >> a;
    cout << "´óĞ´½á¹ûÊÇ:" << endl;
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
            cout<<"¾Á";
            break;
        case 8:
            cout << "°Æ";
            break;
        case 7:
            cout << "Æâ";
            break;
        case 6:
            cout << "Â½";
            break;
        case 5:
            cout << "Îé";
            break;
        case 4:
            cout << "ËÁ";
            break;
        case 3:
            cout << "Èş";
            break;
        case 2:
            cout << "·¡";
            break;
        case 1:
            cout << "Ò¼";
            break;
        default:
            break;
        }
        cout << "Ê°";
        if (e == 0)
            cout << "ÒÚ";
    }
    if (e != 0)
    {
        switch (e)
        {
        case 9:
            cout << "¾Á";
            break;
        case 8:
            cout << "°Æ";
            break;
        case 7:
            cout << "Æâ";
            break;
        case 6:
            cout << "Â½";
            break;
        case 5:
            cout << "Îé";
            break;
        case 4:
            cout << "ËÁ";
            break;
        case 3:
            cout << "Èş";
            break;
        case 2:
            cout << "·¡";
            break;
        case 1:
            cout << "Ò¼";
            break;
        default:
            break;
        }
        cout<<"ÒÚ";
    }

    if (f != 0)
    {
        switch (f)
        {
        case 9:
            cout << "¾Á";
            break;
        case 8:
            cout << "°Æ";
            break;
        case 7:
            cout << "Æâ";
            break;
        case 6:
            cout << "Â½";
            break;
        case 5:
            cout << "Îé";
            break;
        case 4:
            cout << "ËÁ";
            break;
        case 3:
            cout << "Èş";
            break;
        case 2:
            cout << "·¡";
            break;
        case 1:
            cout << "Ò¼";
            break;
        default:
            break;
        }
        cout<<"Çª";
        if (g == 0 && h == 0 && i == 0)
            cout<<"Íò";
    }
    else if (g != 0 || h != 0 || i != 0)
    {
        if (d != 0 || e != 0)
            cout<<"Áã";
    }
    if (g != 0)
    {
        switch (g)
        {
        case 9:
            cout << "¾Á";
            break;
        case 8:
            cout << "°Æ";
            break;
        case 7:
            cout << "Æâ";
            break;
        case 6:
            cout << "Â½";
            break;
        case 5:
            cout << "Îé";
            break;
        case 4:
            cout << "ËÁ";
            break;
        case 3:
            cout << "Èş";
            break;
        case 2:
            cout << "·¡";
            break;
        case 1:
            cout << "Ò¼";
            break;
        default:
            break;
        }
        cout<<"°Û";
        if (h == 0 && i == 0)
            cout<<"Íò";
    }
    else if (f != 0)
    {
        if (h != 0 || i != 0)
            cout<<"Áã";
    }
    if (h != 0)
    {
        switch (h)
        {
        case 9:
            cout << "¾Á";
            break;
        case 8:
            cout << "°Æ";
            break;
        case 7:
            cout << "Æâ";
            break;
        case 6:
            cout << "Â½";
            break;
        case 5:
            cout << "Îé";
            break;
        case 4:
            cout << "ËÁ";
            break;
        case 3:
            cout << "Èş";
            break;
        case 2:
            cout << "·¡";
            break;
        case 1:
            cout << "Ò¼";
            break;
        default:
            break;
        }
        cout<<"Ê°";
        if (i == 0)
            cout<<"Íò";
    }
    else if (g != 0 && i != 0)
        cout<<"Áã";
    if (i != 0)
    {
        switch (i)
        {
        case 9:
            cout << "¾Á";
            break;
        case 8:
            cout << "°Æ";
            break;
        case 7:
            cout << "Æâ";
            break;
        case 6:
            cout << "Â½";
            break;
        case 5:
            cout << "Îé";
            break;
        case 4:
            cout << "ËÁ";
            break;
        case 3:
            cout << "Èş";
            break;
        case 2:
            cout << "·¡";
            break;
        case 1:
            cout << "Ò¼";
            break;
        default:
            break;
        }
        cout<<"Íò";
    }

    if (j != 0)
    {
        switch (j)
        {
        case 9:
            cout << "¾Á";
            break;
        case 8:
            cout << "°Æ";
            break;
        case 7:
            cout << "Æâ";
            break;
        case 6:
            cout << "Â½";
            break;
        case 5:
            cout << "Îé";
            break;
        case 4:
            cout << "ËÁ";
            break;
        case 3:
            cout << "Èş";
            break;
        case 2:
            cout << "·¡";
            break;
        case 1:
            cout << "Ò¼";
            break;
        default:
            break;
        }
        cout<<"Çª";
    }
    else if (k != 0 || m != 0 || n != 0)
        if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0)
            cout<<"Áã";
    if (k != 0)
    {
        switch (k)
        {
        case 9:
            cout << "¾Á";
            break;
        case 8:
            cout << "°Æ";
            break;
        case 7:
            cout << "Æâ";
            break;
        case 6:
            cout << "Â½";
            break;
        case 5:
            cout << "Îé";
            break;
        case 4:
            cout << "ËÁ";
            break;
        case 3:
            cout << "Èş";
            break;
        case 2:
            cout << "·¡";
            break;
        case 1:
            cout << "Ò¼";
            break;
        default:
            break;
        }
        cout<<"°Û";
    }
    else if (j != 0)
    {
        if (m != 0 || n != 0)
            cout<<"Áã";
    }
    if (m != 0)
    {
        switch (m)
        {
        case 9:
            cout << "¾Á";
            break;
        case 8:
            cout << "°Æ";
            break;
        case 7:
            cout << "Æâ";
            break;
        case 6:
            cout << "Â½";
            break;
        case 5:
            cout << "Îé";
            break;
        case 4:
            cout << "ËÁ";
            break;
        case 3:
            cout << "Èş";
            break;
        case 2:
            cout << "·¡";
            break;
        case 1:
            cout << "Ò¼";
            break;
        default:
            break;
        }
        cout<<"Ê°";
    }
    else if (k != 0 && n != 0)
        cout<<"Áã";
    if (n != 0)
    {
        switch (n)
        {
        case 9:
            cout << "¾Á";
            break;
        case 8:
            cout << "°Æ";
            break;
        case 7:
            cout << "Æâ";
            break;
        case 6:
            cout << "Â½";
            break;
        case 5:
            cout << "Îé";
            break;
        case 4:
            cout << "ËÁ";
            break;
        case 3:
            cout << "Èş";
            break;
        case 2:
            cout << "·¡";
            break;
        case 1:
            cout << "Ò¼";
            break;
        default:
            break;
        }
        cout<<"Ô²";
    }
    else if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0 || n != 0)
    {
        cout<<"Ô²";
    }
    if (o != 0)
    {
        if (q == 0)
        {
            switch (o)
            {
            case 9:
                cout << "¾Á";
                break;
            case 8:
                cout << "°Æ";
                break;
            case 7:
                cout << "Æâ";
                break;
            case 6:
                cout << "Â½";
                break;
            case 5:
                cout << "Îé";
                break;
            case 4:
                cout << "ËÁ";
                break;
            case 3:
                cout << "Èş";
                break;
            case 2:
                cout << "·¡";
                break;
            case 1:
                cout << "Ò¼";
                break;
            default:
                break;
            }
            cout<<"½ÇÕû";
        }
        else
        {
            switch (o)
            {
            case 9:
                cout << "¾Á";
                break;
            case 8:
                cout << "°Æ";
                break;
            case 7:
                cout << "Æâ";
                break;
            case 6:
                cout << "Â½";
                break;
            case 5:
                cout << "Îé";
                break;
            case 4:
                cout << "ËÁ";
                break;
            case 3:
                cout << "Èş";
                break;
            case 2:
                cout << "·¡";
                break;
            case 1:
                cout << "Ò¼";
                break;
            default:
                break;
            }
            cout<<"½Ç";

            switch (q)
            {
            case 9:
                cout << "¾Á";
                break;
            case 8:
                cout << "°Æ";
                break;
            case 7:
                cout << "Æâ";
                break;
            case 6:
                cout << "Â½";
                break;
            case 5:
                cout << "Îé";
                break;
            case 4:
                cout << "ËÁ";
                break;
            case 3:
                cout << "Èş";
                break;
            case 2:
                cout << "·¡";
                break;
            case 1:
                cout << "Ò¼";
                break;
            default:
                break;
            }
            cout<<"·Ö";
        }
    }
    else
    {
        if ((d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0 || n != 0) && q != 0)
        {
            cout<<"Áã";
            switch (q)
            {
            case 9:
                cout << "¾Á";
                break;
            case 8:
                cout << "°Æ";
                break;
            case 7:
                cout << "Æâ";
                break;
            case 6:
                cout << "Â½";
                break;
            case 5:
                cout << "Îé";
                break;
            case 4:
                cout << "ËÁ";
                break;
            case 3:
                cout << "Èş";
                break;
            case 2:
                cout << "·¡";
                break;
            case 1:
                cout << "Ò¼";
                break;
            default:
                break;
            }
            cout<<"·Ö";
        }
        else if ((d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && m == 0 && n == 0) && q != 0)
        {
            switch (q)
            {
            case 9:
                cout << "¾Á";
                break;
            case 8:
                cout << "°Æ";
                break;
            case 7:
                cout << "Æâ";
                break;
            case 6:
                cout << "Â½";
                break;
            case 5:
                cout << "Îé";
                break;
            case 4:
                cout << "ËÁ";
                break;
            case 3:
                cout << "Èş";
                break;
            case 2:
                cout << "·¡";
                break;
            case 1:
                cout << "Ò¼";
                break;
            default:
                break;
            }
            cout<<"·Ö";
        }

    }
    if ((d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0 || n != 0) && (o == 0 && q == 0))
        cout<<"Õû";
    else if (d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && m == 0 && n == 0 && o == 0 && q == 0)
        cout<<"ÁãÔªÕû";
    cout<<endl;
    return 0;
}