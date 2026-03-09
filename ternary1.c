#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 values:\n");
    scanf("%d %d",&a,&b);
    int min=(a<b)? a:b;
    printf("small value is : %d\n",min);
    return 0;
}