#include<stdio.h>
int main(){
    int x;
    printf("Enter your age:");
    scanf("%d",&x);
    switch(x){
        case 0 ... 5:
            printf("You are a baby.\n");
            break;
            case 6 ... 12:
            printf("You are a child.\n");
            break;
            case 13 ... 25:
            printf("You are young.\n");
                switch(x){
                    case 13 ... 17:
                        printf("You cannot vote.\n");
                        break;  
                    case 18 ... 25:
                        printf("You can vote.\n");
                        break;
                }
            break;
            case 26 ... 60: 
            printf("You are an adult.\n");
            printf("You can vote.\n");
            break;
        default:
            printf("You are a senior citizen.\n");
            printf("You can vote.\n");
            break;
    }
    return 0;
}