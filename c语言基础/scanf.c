#include<stdio.h>
int main(){
    int a;
    char b;
    printf("请输入两个整数:\n");
    scanf("%d",&a);
    scanf(" %c",&b);
    printf("你输入的整数是%d和%c\n",a,b);
    return 0;
}