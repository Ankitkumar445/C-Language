/*Write a program using function to find the average of threee numbers*/
#include <stdio.h>
    float average(int a, int b, int c);
    float average(int a, int b, int c){
        return(a+b+c)/3.0;
    }
    int main(){
        int a=3,b=6,c=5;
        printf("The average of the sum a , b, c is %f",average(a,b,c));
    return 0;
}