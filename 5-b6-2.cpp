/*2352017 信14 张睿琦*/
#include<iostream>
#include<iomanip>
using namespace std;
int i = 0;
int a[3] = { 0 };
int xy[3][10] = { 0 };

void f1(char src, char dst)
{
    int j = 0;
    switch (src)
    {
    case 'A':
        j = xy[0][a[0] - 1];
        xy[0][a[0] - 1] = 0;
        a[0]--;
        break;
    case 'B':
        j = xy[1][a[1] - 1];
        xy[1][a[1] - 1] = 0;
        a[1]--;
        break;
    case 'C':
        j = xy[2][a[2] - 1];
       xy[2][a[2] - 1] = 0;
        a[2]--;
        break;
    default:
        break;
    }
    switch (dst)
    {
    case 'A':
        xy[0][a[0]] = j;
        a[0]++;
        break;
    case 'B':
        xy[1][a[1]] = j;
        a[1]++;
        break;
    case 'C':
        xy[2][a[2]] = j;
        a[2]++;
        break;
    default:
        break;
    }
}
void f2()
{
    int i;
    cout<<"A:";
    for (i = 0; i < 10; i++)
    {

        if (xy[0][i] == 0)
            cout << "  ";
        else
            cout << setw(2) << xy[0][i];
    }
    cout<<" B:";
    for (i = 0; i < 10; i++)
    {

        if (xy[1][i] == 0)
            cout << "  ";
        else
            cout << setw(2) << xy[1][i];
    }
    cout<<" C:";
    for (i = 0; i < 10; i++)
    {

        if (xy[2][i] == 0)
            cout << "  ";
        else
            cout << setw(2) << xy[2][i];
    }
    cout << endl;
}
void hanoi(int n, char src, char tmp, char dst)
{
    if (n == 0)
        return;
    else {
        hanoi(n - 1, src, dst, tmp);
        i++;
        cout << "第" << setw(4) << i << " 步(" << setw(2) << n << ")" << ": " << src << "-->" << dst<< ' ';
        f1(src, dst);
        f2();
        hanoi(n - 1, tmp, src, dst);
    }
}
int main()
{
    int n, k = 0;
    char src, dst;
    while (1) {
        cout << "请输入汉诺塔的层数(1-10)" << endl;
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
                cout << "请输入起始柱(A-C)" << endl;
                cin >> src;
                if (src == 'A' || src == 'a') {
                    cin.clear();
                    cin.ignore(1024, '\n');
                    while (1) {
                        cout << "请输入目标柱(A-C)" << endl;
                        cin >> dst;
                        if (dst == 'A' || dst == 'a') {
                            cout << "目标柱(A)不能与起始柱(A)相同" << endl;
                            cin.clear();
                            cin.ignore(1024, '\n');
                            continue;
                        }
                        else if (dst == 'B' || dst == 'b') {
                            cout << "初始:" << setw(16) << ' ';
                            for (int i = n; i > 0; i--)
                            {
                                xy[0][k] = i;
                                k++;
                            }
                            a[0] = k;
                            f2();
                            hanoi(n, 'A', 'C', 'B');
                            break;
                        }
                        else if (dst == 'C' || dst == 'c') {
                            cout << "初始:" << setw(16) << ' ';
                            for (int i = n; i > 0; i--)
                            {
                                xy[0][k] = i;
                                k++;
                            }
                            a[0] = k;
                            f2();
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
                        cout << "请输入目标柱(A-C)" << endl;
                        cin >> dst;
                        if (dst == 'B' || dst == 'b') {
                            cout << "目标柱(B)不能与起始柱(B)相同" << endl;
                            cin.clear();
                            cin.ignore(1024, '\n');
                            continue;
                        }
                        else if (dst == 'A' || dst == 'a') {
                            cout << "初始:" << setw(16) << ' ';
                            for (int i = n; i > 0; i--)
                            {
                                xy[1][k] = i;
                                k++;
                            }
                            a[1] = k;
                            f2();
                            hanoi(n, 'B', 'C', 'A');
                            break;
                        }
                        else if (dst == 'C' || dst == 'c') {
                            cout << "初始:" << setw(16) << ' ';
                            for (int i = n; i > 0; i--)
                            {
                                xy[1][k] = i;
                                k++;
                            }
                            a[1] = k;
                            f2();
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
                        cout << "请输入目标柱(A-C)" << endl;
                        cin >> dst;
                        if (dst == 'C' || dst == 'c') {
                            cout << "目标柱(C)不能与起始柱(C)相同" << endl;
                            cin.clear();
                            cin.ignore(1024, '\n');
                            continue;
                        }
                        else if (dst == 'B' || dst == 'b') {
                            cout << "初始:" << setw(16) << ' ';
                            for (int i = n; i > 0; i--)
                            {
                                xy[2][k] = i;
                                k++;
                            }
                            a[2] = k;
                            f2();
                            hanoi(n, 'C', 'A', 'B');
                            break;
                        }
                        else if (dst == 'A' || dst == 'a') {
                            cout << "初始:" << setw(16) << ' ';
                            for (int i = n; i > 0; i--)
                            {
                                xy[2][k] = i;
                                k++;
                            }
                            a[2] = k;
                            f2();
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
    return 0;
}




