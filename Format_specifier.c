#include<stdio.h>
int main(){
    /* This is program in which we use format specifiers: 
       integer- %d
       float- %f
       double- %lf
       long double- %Lf
       long- %ld
       character- %c
    */
    int i;
    float f;
    double d;
    long double ld;
    long l;
    char c;
    printf("Enter any integer value:");
    scanf("%d", &i);
    printf("Enter any float value:");
    scanf("%f", &f);
    printf("Enter any double value:");
    scanf("%lf", &d);
    printf("Enter any long double value:");
    scanf("%Lf", &ld);
    printf("Enter any long value:");  
    scanf("%ld", &l);
    printf("Enter any character value:");
    scanf(" %c", &c);   
    
    printf("Integer value is: %d\n", i);
    printf("Float value is: %f\n", f);
    printf("Double value is: %lf\n", d);
    printf("Long double value is: %Lf\n", ld);
    printf("Long value is: %ld\n", l);  
    printf("Character is: %c\n", c);

    return 0;
   
}