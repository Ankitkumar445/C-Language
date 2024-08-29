// Write a program to calculate the factorial of the given number using for loop.
#include <stdio.h>

int main(){
    int p=1;
    int n=4;
    for(int i=1;i<=n;i++){
        p*=i;
    }
    printf("The factorial is %d",p);
    return 0;
}