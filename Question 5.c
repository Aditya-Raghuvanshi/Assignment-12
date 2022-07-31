//Write a recursive function to print first N even natural numbers
#include<stdio.h>

int main()
{
  int n;
  printf("enter any number ");
  scanf("%d",&n);
  print_e_N(n);
  return 0;
}
void print_e_N(int n)
{
    if(n>0)
    {
        print_e_N(n-1);
        printf("%d ",2*n);
    }
}
