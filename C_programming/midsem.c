#include<stdio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int noOfDigits(int temp){
    int count = 0;
    while(temp != 0){
        count++;
        temp /= 10;
    }
    printf("\nno of: %d", count);
    return count;
}


int armstrongNumber(){
    int n,temp, sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    printf("\nPower of 2^2%d", pow(2,2));
    while(temp != 0){
        sum += pow(temp%10, noOfDigits(n));
        temp /= 10;
    }
    printf("Armstrong number is: %d", sum);
    return 0;
}



int fib(int n){
    if(n <= 1)  return 1;
    return fib(n-1) + fib(n-2);
}


void reverseStrUsingPointer(char *ptr){
    int count = 0;
    while(*(ptr+1) != '\0'){
        ptr++;
        count++;
    }
    printf("\nFinal Character: %c\n", *ptr);
    for(int i=count; i>=0; i--){
        printf("%c", *ptr);
        ptr--;
    }
}

void findMaxCharacters(char *ptr){

}


struct object{
    char ch;
    int n;
};

int main(){
    // char *ptr[] = { "Rohit",
    //                 "Reynolds",
    //                 "Michael"
    //             };

    // printf("\nAddress of first word: %p", &ptr);
    // for(int i=0; i<3; i++){
    //     printf("%d: %s ", i, *(ptr+i));
    //     printf("\nAddress of first word: %p\nAddress of ptr: %p", ptr[i], &ptr[i]);
    //     printf("%s ", *(ptr+i));
    // }

    // char *str_ptr = "\nHello and welcome";
    // while(*str_ptr != '\0'){
    //     printf("%c", *str_ptr);
    //     str_ptr++;
    // }

    // char name[20];
    // printf("\nGet it first time: ");
    // scanf("%s", name);
    // printf("%s", name);
    // fflush(stdin);
    // printf("\nGet it second time: ");
    // gets(name);
    
    // char ch = name[0];
    // int count = 0;
    // while(ch!='\0'){
    //     count++;
    // }
    // printf("\nLength of the string is: %d", count);
    // puts(name);

    //armstrongNumber();
    // char *ptr = "Hello";
    // reverseStrUsingPointer(ptr);
    int my_arr[2][5] = {{1,2,34,90,43},{9,13,56,234,-7}};
    

    char *str_ptr = "fantastic";

     int n, a=1, b=1, c, temp;
        scanf("%d", &n);
        cout<<1<<" "<<1<<" ";
        for(int i=2; i<n; i++){
            cout<<a+b;
            c=b;
            b=a+b;
            a=b;
        }
        return 0;

    return 0;

}
