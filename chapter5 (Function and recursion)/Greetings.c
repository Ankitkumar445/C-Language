/*Write a program using these three functions which are 
Good morning which prints "good morning",
Good evening which prints "good evening",
Good night which prints "good night"*/
#include <stdio.h>
void good_morning();
void good_eneving();
void good_night();
void good_morning(){
    printf("Good Morning\n");
}
void good_evening(){
    printf("Good Evening\n");
}
void good_night(){
    printf("Good night\n");
}
int main(){
    good_morning();
good_evening();
good_night();
good_morning();
    return 0;
}