#include<stdio.h>
int main (){
    int a[5], i, sum=0;
    printf("Enter 5 numbers: ");    
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
    for(i=0; i<5; i++){
        sum += a[i];
    }
    printf("Sum of the numbers is: %d", sum);
    return 0;
}