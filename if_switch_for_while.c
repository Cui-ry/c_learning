#include<stdio.h>
int main(){
    /*int c;
    printf("我们有如下价格的套餐:\n1.套餐A: 10元\n2.套餐B: 20元\n3.套餐C: 30元\n请输入你选择的套餐编号(1-3):\n");
    scanf("%d",&c);
    switch(c){
        case 1:
            printf("你选择了套餐A,价格为10元\n");
            break;
        case 2:
            printf("你选择了套餐B,价格为20元\n");
            break;
        case 3:
            printf("你选择了套餐C,价格为30元\n");
            break;
        default:
            printf("输入错误，请重新选择!\n");
    }*/
   
    int a=0;
    printf("1.电子产品\n2.服装\n请输入您需要的商品类别(1-2):\n");
    scanf("%d",&a);
    printf("您选择了%d,请输入你购买产品的总价:\n",a);
    float b;
    scanf("%f",&b);
    switch(a){
        case 1:
        if(b<500){
            printf("点子产品价格较低，无优惠\n");
            }
        else if(b>=500&&b<=1000){
            printf("电子产品可享受5%%的优惠\n");
            }
        else if(b>1000){
            printf("电子产品可享受10%%的优惠\n");
            }
        else{printf("价格输入错误\n");};
        break;
        case 2:
        if(b<200){printf("服装价格较低，无优惠\n");}
        else if(b>=200&&b<=500){printf("服装可享受8%%的优惠\n");}
        else if(b>500){printf("服装可享受15%%的优惠\n");}
        else{printf("价格输入错误\n");
        }
        break;
        default:printf("输入错误，请重新选择!\n");
    }
    return 0;
}