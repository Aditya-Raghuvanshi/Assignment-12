//Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>

int main()
{
  int n;
  printf("enter any number ");
  scanf("%d",&n);
  print_N(n);
  return 0;
}
void print_N(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        print_N(n-1);
    }
}
