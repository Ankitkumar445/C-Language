/*Write a recursive function to calculate the sum of first 'n' natural numbers.*/
#include <stdio.h>
int sum_natural(int);
int sum_natural(int n){
    if(n ==1){
        return 1;
    }
    return sum_natural(n-1)+n;
}
int main(){
    int a=10;
    printf("The sum of first five natural numbers is %d",sum_natural(5));
    return 0;
}