#include <stdio.h>

int main(){
    int age =9;
    if(age>10){
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    }else {
        printf("Your age is not greater than 10");
    } 
    if(age % 5 == 0){
        printf("We are inside another if\n");
        printf("Your age is divisible by 80\n");
    }
    return 0;
}