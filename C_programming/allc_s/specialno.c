#include<stdio.h>

int fact(int num){
    int arr[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
    return arr[num];
}

void main(){
    int n;
    printf("Enter a num: \n");
    scanf("%d", &n);
    
    int temp = n, sum = 0;
    while(temp != 0){
        int r = temp%10;
        sum += fact(r);
        temp/= 10;
    }
    printf("%d", sum);
    if (sum == n) printf("%d\n", n); 
}

    //write a program in c language to read the name, register number and marks in 3 subjects
    //of 10 students and display the details in a tabular form
