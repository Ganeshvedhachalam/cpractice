#include <stdio.h>
int main (){
    short int i=65000; // exceeds so -537 
  while (i++ !=0) { //cjehecks i and thepost increment 
        printf("Current value of i: %d\n", i); // Print the current value in each iteration
    }
    
    // goes to intmax of shortint then 0
    
    printf("%d",i );
    return 0;
}