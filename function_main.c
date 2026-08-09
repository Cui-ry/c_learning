#include <stdio.h>
int main()
{
    int a,b,result;
    printf("Enter two numbers:separated by ','\n");
    scanf("%d,%d",&a,&b);
    result=a*b;
    printf("Result of %d and %d is %d\n",a,b,result);
    return 0;
}
