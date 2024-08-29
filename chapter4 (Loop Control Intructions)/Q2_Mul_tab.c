// Write a program to print the multiplication table of n number.
#include <stdio.h>

int main(){
    int n;
    scanf(" %d", &n);
    for(int i=1;i<=10;i++){
        printf("Enter the table: %d x %d = %d\n",n,i,n*i);
    }
    return 0;
}