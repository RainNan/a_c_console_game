#include <stdio.h>
#include <stdlib.h>


int start(){
    char judge;
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t+--------------------------------+\n");
    printf("\t\t\t| ------->1   Start Game         |\n");
    printf("\t\t\t| ------->2     Resume           |\n");
    printf("\t\t\t| ------->3      Help            |\n");
    printf("\t\t\t| ------->4      Quit            |\n");
    printf("\t\t\t+--------------------------------+\n\n\n");
    printf("please choose:  ");
    judge = getchar();
    switch (judge)
    {
    case '1':
        return 1;
        break;
    case '2':
        return 2;
        break;
    case '3':
        system("cls");
        printf("help.........");
        system("pause");
        start();
        break;
    case '4':
        return 4;
        break;
    default:
        printf("error! \nplease input a valid value\n");
        system("pause");
        start();
        break;        
    }
}