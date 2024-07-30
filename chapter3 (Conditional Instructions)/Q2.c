/*WAP to detrmine whether the student has passed or failed .To pass the student requires a 
total of 40% at least 33%in each subject.Assume there are three subjects and take the marks 
from the keyboard or user*/ 
#include <stdio.h>

int main(){
     int marks1,marks2,marks3;
     printf("Enter marks 1 : \n"); 
     scanf("%d,&marks1");
     printf("Enter marks 2 : \n");
     scanf("%d,&marks2");
     scanf("%d,&marks3");
     printf("Enter marks 3 : \n");
     printf("The marks are %d %d and %d",marks1,marks2,marks3);

     if(marks1<33 || marks2<33 || marks3<33){
        printf("Youa re fail due to less marks in some individual subjects\n");
     } else if((marks1+marks2+marks3)/3 <40){
        printf("You are failed due tpo less percentage\n");
     } else {
        printf("You are passed");
     }
    return 0;
}