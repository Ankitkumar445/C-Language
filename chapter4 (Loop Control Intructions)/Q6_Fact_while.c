// Write a program to calculate the factorial of the given number using while loop.
#include <stdio.h>

int main(){
    int i=1;
    int p=1;
    int n=4;
    while(i<=n){
         p*=i;
         i++;  
    }
    printf("The factorial of %d is %d",i,p);
    return 0;
}