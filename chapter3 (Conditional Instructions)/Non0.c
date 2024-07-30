#include <stdio.h>

int main(){
    if(1){
        printf("This if is executed\n");
    }
    if(243){
        printf("This if is also executed!\n");
    }
    if(2.44){
        printf("This if is also executed!\n");
    }
    if('c'){
        printf("This character inside if is also executed!\n");
    }
    if(0){
        printf("can't be executed!");
    }
    return 0;
}