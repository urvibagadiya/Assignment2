#include<stdio.h>

int factWithoutRecursion(int);
int factWithRecursion(int);

int main(void) {
  int a;
  int b;
  printf("Enter number:");
  scanf("%d",&a);
  b=factWithoutRecursion(a);
  printf("Factorial without recursion is %d\n",b);
  b=factWithRecursion(a);
  printf("Factorial with recursion is %d\n",b);
  return 0;
}

int factWithRecursion(int x)
{
  if (x==1)
    return 1;
  else
    return x*factWithRecursion(x-1);
}




int factWithoutRecursion(int x)
{
  int prod=1;
  while(x!=1)
    {
      prod=prod*x;
      x--;
    }
  return prod;
}

