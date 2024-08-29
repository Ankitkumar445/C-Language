/*Write a program having a variable "i". Press the variable a function and prints its 
address .Are these address same?Why? */
#include <stdio.h>
int returning_2(int* ptr){
        printf("The value of ptr is %d\n", ptr);
        printf("The value of ptr is %d", *ptr);
        return 5;
}
int main(){
    int i=5;
    int* ptr = &i;
    printf("The address of i is %u\n", &i);
    returning_2(ptr);
    return 0;
}