#include<stdio.h>
int main()
{
    int a ,b;
    char ch;
    printf("Enter two number: ");
    scanf("%d %d ",&a,&b);
    printf("Enter charector (+,*,-):");
    scanf("%c",&ch);
    switch(ch)
    {
        case'+':
        printf("%d",(a+b));
        break;
        case'*':
        printf("Product=%d",(a*b));
        break;
        case'-':
        if(a>b)
        {
            printf("sub=%d",(a-b));
        }
        else
        {
            printf("sub=%d",(b-a));
        }
        break;
        default:
        printf("Invalid Input");

    }
    return 0;
}