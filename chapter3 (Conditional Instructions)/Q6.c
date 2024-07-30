/*Write a program to find the greatest of four numbers entered by the user.*/
#include <stdio.h>

int main(){
    int n1=2,n2=4,n3=6,n4=8;
    if(n1>n2 && n1>n3 && n1>n4){
        printf("The greatest number is %d",n1);
    }else if(n2>n1 && n2>n3 && n2>n4){
        printf("The greatest number is %d",n2);
    }else if(n3>n1 && n3>n2 && n3>n4){
        printf("The greatest number is %d",n3);
    }else{
         printf("The greatest number is %d",n4);
    }
    return 0;
}
