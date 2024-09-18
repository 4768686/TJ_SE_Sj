/*2352017 ÐÅ14 ÕÅî£çù*/
#include <iostream>
#include<cstdlib>
#include<cstdlib>
#include<ctime>
#define X 10
#define Y 26
using namespace std;

int main()
{
    char a[X][Y] = {};
    int x, y;
    int i, j;
    int BOOM = 50;
    for (i = 0; i < X; i++) {
        for (j = 0; j < Y; j++) {
            a[i][j] = '0';
        }
    }

    srand((unsigned)time(NULL));
    while (BOOM > 0) {
        x = rand() % X;
        y = rand() % Y;
        if (a[x][y] == '0') {
            a[x][y] = '*';
            BOOM--;
        }
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
                a[i][j] = sum + '0';
            }
        }
    }

    for (i = 0; i < X; i++) {
        for (j = 0; j < Y; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
