#include<stdio.h>
/* In this program we use two types of constant:
   1. const keywords
   2. #define preprocessor */
#define Pi 22/7
int main(){
  const int a =4; 
  // We cannot change the value of a as it is declared as constant
  float raidus, area;
  printf("Enter the radius of the circle: ");
  scanf("%f", &raidus);
  area = Pi * raidus * raidus;
  printf("The area of the circle is: %.3f\n", area);
  printf(" Quater of the area is: %.3f\n", area/a);
  return 0;
}