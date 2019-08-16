#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>
#include <signal.h>
#include <time.h>
void draw(); //用于绘制游戏界面
void play(); //游戏运行的逻辑主体
void init(); //初始化函数，用于完成一些必要的初始化操作
void draw_one(int y, int x); //绘制单个数字
void cnt_value(int *new_y, int *new_x);
int game_over(); //结束游戏
int cnt_one(int y, int x);
