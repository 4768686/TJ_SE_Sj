/* 2352017 张睿琦 信14 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[10] = { 0 }, b[10] = { 0 }, c[10] = { 0 };
int i = 0;
int x = 0, y = 0, z = 0;

void f1(char src, char dst)
{
    int j = 0;
    switch (src)
    {
    case 'A':
        j = a[x - 1];
        a[x - 1] = 0;
        x--;
        break;
    case 'B':
        j = b[y - 1];
        b[y - 1] = 0;
        y--;
        break;
    case 'C':
        j = c[z - 1];
        c[z - 1] = 0;
        z--;
        break;
    default:
        break;
    }
    switch (dst)
    {
    case 'A':
        a[x] = j;
        x++;
        break;
    case 'B':
        b[y] = j;
        y++;
        break;
    case 'C':
        c[z] = j;
        z++;
        break;
    default:
        break;
    }
}

void f2()
{
    int i;
    printf("A:");
    for (i = 0; i < 10; i++)
    {

        if (a[i] == 0)
            printf("  ");
        else
            printf("%2d", a[i]);
    }
    printf(" B:");
    for (i = 0; i < 10; i++)
    {

        if (b[i] == 0)
            printf("  ");
        else
            printf("%2d", b[i]);
    }
    printf(" C:");
    for (i = 0; i < 10; i++)
    {

        if (c[i] == 0)
            printf("  ");
        else
            printf("%2d", c[i]);
    }
    printf("\n");
}

void hanoi(int n, char src, char tmp, char dst)
{
    if (n == 0)
        return;
    else {
        hanoi(n - 1, src, dst, tmp);
        i++;
        printf("第%4d 步(%2d): %c-->%c ", i, n, src, dst);
        f1(src, dst);
        f2();
        hanoi(n - 1, tmp, src, dst);
    }
}

int main()
{
    int k = 0;
    int n;
    char src, dst;
    while (1) {
        printf("请输入汉诺塔的层数(1-10)\n");
        scanf("%d", &n);
        if (n < 1 || n>16) {
            while (getchar() != '\n')
                ;
            continue;
        }
        else if (n >= 1 && n <= 16) {
            while (getchar() != '\n')
                ;
            while (1) {
                printf("请输入起始柱(A-C)\n");
                scanf("%c", &src);
                if (src == 'A' || src == 'a') {
                    while (getchar() != '\n')
                        ;
                    while (1) {
                        printf("请输入目标柱(A-C)\n");
                        scanf("%c", &dst);
                        if (dst == 'A' || dst == 'a') {
                            printf("目标柱(A)不能与起始柱(A)相同\n");
                            while (getchar() != '\n')
                                ;
                            continue;
                        }
                        else if (dst == 'B' || dst == 'b') {
                            printf("初始:%16c", ' ');
                            for (int i = n; i > 0; i--)
                            {
                                a[k] = i;
                                k++;
                            }
                            x = k;
                            f2();
                            hanoi(n, 'A', 'C', 'B');
                            break;
                        }
                        else if (dst == 'C' || dst == 'c') {
                            printf("初始:%16c", ' ');
                            for (int i = n; i > 0; i--)
                            {
                                a[k] = i;
                                k++;
                            }
                            x = k;
                            f2();
                            hanoi(n, 'A', 'B', 'C');
                            break;
                        }
                        else {
                            while (getchar() != '\n')
                                ;
                            continue;
                        }
                        break;
                    }
                }
                else if (src == 'B' || src == 'b') {
                    while (getchar() != '\n')
                        ;
                    while (1) {
                        printf("请输入目标柱(A-C)\n");
                        scanf("%c", &dst);
                        if (dst == 'B' || dst == 'b') {
                            printf("目标柱(B)不能与起始柱(B)相同\n");
                            while (getchar() != '\n')
                                ;
                            continue;
                        }
                        else if (dst == 'A' || dst == 'a') {
                            printf("初始:%16c", ' ');
                            for (int i = n; i > 0; i--)
                            {
                                b[k] = i;
                                k++;
                            }
                            y = k;
                            f2();
                            hanoi(n, 'B', 'C', 'A');
                            break;
                        }
                        else if (dst == 'C' || dst == 'c') {
                            printf("初始:%16c", ' ');
                            for (int i = n; i > 0; i--)
                            {
                                b[k] = i;
                                k++;
                            }
                            y = k;
                            f2();
                            hanoi(n, 'B', 'A', 'C');
                            break;
                        }
                        else {
                            while (getchar() != '\n')
                                ;
                            continue;
                        }
                    }
                }
                else if (src == 'C' || src == 'c') {
                    while (getchar() != '\n')
                        ;
                    while (1) {
                        printf("请输入目标柱(A-C)\n");
                        scanf("%c", &dst);
                        if (dst == 'C' || dst == 'c') {
                            printf("目标柱(C)不能与起始柱(C)相同\n");
                            while (getchar() != '\n')
                                ;
                            continue;
                        }
                        else if (dst == 'B' || dst == 'b') {
                            printf("初始:%16c", ' ');
                            for (int i = n; i > 0; i--)
                            {
                                c[k] = i;
                                k++;
                            }
                            z = k;
                            f2();
                            hanoi(n, 'C', 'A', 'B');
                            break;
                        }
                        else if (dst == 'A' || dst == 'a') {
                            printf("初始:%16c", ' ');
                            for (int i = n; i > 0; i--)
                            {
                                c[k] = i;
                                k++;
                            }
                            z = k;
                            f2();
                            hanoi(n, 'C', 'B', 'A');
                            break;
                        }
                        else {
                            while (getchar() != '\n')
                                ;
                            continue;
                        }
                    }
                }
                else {
                    while (getchar() != '\n')
                        ;
                    continue;
                }
                break;
            }
            break;
        }
    }
}





