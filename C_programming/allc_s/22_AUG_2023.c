#include<stdio.h>


int factorial(int num){
    int fact;
    for(int i=num; i>0; i--){
        fact *= num;
    }
    return ;
}

// 1 2 3
// 1 2 6 

int main(){
    printf("Factorial of 3 is %d", factorial(3));

    return 0;
}