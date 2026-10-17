#include<stdio.h>
int main() {
    int a,b;
    a=4;
    b=7;
    printf("a and b are even numbers: %d\n", (a%2==0) && (b%2==0));
    printf("a and b are not equal: %d\n", (a>b) || (a<b));
    printf("a and b are equal: %d\n", !(a>b) && !(a<b));    return 0;
}