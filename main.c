#include "start.h"
#include "show.c"
#include "move.h"
#include "update.h"
//#include "lian_gong.h"

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

#define X 10
#define Y 16

int start();
void HideCursor();
void show(int *p[X]);
int move(int *pm[],int* px, int* py);


void main(){
	int map[X][Y] = {0};
	int *p[X];
	int w_x = 6, w_y = 6;
	int l_x = 4, l_y = 4;//练功房坐标
	int a_x = 2, a_y = 8;
	int b_x = 2, b_y = 10;
	int c_x = 2, c_y = 12;
	HideCursor();
	start();

	for(int i = 0; i < X; i++){ 
        map[i][0] = 2;
        map[i][Y-1] = 2;
    }
    for(int i = 0; i < Y; i++)
	{
        map[0][i] = 2;
        map[X-1][i] = 2;
    }
	for(int i = 0; i < X; i++)
		p[i] = map[i];
	map[w_x][w_y] = 1;
	map[l_x][l_y] = 3;
	map[a_x][a_y] = 4;
	map[b_x][b_y] = 5;
	map[c_x][c_y] = 6;

	while(1){
		show(p);
		move(p, &w_x, &w_y);
		
	}

}

void HideCursor() {
    CONSOLE_CURSOR_INFO cursor_info;
    HANDLE console_handle = GetStdHandle(STD_OUTPUT_HANDLE);
    cursor_info.dwSize = 1; 
    cursor_info.bVisible = FALSE;
    SetConsoleCursorInfo(console_handle, &cursor_info);
}