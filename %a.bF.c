#include<stdio.h>
int main(){
    double x;
    int y;
    x=4537.5674 ;
    
    printf("Integer part of number is %d\n", y = (int)x);
    // Value upto 2 decimal points only
    printf("Value upto 2 decimal points: %.2f\n",x);
    // Space before the number and 3 decimal points
    printf("Value is %12.3lf\n",x);
    // space after number and 1 decimal point
    printf("%-13.1lf is the value\n",x);

return 0;
}   