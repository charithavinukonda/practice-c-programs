#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 values:\n");
    scanf("%d %d",&a,&b);
    int max=(a>b)? a:b;
    printf("larger value is : %d\n",max);
    return 0;
}