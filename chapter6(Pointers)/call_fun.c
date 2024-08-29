#include <stdio.h>

    int sum(int *, int *);
    int sum(int* a, int* b){
        *a=10;
        return (*a+*b) ;
    }
    int main(){
    int x=1,y=6;
    printf("Tthe value of 1 and 6 is %d\n",sum (&x ,&y));
    printf("The value of x is %d",x);
    return 0;
}