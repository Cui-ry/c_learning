#include<stdio.h>
int main(){
    int i=1;
    for(i=1;i<=50;i++){
        if(i%2==0&&i>40){
            break;
        } 
        if(i%2==0){
            if (i%3!=0){
            printf("%d  ",i);
            }
            else{continue;}
        }
        else{
            continue;   
        }
    }
    return 0;
}