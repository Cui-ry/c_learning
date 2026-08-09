#include <stdio.h>
#include <string.h>
int main(){
    printf("\"谁是世界上最美丽的人?\"\n");
    char name[100];
    scanf("%s",name);
    if(strcmp(name,"谢莹")==0){
        printf("你是世界上最美丽的人!\n");
    }
    else{
        printf("你不是世界上最美丽的人!\n");
        printf("世界上最美丽的人是谢莹!\n");
    }
    return 0;
}