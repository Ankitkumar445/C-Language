//Write a program to calculate the sum of numbers occurence in the multiplication table of 8.
#include <stdio.h>

int main(){
    int sum=0;
    //in place of 8 you can also create a int n=8; and write it in place of 8.
    for(int i=1;i<=10;i++){
     printf("%d x %d = %d\n",8,i,8*i);
        sum +=(8*i);

    }
    printf("The sum of the table of 8 is %d",8);
    return 0;
}