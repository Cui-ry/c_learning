#include<stdio.h>
int main(){
    int number=0;
    int i=1;
    printf("请输入您需要打招呼的人数：\n");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        char name[100];
        printf("请输入第%d个人的姓名:\n",i);
        scanf("%s",name);
        printf("%s，你好\n",name);
    }
    printf("你已经打完所有招呼！\n");
    return 0;
}