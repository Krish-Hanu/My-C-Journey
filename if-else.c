#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a%2==0){
        printf("Number is even\n");
    }
    else{
        printf("The number is odd\n",a);
    }
    return 0;
}