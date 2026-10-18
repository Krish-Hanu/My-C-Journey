#include<stdio.h>
int main() {
    int a,b;
    a=4;
    b=7;
    printf("Assignment of a to b: %d\n", b = a);
    printf("Assignment of (b=4) to a: %d\n", a = b);
    printf("Number comes after (a=4) is %d\n",a+=1);
    printf("Twice of (a=5) is %d\n",a*=2);
    printf("Half of (a=10) is %d\n",a/=2);
    printf("number comes before (b=4) is %d\n",b-=1);

    return 0;
}