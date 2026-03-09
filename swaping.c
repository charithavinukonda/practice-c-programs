#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int a,b;
  printf("\nenter values of 2 numbers");
  scanf("%d %d",&a,&b);
  printf("before swap: a=%d\n,b=%d\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("after swap a=%d\n,b=%d\n",a,b);
  return 0;
}