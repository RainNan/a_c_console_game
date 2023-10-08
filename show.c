#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define X 10
#define Y 16

void show(int *p[X])
{
	gotoxy(0, 0);
	for(int i = 0; i < X; i++){//0空气 1玩家 2边界 3练功房 4怪物
		for (int j = 0; j < Y; j++){
			if(p[i][j] == 1)
				printf("@");
			else if (p[i][j] == 2)
				printf("#");
			else if (p[i][j] == 3)
				printf("$");			
			else if (p[i][j] == 4)
				printf("&");
			else
				printf(" ");
		}
		printf("\n");
	}
}

void gotoxy(int x, int y){
	COORD pos = { x,y };
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, pos);
}