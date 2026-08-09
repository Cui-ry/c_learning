#include<stdio.h>
int main(){
    char ch='A';
    printf("%c\n",ch);
    char* ch_ptr=&ch;
    *ch_ptr='a';
    printf("%c\n",ch);
    return 0;
}

