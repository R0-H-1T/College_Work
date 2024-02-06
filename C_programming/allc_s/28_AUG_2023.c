// 1. C program to find Strong Number bw 100 and 1000
// 145=1!.4!.5!
// 2. C program to read customer account num,balance,age,gender
// 3. Create a menu driven program to implement a calculator using the following
// Add,sub,mul,div,exit
// 4. Write a program to read name,reg no and marks in three subjects of 10 students
// and display the details in a tabular form
// 5. Find the sum of 2 3X4 matrix and display matrix 1,2 and sum
// 6. Write a program to read two string, if two strings are equal display
// ”both are equal” and display length.
// 7. Read 10 numbers and print prime numbers from the input 10 numbers
// 8. Write a program in c language to find the highest number of an array of n
// elements using function
// 9. Write a program in c language to read a paragraph
// 1. number of chars
// 2. number of words
// 3. number of sentences
// 10. Find highest element in 1d and 2d array,
// calculate s = 1/1! + 2/2! + 3/3! +.........+ n/n!


#include<stdio.h>

struct Node{
    int data;
    int *leftptr;
    int *rightptr;
};

int findHighestElem(int *ptr, int len){
    int max = *ptr;
    for(int i=0; i<len; i++, ptr++){
        if(max < *ptr){
            max = *ptr;
        }
    }
    return max;
}

int factorial(int num){
    int fact = 1;
    for(int i=num; i>0; i--){
        fact *= i;
        printf("#%d ", fact);
    }
    return fact;
}

int calculateFactorial(int num){
    int sum = 0;
    for(int i=1; i<=num ; i++){
        sum += (num/factorial(num));
        printf("%d ", sum);
    }
    return sum;
}


int *returnPointerArray(){
    int ptr[] = {12,4,13,41,52,5};
    int *p = ptr;
    return ptr;
}





int main(){
    // -------------------------PROGRAM 1-------------------------------
    //int m,n, *ptr, num;
    // printf("Enter 2d array dimensions: ");
    // scanf("%d %d", &m, &n);
    // int arr[m][n];
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         printf("arr[%d][%d]: ", i, j);
    //         scanf("%d", &arr[i][j]);
    //     }
    // }
    // int max = findHighestElem(&arr[0][0], m*n);
    // printf("Highest Number: %d\n\n", max);


    // -------------------------PROGRAM 2-------------------------------
    // printf("Enter a number: ");
    // scanf("%d", &num);
    // printf("Factorial: %d", calculateFactorial(num));


    // -------------------------PROGRAM 3-------------------------------

    //char *ch_ptr = "Hello and welcome to the world of c";
    
    return 0;
}