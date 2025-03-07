#include<stdio.h>

int main()
{
    char ch='c';
    switch (ch){
    case 1:
    printf("value is 1\n");
    break;
    case 2 :
    printf("value is 2\n");
    break;
    case'c':printf("value is 3\n");
    break;
    default:
    printf("unknown");}
    return 0;
}