#include<stdio.h>

int main()
{

    int num1,num2;
    char op;
    printf("enter your operator(+,-,*,/");
    scanf("%c",&op);
    printf("enter tow number");
    scanf("%d %d",&num1,&num2);


    switch (op)
    {
    case '+': {
        printf("%d + %d=%d",num1,num2,num1+num2);
        break;
    }

    case '-': {
        printf("%d - %d=%d",num1,num2,num1-num2);
        break;
    }

    case '*': {
        printf("%d * %d=%d",num1,num2,num1*num2);
        break;
    }
    case '/': {
        printf("%d / %d=%d",num1,num2,num1/num2);
        break;
    }
    }


}