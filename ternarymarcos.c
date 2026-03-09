#include<stdio.h>
#define max(a,b) ((a)>(b) ? (a) :(b) )
int main()
{
    int a,b;
    printf("enter 2 values:\n");
    scanf("%d %d",&a,&b);
    int result = max(a,b);
    printf("larger value is %d \n",result);
    return 0;
}
