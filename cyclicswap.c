#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf(" enter 3 values:");
    scanf("%d %d %d",&a,&b,&c);
     printf("before swap: a=%d\n,b=%d\n,c=%d\n",a,b,c);
     a=b+a+c;
     b=a-(b+c);
     c=a-(b+c);
     a=a-(b+c);
      printf("after swap: a=%d\n,b=%d\n,c=%d\n",a,b,c);
      return 0;
}