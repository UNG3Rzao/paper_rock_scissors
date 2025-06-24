#include <iostream>
#include "p_r_s.h"
#include "compare.h"

#ifndef print_h
#define print_h

//函数：打印游戏指南
void prn_help();

//函数：根据player_win，computer_win和tie三个变量打印战况
void prn_current();

//函数：根据player_choice和computer_choice两个输入决定是哪一方获胜或者平局
void report(p_r_s player_choice, p_r_s computer_choice);

#endif