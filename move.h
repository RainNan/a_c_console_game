#include "data.h"
//#include "lian_gong.h"
#include <conio.h> 

void lian_gong(int *p[], int x, int y);
void upgrade();

static clock_t start_time,end_time;
static int in_liangong = 0;//0表示不在练功房 1表示处于练功房中 2表示其他
struct warrior warrior = {"john", 0, 1, 1, 100, 100, 100, 120, 120, 10, 8};

int move(int *p[],int* px, int* py){
    if (_kbhit()) {
        char input = _getch();
        p[*px][*py] = 0;
        switch (input) {
            case 'w':
                if (p[(*px) - 1][*py] == 3){
                    in_liangong = 1;
                    start_time = clock();//设置起始时间
                    (*px)--;               
                    break;
                }
                if (in_liangong == 1){
                    in_liangong = 0;
                    end_time = clock();//设置结束时间
                    double time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
                    warrior.exp += (int)time * 20;
                    while (warrior.exp >= warrior.next_exp){
                        warrior.exp -= warrior.next_exp;
                        upgrade();
                    }
                    p[*px][*py] = 3;
                    (*px)--;
                    break;
                }
                if (p[(*px) - 1][*py] != 2){//边界处理
                    (*px)--;
                    break;
                }
            case 's':
                if (p[(*px) + 1][*py] == 3){
                    in_liangong = 1;
                    start_time = clock();//设置起始时间
                    (*px)++;               
                    break;
                }
                if (in_liangong == 1){
                    in_liangong = 0;
                    end_time = clock();//设置结束时间
                    double time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
                    warrior.exp += (int)time * 20;
                    while (warrior.exp >= warrior.next_exp){
                        warrior.exp -= warrior.next_exp;
                        upgrade();
                    }
                    p[*px][*py] = 3;
                    (*px)++;
                    break;
                }
                if (p[(*px) + 1][*py] != 2)
                    (*px)++;
                break;
            case 'a':
                if (p[*px][(*py) - 1] == 3){
                    in_liangong = 1;
                    start_time = clock();//设置起始时间
                    (*py)--;               
                    break;
                }
                if (in_liangong == 1){
                    in_liangong = 0;
                    end_time = clock();//设置结束时间
                    double time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
                    warrior.exp += (int)time * 20;
                    while (warrior.exp >= warrior.next_exp){
                        warrior.exp -= warrior.next_exp;
                        upgrade();
                    }
                    p[*px][*py] = 3;
                    (*py)--;
                    break;
                }
                if (p[*px][(*py) - 1] != 2)
                    (*py)--; 
                break;
            case 'd':
                if (p[*px][(*py) + 1] == 3){
                    in_liangong = 1;
                    start_time = clock();//设置起始时间
                    (*py)++;               
                    break;
                }
                if (in_liangong == 1){
                    in_liangong = 0;
                    end_time = clock();//设置结束时间
                    double time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
                    warrior.exp += (int)time * 20;
                    while (warrior.exp >= warrior.next_exp){
                        warrior.exp -= warrior.next_exp;
                        upgrade();
                    }
                    p[*px][*py] = 3;
                    (*py)++;
                    break;
                }
                if (p[*px][(*py) + 1] != 2)
                    (*py)++; 
                break;           
        }
        p[*px][*py] = 1; 
     }
}

void upgrade(){
    warrior.level += 1;
    warrior.def += 1;
    warrior.dmg += 1;
    warrior.max_hp += 10;
    warrior.max_mp += 10;
    warrior.hp = warrior.max_hp;
    warrior.mp = warrior.max_mp;
    warrior.next_exp += 20;
}