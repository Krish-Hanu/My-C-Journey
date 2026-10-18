#include<stdio.h>
int main(){
    /* In this program we will learn about escape sequences in C programming
       /n = new line
       /t = tab
       /b = backspace
       /v = vertical tab
       /' = single quote
       /" = double quote
       // = backslash
       /? = question mark
       
    */
    int a=10;
    float b=10.5;
    char c='A';
    printf("Integer: %d\n",a);
    printf("Float: %.2f\t",b);
    printf("Your name\n",c);
    printf("Float: %.2f\b\n",b);
    printf("Float: %.2f\v\n",b);
    printf("Character: \"%c\"\n",c);
    printf("Character: \'%c\'\n",c);
    printf("Character: \\%c\\",c);
    printf("\nInteger\\Float value = %d\\%.2f \n",a,b);
    printf("What come after 1\?\n");
    return 0;
}