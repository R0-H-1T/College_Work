#include<stdio.h>

int fact(int num){
    int arr[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
    return arr[num];
    //int fact = 1;
    // for (int i=num; i>=1; i--){
    //     fact *= i;
    // }
}


void testing(){
    const int num = 123;
    const char c = 'def'
    // printf("const num : %d\n", num);
}

void main(){
    testing();
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







// int n;

    // printf("Special numbers from 100 to 1000 are: \n");
    // for(int i=100; i<1000; i++){
    //     int temp = i, sum = 0;
    //     while(temp != 0){
    //         int r = temp%10;
    //         sum += fact(r);
    //         temp/= 10;
    //     }
    //     if (sum == i) printf("%d\n", i); 
    // }