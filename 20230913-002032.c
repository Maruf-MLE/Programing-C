#include<stdio.h>

int main()
{
    int a,c,b;
    printf("please enter Your number--:");
    scanf("%d",&a);
    printf("\n\nplease enter Your second  number--:");
    scanf("%d",&b);
    c=a+b;
    printf("\n\nyour total number is--:");
    printf("%d",c);
    if(c>100){printf("\n\nyou has win a gpa 5");}else{printf("\n\nyou has a already pass");}
    return 0;
}