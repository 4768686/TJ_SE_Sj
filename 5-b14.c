/*2352017 ��14 �����*/
/*2350942 ������  2352985 ����  2353933 ������  2351861 ̷���  2354400 �����*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#define X 10
#define Y 26

int main()
{
    char a[X][Y];
    int flag = 1;
    int i, j;
    int BOOM = 50;
    for (i = 0; i < X; i++) {
        for (j = 0; j < Y; j++) {
            scanf("%c", &a[i][j]);
            if (a[i][j] == ' ' || a[i][j] == '\n')
                j--;
        }
    }

    int test = 0;
    for (i = 0; i < X; i++) {
        for (j = 0; j < Y; j++) {
            if (a[i][j] == '*') {
                test++;
            }
        }
    }   

    if (test != 50) {
        printf("����1\n");
        return 0;
    }

    for (i = 0; i < X; i++) {
        for (j = 0; j < Y; j++) {
            int sum = 0;
            if (a[i][j] != '*') {
                if (i >= 1) {
                    if (a[i - 1][j] == '*') {
                        sum++;
                    }
                }
                if (i >= 1 && j >= 1) {
                    if (a[i - 1][j - 1] == '*') {
                        sum++;
                    }
                }
                if (i >= 1 && j < Y - 1) {
                    if (a[i - 1][j + 1] == '*') {
                        sum++;
                    }
                }
                if (j >= 1) {
                    if (a[i][j - 1] == '*') {
                        sum++;
                    }
                }
                if (j >= 1 && i < X - 1) {
                    if (a[i + 1][j - 1] == '*') {
                        sum++;
                    }
                }
                if (i < X - 1) {
                    if (a[i + 1][j] == '*') {
                        sum++;
                    }
                }
                if (j < Y - 1) {
                    if (a[i][j + 1] == '*') {
                        sum++;
                    }
                }
                if (i < X - 1 && j < Y - 1) {
                    if (a[i + 1][j + 1] == '*') {
                        sum++;
                    }
                }
                if (a[i][j] != sum + '0') {
                    printf("����2\n");
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 0) {
            break;
        }
    }
    if (flag == 1)
        printf("��ȷ\n");
    return 0;
}