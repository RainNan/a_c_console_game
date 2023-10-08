#include <conio.h> 

int update_warrior(int *pm[],int* px, int* py){
    if (_kbhit()) {
        char input = _getch();
        pm[*px][*py] = 0;
        switch (input) {
            case 'w':
                (*px)--; 
                break;
            case 's':
                (*px)++;
                break;
            case 'a':
                (*py)--; 
                break;
            case 'd':
                (*py)++; 
                break;           
        }
        pm[*px][*py] = 1; 
    }
}