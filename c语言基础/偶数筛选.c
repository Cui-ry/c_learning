#include<stdio.h>
int main(){
    int a=1;int b=1;
    int sum_a=0;int sum_b=0;
    while(a<=100){
        if(a%2==0){
            printf("%d  ",a);
            sum_a=sum_a+a;
        }
        else{
            printf("%d是奇数",a);
        }
        a=a+1;
    }
    printf("while循环中偶数和为%d\n",sum_a);
    do{if(b%2==0){
            printf("%d  ",b);
            sum_b=sum_b+b;
        }
        else{
            printf("%d是奇数",b);
        }
        b=b+1;}while(b<=100);
        printf("do-while循环中偶数和为%d\n",sum_b);
    return 0;
}