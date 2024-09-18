/* 2352017 张睿琦 信14 */
#include <iostream>
#include <iomanip>
using namespace std;

/* ----具体要求----
   1、不允许添加其它头文件
   2、不允许定义全局变量、静态局部变量
   3、不允许添加其它函数
   4、main函数处理输入，允许循环
   --------------------------------------------------------------------- */

   /***************************************************************************
     函数名称：
     功    能：打印n层汉诺塔的移动顺序
     输入参数：int n：层数
               char src：起始柱
               char tmp：中间柱
               char dst：目标柱
     返 回 值：
     说    明：1、函数名、形参、返回类型均不准动
               2、本函数不允许出现任何形式的循环
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
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：1、完成输入、调用递归函数
            2、处理输入错误时，允许使用循环
            3、为了统一检查，不再允许添加其它函数（输入起始/目标柱的代码不要求统一函数处理，均直接放在main中）
***************************************************************************/
int main()
{
    int n;
    char src, dst;
    while (1) {
        cout << "请输入汉诺塔的层数(1-16)" << endl;
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
                            cout << "移动步骤为:" << endl;
                            hanoi(n, 'A', 'C', 'B');
                            break;
                        }
                        else if (dst == 'C' || dst == 'c') {
                            cout << "移动步骤为:" << endl;
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
                            cout << "目标柱(A)不能与起始柱(A)相同" << endl;
                            cin.clear();
                            cin.ignore(1024, '\n');
                            continue;
                        }
                        else if (dst == 'A' || dst == 'a') {
                            cout << "移动步骤为:" << endl;
                            hanoi(n, 'B', 'C', 'A');
                            break;
                        }
                        else if (dst == 'C' || dst == 'c') {
                            cout << "移动步骤为:" << endl;
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
                            cout << "目标柱(A)不能与起始柱(A)相同" << endl;
                            cin.clear();
                            cin.ignore(1024, '\n');
                            continue;
                        }
                        else if (dst == 'B' || dst == 'b') {
                            cout << "移动步骤为:" << endl;
                            hanoi(n, 'C', 'A', 'B');
                            break;
                        }
                        else if (dst == 'A' || dst == 'a') {
                            cout << "移动步骤为:" << endl;
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