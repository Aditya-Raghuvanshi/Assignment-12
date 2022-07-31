//Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>

int main()
{
  int n;
  printf("enter any number ");
  scanf("%d",&n);
  print_o_N(n);
  return 0;
}
void print_o_N(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        print_o_N(n-1);
    }
}
