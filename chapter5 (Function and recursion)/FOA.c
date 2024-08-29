/*Write a function to calculate force of attraction on a body of mass 'm' exerted by the 
earth.Considering g =9.8 m/s^2. */
#include <stdio.h>
float force(float);
float force(float mass){
      return mass*9.8;
}
int main(){
    int n=45;
    printf("The value of the force is %f\n",force(n));
    return 0;
}