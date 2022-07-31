//Write a recursive function to print reverse of a given number
#include<stdio.h>

int main()
{
    int n;
    printf("enter any number ");
    scanf("%d",&n);
    rev(n);
    return 0;
}
void rev(int n)
{
    if(n!=0)
    {
        printf("%d",n%10);
        rev(n/10);
    }
}
