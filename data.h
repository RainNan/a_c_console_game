#ifndef DATA_H //防止头文件重复包含
#define DATA_H

#include <time.h>

struct warrior{
    char name[10];
    int gold;
    int level;
    int exp;
    int next_exp;
    float max_hp;
    float hp;
    float max_mp;
    float mp;
    float dmg;
    float def;
};
extern struct warrior warrior;

struct monster{
    float hp;
    float max_hp;
    float dmg;
    float def;
    int reward;
};
extern struct monster monster_a, monster_b, monster_c;

#endif
