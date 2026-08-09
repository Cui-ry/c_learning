#include <stdio.h>
#include <math.h>
int main(){
    int a=1;
    int A=-1;
    int b=3;
    double c=3.141592696;
    float d=8.8;
    float x_1=pow(d,2);
    double x_2=sqrt(c);
    float x_3=sin(a);
    float x_4=cos(60);
    printf("%.4f\n%.4lf\n%.4f\n%.4f\n",x_1,x_2,x_3,x_4);
    return 0;
}