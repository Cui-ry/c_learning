#include <stdio.h>
#include <math.h>
int main(){
    const double PI = 3.14159265358979323846;   
    int r=0;
    scanf("%d", &r);
    double area = PI *pow(r,2);
    printf("圆的面积是：%.6lf\n", area);
    return 0;
}