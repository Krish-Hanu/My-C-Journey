#include<stdio.h>
// C program to print next 5 terms in AP with common difference 5 using do while loop
int main(){
    int x,count=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Next 5 terms in AP with common difference 5 are:\n");
    do {
        x=x+5;
        printf("%d\n",x);
        count++;
    } while(count<5);
    return 0;
}