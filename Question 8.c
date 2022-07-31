//Write a recursive function to print binary of a given decimal number
#include<stdio.h>

int main()
{
    int n;
    printf("enter any decimal number ");
    scanf("%d",&n);
    bin(n);
    return 0;
}
void bin(int n)
{
    if(n>0)
    {
        bin(n/2);
        printf("%d",n%2);
    }
}

