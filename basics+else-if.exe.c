#include<stdio.h>

int main()
{
    int a,b,c;
    printf("enter your number \n");
    scanf("%d",&a);
    printf("enter your second number \n");
    scanf("%d",&b);
    c=a+b;
    if(c>=33 && c<80){printf("pass");
    }else if(c>=80 && c<100){printf("plus");
    }else if (c>=100){printf("good");}else{printf("fail");}
       return 0;
}
