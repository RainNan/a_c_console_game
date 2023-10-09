#include "start.h"
#include "show.c"
#include "move.h"
#include "update.h"
#include "lian_gong.c"

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
	int l_x = 4, l_y = 4;
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