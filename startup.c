#include <stdio.h>
struct warrior{
    char name[10];
    int gold;
    int level;
    float exp;
    float next_exp;
    int max_hp;
    int hp;
    int max_mp;
    int mp;
    float dmg;
    float def;
    int x, y;
}warrior;

struct monster
{
    float hp;
    float dmg;
    float def;
};
/*
int start_map(){
    int X=25;
    int Y=50;
    int map[X][Y] = {0};
    for(int i = 0; i < X; i++){ 
        map[i][0] = 2;
        map[i][Y-1] = 2;
    }
    for(int i = 0; i < Y;i++){
        map[0][i] = 2;
        map[X-1][i] = 2;
    }
    return map;
}
*/
