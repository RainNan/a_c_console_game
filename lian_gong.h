#ifndef LIAN_GONG_H //防止头文件重复包含
#define LIAN_GONG_H

#include "data.h"



void upgrade();

void lian_gong(int *p[], int x, int y){
    if (in_liangong == 0){//进入练功房
        in_liangong = 1;
        start_time = clock();//设置起始时间
    }
    if (in_liangong == 1){//离开练功房,进行结算
        in_liangong = 0;
        end_time = clock();//设置结束时间
        double time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
        warrior.exp += (int)time * 10;
        while (warrior.exp >= warrior.next_exp){
            warrior.exp -= warrior.next_exp;
            upgrade();
        }
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

#endif