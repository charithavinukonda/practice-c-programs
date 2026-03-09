# include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int a,b,min,max;
  printf("enter 2 numbers");
  scanf("%d %d",&a,&b);
  max=(a+b +abs(a+b))/2 ;
  min=(a+b -abs(a+b) )/2;
  printf("maximum %d\n",max);
  printf("minimum %d\n",min);
  return 0;
}
                                                                  