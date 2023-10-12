#include "data.h"

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define X 10
#define Y 16


void show(int *p[X])
{
	gotoxy(0, 0);
	for(int i = 0; i < X; i++){//0空气 1玩家 2边界 3练功房 4怪物a 5怪物b 6怪物c
		for (int j = 0; j < Y; j++){
			if(p[i][j] == 1)
				printf("@");
			else if (p[i][j] == 2)
				printf("#");
			else if (p[i][j] == 3)
				printf("$");			
			else if (p[i][j] == 4)
				printf("A");
			else if (p[i][j] == 5)
				printf("B");
			else if (p[i][j] == 6)
				printf("C");	
			else
				printf(" ");
		}
		printf("\n");
	}
	gotoxy(18, 0);
	printf("+------------------------+\n");
	gotoxy(18, 1);
	printf("|name: %s              |\n",warrior.name);	
	gotoxy(18, 2);
	printf("|level: %d                |\n",warrior.level);
	gotoxy(18, 3);
	printf("|exp: %d/%d              |\n",warrior.exp, warrior.next_exp);
	gotoxy(18, 4);
	printf("|gold: %d                 |\n",warrior.gold);
	gotoxy(18, 5);
	printf("|damage: %.1f            |\n", warrior.dmg);
	gotoxy(18, 6);
	printf("|defence: %.1f            |\n", warrior.def);
	gotoxy(18, 7);
	printf("|HP: %.1f/%.1f         |\n",warrior.hp,warrior.max_hp);
	gotoxy(18, 8);
	printf("|MP: %.1f/%.1f         |\n",warrior.mp,warrior.max_mp);
	gotoxy(18, 9);
	printf("+------------------------+\n");
}

void gotoxy(int x, int y){
	COORD pos = { x,y };
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, pos);
}