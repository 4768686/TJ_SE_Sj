/*2352017 ÐÅ14 ÕÅî£çù*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double a, b, p;
    long d, e, f, g, h, i, j, k, m, n, o, q;
    printf("ÇëÊäÈë[0µ½100ÒÚ)Ö®¼äµÄÊý×Ö:\n");
    scanf("%lf", &a);
    printf("´óÐ´½á¹ûÊÇ:\n");
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
    n = (long)(floor((b - floor(b))*10+0.000001));
    o= (long)(round((a - floor(a)) * 100 ))/10%10;
    q = (long)(round((a - floor(a)) * 100))%10;
    if (d != 0)
    {
        switch (d)
        {
        case 9:
            printf("¾Á");
            break;
        case 8:
            printf("°Æ");
            break;
        case 7:
            printf("Æâ");
            break;
        case 6:
            printf("Â½");
            break;
        case 5:
            printf("Îé");
            break;
        case 4:
            printf("ËÁ");
            break;
        case 3:
            printf("Èþ");
            break;
        case 2:
            printf("·¡");
            break;
        case 1:
            printf("Ò¼");
            break;
        default:
            break;
        }
        printf("Ê°");
        if (e == 0)
            printf("ÒÚ");
    }
     if (e != 0)
        {
        switch (e)
            {
            case 9:
                printf("¾Á");
                break;
            case 8:
                printf("°Æ");
                break;
            case 7:
                printf("Æâ");
                break;
            case 6:
                printf("Â½");
                break;
            case 5:
                printf("Îé");
                break;
            case 4:
                printf("ËÁ");
                break;
            case 3:
                printf("Èþ");
                break;
            case 2:
                printf("·¡");
                break;
            case 1:
                printf("Ò¼");
                break;
            default:
                break;
            }
            printf("ÒÚ");
        }

    if (f != 0)
    {
        switch (f)
        {
        case 9:
            printf("¾Á");
            break;
        case 8:
            printf("°Æ");
            break;
        case 7:
            printf("Æâ");
            break;
        case 6:
            printf("Â½");
            break;
        case 5:
            printf("Îé");
            break;
        case 4:
            printf("ËÁ");
            break;
        case 3:
            printf("Èþ");
            break;
        case 2:
            printf("·¡");
            break;
        case 1:
            printf("Ò¼");
            break;
        default:
            break;
        }
        printf("Çª");
        if (g == 0 && h == 0 && i == 0)
            printf("Íò");
    }
    else if (g != 0 || h != 0 || i != 0)
        {
            if (d != 0 || e != 0)
                printf("Áã");
        }
    if (g != 0)
    {
        switch (g)
        {
        case 9:
            printf("¾Á");
            break;
        case 8:
            printf("°Æ");
            break;
        case 7:
            printf("Æâ");
            break;
        case 6:
            printf("Â½");
            break;
        case 5:
            printf("Îé");
            break;
        case 4:
            printf("ËÁ");
            break;
        case 3:
            printf("Èþ");
            break;
        case 2:
            printf("·¡");
            break;
        case 1:
            printf("Ò¼");
            break;
        default:
            break;
        }
        printf("°Û");
        if (h == 0 && i == 0)
            printf("Íò");
    }
    else if (f != 0 )
        {
            if (h != 0 || i != 0)
                printf("Áã");
        }
    if (h != 0)
    {
        switch (h)
        {
        case 9:
            printf("¾Á");
            break;
        case 8:
            printf("°Æ");
            break;
        case 7:
            printf("Æâ");
            break;
        case 6:
            printf("Â½");
            break;
        case 5:
            printf("Îé");
            break;
        case 4:
            printf("ËÁ");
            break;
        case 3:
            printf("Èþ");
            break;
        case 2:
            printf("·¡");
            break;
        case 1:
            printf("Ò¼");
            break;
        default:
            break;
        }
        printf("Ê°");
        if (i == 0)
            printf("Íò");
    }
    else if (g != 0 && i != 0)
         printf("Áã");
    if (i != 0)
    {
        switch (i)
        {
        case 9:
            printf("¾Á");
            break;
        case 8:
            printf("°Æ");
            break;
        case 7:
            printf("Æâ");
            break;
        case 6:
            printf("Â½");
            break;
        case 5:
            printf("Îé");
            break;
        case 4:
            printf("ËÁ");
            break;
        case 3:
            printf("Èþ");
            break;
        case 2:
            printf("·¡");
            break;
        case 1:
            printf("Ò¼");
            break;
        default:
            break;
        }
        printf("Íò");
    }
 
    if (j != 0)
    {
        switch (j)
        {
        case 9:
            printf("¾Á");
            break;
        case 8:
            printf("°Æ");
            break;
        case 7:
            printf("Æâ");
            break;
        case 6:
            printf("Â½");
            break;
        case 5:
            printf("Îé");
            break;
        case 4:
            printf("ËÁ");
            break;
        case 3:
            printf("Èþ");
            break;
        case 2:
            printf("·¡");
            break;
        case 1:
            printf("Ò¼");
            break;
        default:
            break;
        }
        printf("Çª");
    }
    else if (k != 0 || m != 0 || n != 0)
        if (d != 0 || e != 0 || f != 0 || g != 0 || h != 0 ||i != 0)
            printf("Áã");
    if (k != 0)
    {
        switch (k)
        {
        case 9:
            printf("¾Á");
            break;
        case 8:
            printf("°Æ");
            break;
        case 7:
            printf("Æâ");
            break;
        case 6:
            printf("Â½");
            break;
        case 5:
            printf("Îé");
            break;
        case 4:
            printf("ËÁ");
            break;
        case 3:
            printf("Èþ");
            break;
        case 2:
            printf("·¡");
            break;
        case 1:
            printf("Ò¼");
            break;
        default:
            break;
        }
        printf("°Û");
    }
    else if ( j != 0)
        {
            if ( m != 0 || n != 0)
                printf("Áã");
        }
    if (m != 0)
    {
        switch (m)
        {
        case 9:
            printf("¾Á");
            break;
        case 8:
            printf("°Æ");
            break;
        case 7:
            printf("Æâ");
            break;
        case 6:
            printf("Â½");
            break;
        case 5:
            printf("Îé");
            break;
        case 4:
            printf("ËÁ");
            break;
        case 3:
            printf("Èþ");
            break;
        case 2:
            printf("·¡");
            break;
        case 1:
            printf("Ò¼");
            break;
        default:
            break;
        }
        printf("Ê°");
    }
    else if ( k != 0 && n != 0)
        printf("Áã");
    if (n != 0)
    {
        switch (n)
        {
        case 9:
            printf("¾Á");
            break;
        case 8:
            printf("°Æ");
            break;
        case 7:
            printf("Æâ");
            break;
        case 6:
            printf("Â½");
            break;
        case 5:
            printf("Îé");
            break;
        case 4:
            printf("ËÁ");
            break;
        case 3:
            printf("Èþ");
            break;
        case 2:
            printf("·¡");
            break;
        case 1:
            printf("Ò¼");
            break;
        default:
            break;
        }
        printf("Ô²");
    }
    else if (d != 0|| e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0 || n != 0 )
    {
        printf("Ô²");
    }
    if (o != 0)
    {
        if (q == 0)
        {
                switch (o)
                {
                case 9:
                    printf("¾Á");
                    break;
                case 8:
                    printf("°Æ");
                    break;
                case 7:
                    printf("Æâ");
                    break;
                case 6:
                    printf("Â½");
                    break;
                case 5:
                    printf("Îé");
                    break;
                case 4:
                    printf("ËÁ");
                    break;
                case 3:
                    printf("Èþ");
                    break;
                case 2:
                    printf("·¡");
                    break;
                case 1:
                    printf("Ò¼");
                    break;
                default:
                    break;
                }
                printf("½ÇÕû");
        }
        else
        {
            switch (o)
            {
            case 9:
                printf("¾Á");
                break;
            case 8:
                printf("°Æ");
                break;
            case 7:
                printf("Æâ");
                break;
            case 6:
                printf("Â½");
                break;
            case 5:
                printf("Îé");
                break;
            case 4:
                printf("ËÁ");
                break;
            case 3:
                printf("Èþ");
                break;
            case 2:
                printf("·¡");
                break;
            case 1:
                printf("Ò¼");
                break;
            default:
                break;
            }
            printf("½Ç");

            switch (q)
            {
            case 9:
                printf("¾Á");
                break;
            case 8:
                printf("°Æ");
                break;
            case 7:
                printf("Æâ");
                break;
            case 6:
                printf("Â½");
                break;
            case 5:
                printf("Îé");
                break;
            case 4:
                printf("ËÁ");
                break;
            case 3:
                printf("Èþ");
                break;
            case 2:
                printf("·¡");
                break;
            case 1:
                printf("Ò¼");
                break;
            default:
                break;
            }
            printf("·Ö");
        }
    }
    else 
    {
        if ((d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0 || n != 0) && q != 0)
        {
            printf("Áã");
            switch (q)
            {
            case 9:
                printf("¾Á");
                break;
            case 8:
                printf("°Æ");
                break;
            case 7:
                printf("Æâ");
                break;
            case 6:
                printf("Â½");
                break;
            case 5:
                printf("Îé");
                break;
            case 4:
                printf("ËÁ");
                break;
            case 3:
                printf("Èþ");
                break;
            case 2:
                printf("·¡");
                break;
            case 1:
                printf("Ò¼");
                break;
            default:
                break;
            }
            printf("·Ö");
        }
        else if ((d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && m == 0 && n == 0) && q != 0)
        {
            switch (q)
            {
            case 9:
                printf("¾Á");
                break;
            case 8:
                printf("°Æ");
                break;
            case 7:
                printf("Æâ");
                break;
            case 6:
                printf("Â½");
                break;
            case 5:
                printf("Îé");
                break;
            case 4:
                printf("ËÁ");
                break;
            case 3:
                printf("Èþ");
                break;
            case 2:
                printf("·¡");
                break;
            case 1:
                printf("Ò¼");
                break;
            default:
                break;
            }
            printf("·Ö");
        }

    }
    if ((d != 0 || e != 0 || f != 0 || g != 0 || h != 0 || i != 0 || j != 0 || k != 0 || m != 0 || n != 0) && (o == 0 && q == 0))
        printf("Õû");
    else if (d == 0 && e == 0 && f == 0 && g == 0 && h == 0 && i == 0 && j == 0 && k == 0 && m == 0 && n == 0 && o == 0 && q == 0)
        printf("ÁãÔªÕû");
    printf("\n");
    return 0;
}