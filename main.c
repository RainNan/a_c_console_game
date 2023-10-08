#include "startup.c"
#include "start.c"
#include "show.c"

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

#define X 25
#define Y 50

int start();
void HideCursor();
void show(int *p[X]);


void main(){
	//start();
	int map[X][Y] = {0};
	int *p[X];
	for(int i = 0; i < X; i++){ 
        map[i][0] = 2;
        map[i][Y-1] = 2;
    }
    for(int i = 0; i < Y;i++)
	{
        map[0][i] = 2;
        map[X-1][i] = 2;
    }
	for(int i = 0; i < X; i++)
		p[i] = map[i];
	show(map);

	system("pause");

    switch(start()){
		case 1:
			while(1){
				show(map);
			}
		case 2:
			;
	}



}

void HideCursor() {
    CONSOLE_CURSOR_INFO cursor_info;
    HANDLE console_handle = GetStdHandle(STD_OUTPUT_HANDLE);

    cursor_info.dwSize = 1; 
    cursor_info.bVisible = FALSE; 

    SetConsoleCursorInfo(console_handle, &cursor_info);
}