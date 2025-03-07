#include<stdio.h>

int main()
{
    while (1) {
        int num,i;
        printf("enter any number");
        scanf("%d",&num);
        for(i=1; i<=10; i++)
            printf("%dx%d=%d\n",num,i,num*i);
    }


    return 0;
}
