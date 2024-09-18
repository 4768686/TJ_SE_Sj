/*2352017 信14 张睿琦*/
#include <stdio.h>
//格式输出
#include <math.h>      //fabs
#include <windows.h>  //取系统时间

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, total = 0;

    LARGE_INTEGER tick, begin, end;
    QueryPerformanceFrequency(&tick);	//取计数器频率
    QueryPerformanceCounter(&begin);	//取初始硬件定时器计数

    for (a = 1; a <= 9; a++) {
        for (b = 1; b <= 9; b++) {
            for (c = 1; c <= 9; c++) {
                for (d = 1; d <= 9; d++) {
                    for (e = 1; e <= 9; e++) {
                        for (f = 1; f <= 9; f++) {
                            for (g = 1; g <= 9; g++) {
                                for (h = 1; h <= 9; h++) {
                                    for (i = 1; i <= 9; i++) {
                                        j = 100 * a + 10 * b + c;
                                        k = 100 * d + 10 * e + f;
                                        l = 100 * g + 10 * h + i;
                                        if (a != b && a != c && a != d && a != e && a != f && a != g && a != h && a != i) {
                                            if (b != c && b != d && b != e && b != f && b != g && b != h && b != i) {
                                                if (c != d && c != e && c != f && c != g && c != h && c != i) {
                                                    if (d != e && d != f && d != g && d != h && d != i) {
                                                        if (e != f && e != g && e != h && e != i) {
                                                            if (f != g && f != h && f != i) {
                                                                if (g != h && g != i) {
                                                                    if (h != i) {
                                                                        if ((j + k + l == 1953) && j < k && k < l) {
                                                                            total++;
                                                                            printf("No.%3d = %d+%d+%d=1953\n",total,j,k,l );
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("total=%d\n", total);
    QueryPerformanceCounter(&end);//获得终止硬件定时器计数

    printf("计数器频率 : %lldHz\n", tick.QuadPart);
    printf("计数器计数 : %lld\n", end.QuadPart - begin.QuadPart);
    printf("%.6f秒\n", (double)(end.QuadPart - begin.QuadPart) / tick.QuadPart);

    return 0;
}
