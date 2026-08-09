#include<stdio.h>
int main(){
    int arr[5]={};
    int i;
    for(i=0;i<5;i++){
        printf("请输入第%d个整数:\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        printf("数组中第%d个整数是:%d\n",i+1,arr[i]);
    }
    return 0;
}