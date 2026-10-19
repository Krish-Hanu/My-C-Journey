#include<stdio.h>
int main() {
int class,roll;
float m1,m2,m3,m4,m5,total;
char section, grade;
char name[100],result;

printf("Enter your name:");
scanf("%[^\n]",&name);

printf("Enter your class (1-12):");
scanf("%d",&class);

printf("Enter your Rollno:");
scanf("%d",&roll);

printf("Enter your Section:");
scanf(" %c",&section);

printf("Enter your Mathematics marks:");
scanf("%f",&m1);

printf("Enter your Chemistery marks:");
scanf("%f",&m2);

printf("Enter your Physics marks:");
scanf("%f",&m3);

printf("Enter your English marks:");
scanf("%f",&m4);

printf("Enter your Hindi marks:");
scanf("%f",&m5);

total=m1+m2+m3+m4+m5;
 
printf("======STUDENT MARKSHEET======\n");
printf("\tNOIDA PUBLIC SCHOOL\n");
printf("Student name: %s\n",name);
printf("Class: %d\t\t\t",class);
printf("Rollno: %d\n",roll);
printf("Section: %c\t\t\t",section);
printf("Total marks: %.2f\n",total);
printf("Score in Mathematics: %.2f\n",m1);
printf("Score in Chemistery: %.2f\n",m2);
printf("Score in Physics: %.2f\n",m3);
printf("Score in English: %.2f\n",m4);
printf("Score in Hindi: %.2f\n",m5);

if ( total >= 401 && total <= 500 ){
     printf("Grade: A\t\t\t");
     }
    else if ( total >= 301 && total <= 400 ){
     printf("Grade: B\t\t\t");
     }
    else if ( total >= 201 && total <= 300 ){
     printf("Grade: C\t\t\t");
     }
     else if ( total >= 167 && total <= 200 ){
     printf("Grade: D\t\t\t");
     }
     else {
     printf("Grade: F\t\t\t"); 
}

printf("Percentage :%.2f\n",(total/600)*100);

if (total>=167){
     printf("Result: PASSED\n");
     }
else {
     printf("Result: FAILED\n");
    }  

return 0;
} 