/*Write a function to conert the celcius into farenheit*/
#include <stdio.h>
float c2f(float c);
float c2f(float c){
    return ((9*c)/5)+32;
}
int main(){
    float c =45;
    printf("celsius to farenheit for %f is %.2f",c,c2f((c)));
    return 0;
}