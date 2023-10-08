//data.h
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
}warrior = {"john", 0, 1, 0, 100, 100, 100, 120, 120, 10, 8};

struct monster{
    float hp;
    float dmg;
    float def;
};