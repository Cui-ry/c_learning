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
    double double_1=3.1234524247486890143;
    int a=10%3;
    int b=10%-3;
    int d=-10%3;
    printf("int_1=%d\nchar_1=%c\nfloat_1=%.20f\ndouble_1=%.20lf\na=%d\nb=%d\nd=%d\n",int_1,char_1,float_1,double_1,a,b,d);
    return 0;
}