// pointer to pointer 
// array of pointers
// pointer to array



/*
read students in each batch
how many batches


x y
a p - 
p a
a a
p p



read dynamically how many batches , how many students  in each batch
*/


//No.of courses and 


#include<stdio.h>



int fib(int n){
    if(n <= 1)  return 1;
    return fib(n-1) + fib(n-2);
}

int fibonacciNumber(int num){
    if(num <= 1){
        return num;
    return fibonacciNumber(num-1) + fibonacciNumber(num-2);
}

int main(){
   int total_students, total_batches;
   printf("Enter total students:");
   scanf("%d", &total_students);
   printf("\nEnter total batches: ");
   scanf("%d", &total_batches);

    // CASE 1 Know how many batches but don't know how many students.

    int *batch_array[total_batches];
    for(int i=0; i<total_batches; i++){
        *batch_array[0]
    }

}