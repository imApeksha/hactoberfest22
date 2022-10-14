#include<stdio.h>

#include<stdlib.h>

int main()

{

   int a, b;

   printf("Enter two number: ");

   scanf("%d %d",&a, &b);

   int result = divide(a,b);

   printf("Result = %d",result);

   return 0;

}

// function to find division of two number

int divide(int x, int y)

{

  int count = 0;

  int sign = ((x<0)^(y<0))?-1:1;

  x = abs(x);

  y = abs(y);

  while (x>=y)

  {

     x = x-y;

     count++;

  }

  return sign*count;

}
