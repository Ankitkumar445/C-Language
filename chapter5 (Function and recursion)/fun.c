#include <stdio.h>
//void display(); display is a function which doesn't return anything. 
int sum(int, int);
int sum(int x, int y){
    printf("The sum is %d\n",x+y);
    return x+y;
}
int main(){
    int a =10;
    int b=20;
    sum(a,b);
    
    return 0;
}