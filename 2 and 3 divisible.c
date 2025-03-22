#include <stdio.h>
int main()
{
    int a;
    printf("enter the no");
    scanf("%d", &a);
    if (a%2==0&&a%3==0)
    {
        printf("the no is divisible by two and three");
    }
    else if (a%2==0)
    {
        printf("the no is divisible by 2");
    }
    else if (a%3==0)
    {
        printf("the no is divisible by 3");
    }
    else 
    printf("the no is not divisible by either 2 or 3");
    
}