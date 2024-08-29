#include <stdio.h>

int main(){
    int i =70;
    int* j=&i;
    int k =67;

    char l ='A';
    char*m =&l;
    float n =5.242;
    float* n1=&n;
    printf("The address of l is %p\n",&l);
    printf("The address of l is %p\n",m);
    printf("The address of l is %p\n",&m);

    printf("The address of i is %u\n",&i);
    printf("The address of i is %u\n",j);
    printf("The address of i is %u \n", &k);
    return 0;
}