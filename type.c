#include <stdio.h>
int main(){
    int score_M=89;
    int score_J=98;
    int c=0;
    c=score_M;
    score_M=score_J;
    score_J=c;
    printf("Mike的实际得分是：%d\nJohn的实际得分是：%d\n\r\n\r\n",score_M,score_J);

    int int_1=88;
    char char_1='$';
    float float_1=3.1234524247486890143;
    printf("int_1=%d\nchar_1=%c\nfloat_1=%.20f\n",int_1,char_1,float_1);
    return 0;
}