#include<stdio.h>
int main() {
    // Print a multiplication table for a number entered by the user
    int num;
    printf("Enter a number to print multiplication table:");
    scanf("%d", &num);
    printf("========= Multiplication Table of %d =========\n", num);
    printf("%d\n", num * 1);
    printf("%d\n", num * 2);
    printf("%d\n", num * 3);
    printf("%d\n", num * 4);
    printf("%d\n", num * 5);
    printf("%d\n", num * 6);
    printf("%d\n", num * 7);
    printf("%d\n", num * 8);
    printf("%d\n", num * 9);
    printf("%d\n", num * 10);
    return 0;
}