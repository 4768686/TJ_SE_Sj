/* 2352017 ����� ��14 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* ----����Ҫ��----
   1���������������ͷ�ļ�
   2����������ȫ�ֱ�������̬�ֲ�����
   3�������������������
   4��main�����������룬����ѭ��
   --------------------------------------------------------------------- */

   /***************************************************************************
     �������ƣ�
     ��    �ܣ���ӡn�㺺ŵ�����ƶ�˳��
     ���������int n������
               char src����ʼ��
               char tmp���м���
               char dst��Ŀ����
     �� �� ֵ��
     ˵    ����1�����������βΡ��������;���׼��
               2������������������κ���ʽ��ѭ��
   ***************************************************************************/
int i = 0;
void hanoi(int n, char src, char tmp, char dst)
{
    if (n == 0)
        return;
    else {
        hanoi(n - 1, src, dst, tmp);
        i++;
        printf("%5d:%3d# %c-->%c\n", i, n, src, dst); 
        hanoi(n - 1, tmp, src, dst);
    }
}

/***************************************************************************
  �������ƣ�
  ��    �ܣ�
  ���������
  �� �� ֵ��
  ˵    ����1��������롢���õݹ麯��
            2�������������ʱ������ʹ��ѭ��
            3��Ϊ��ͳһ��飬���������������������������ʼ/Ŀ�����Ĵ��벻Ҫ��ͳһ����������ֱ�ӷ���main�У�
***************************************************************************/
int main()
{
    int n;
    char src, dst;
    while (1) {
        printf("�����뺺ŵ���Ĳ���(1-16)\n");
        scanf("%d",&n);
        if (n < 1 || n>16) {
            while (getchar() != '\n')
                ;
                continue;
        }
        else if (n >= 1 && n <= 16) {
            while (getchar() != '\n')
                ;
            while (1) {
                printf("��������ʼ��(A-C)\n");
                scanf("%c", &src);
                if (src == 'A' || src == 'a') {
                    while (getchar() != '\n')
                        ;
                    while (1) {
                        printf("������Ŀ����(A-C)\n");
                        scanf("%c", &dst);
                        if (dst == 'A' || dst == 'a') {
                            printf("Ŀ����(A)��������ʼ��(A)��ͬ\n");
                            while (getchar() != '\n')
                                ;
                            continue;
                        }
                        else if (dst == 'B' || dst == 'b') {
                            printf("�ƶ�����Ϊ:\n");
                            hanoi(n, 'A', 'C', 'B');
                            break;
                        }
                        else if (dst == 'C' || dst == 'c') {
                            printf("�ƶ�����Ϊ:\n");
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
                        printf("������Ŀ����(A-C)\n");
                        scanf("%c", &dst);
                        if (dst == 'B' || dst == 'b') {
                            printf("Ŀ����(B)��������ʼ��(B)��ͬ\n");
                            while (getchar() != '\n')
                                ;
                            continue;
                        }
                        else if (dst == 'A' || dst == 'a') {
                            printf("�ƶ�����Ϊ:\n");
                            hanoi(n, 'B', 'C', 'A');
                            break;
                        }
                        else if (dst == 'C' || dst == 'c') {
                            printf("�ƶ�����Ϊ:\n");
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
                        printf("������Ŀ����(A-C)\n");
                        scanf("%c", &dst);
                        if (dst == 'C' || dst == 'c') {
                            printf("Ŀ����(C)��������ʼ��(C)��ͬ\n");
                            while (getchar() != '\n')
                                ;
                            continue;
                        }
                        else if (dst == 'B' || dst == 'b') {
                            printf("�ƶ�����Ϊ:\n");
                            hanoi(n, 'C', 'A', 'B');
                            break;
                        }
                        else if (dst == 'A' || dst == 'a') {
                            printf("�ƶ�����Ϊ:\n");
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