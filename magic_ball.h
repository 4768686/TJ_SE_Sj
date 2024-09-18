#pragma once
#include<iostream>
#include <iomanip>
#include <cstring>
#include <Windows.h>
#include<conio.h>
#include"cmd_console_tools.h"
#define rows 10
#define cols 10

char menu();
void input_hang(char *hang);
void input_lie(char *lie);
void enter();
void wait_for_enter1();
void wait_for_enter2();
void wait_for_enter3();
void print_up(char lie);
int** broad(char hang, char lie);
void change(int hang, int lie, int** map);
void print(char hang, char lie, int** map);
void judge1(char hang, char lie, int** map, int a);
void judge2(char hang, char lie, int** map, int a);
void judge3(char hang, char lie, int** map, int a);
void graph1(char hang, char lie, int **map);
void graph2(char hang, char lie, int** map);
void graph3(char hang, char lie, int** map);
void graph4(char hang, char lie, int** map, int num);
void graph4_0(char hang, char lie, int** map, int num);
void graph4_1(char hang, char lie, int** map, int num);
void graph4_2(char hang, char lie, int** map, int num);
void graph4_3(char hang, char lie, int** map, int num);
void graph4_4(char hang, char lie, int** map, int num);
void graph5(char hang, char lie, int** map);
void graph6(char hang, char lie, int** map);
void exit();
void choice_1();
void choice_2();
void choice_3();
void choice_4();
void choice_5();
void choice_6();
void choice_7();
void choice_8();
void choice_9();