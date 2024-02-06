#include<stdio.h>

int *swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return a;
}

int len(int *arr){
    return 0;
}

struct Person{
    char gender;
    int age;
    float salary;
}p1;

int main(){
    int a = 12, b= 34, *ptr = &a;

    int *p = swap(&a, &b);
    printf("%u", *p);

    printf("Size of int %u", sizeof(p1));
    // int c;
    // c = getchar();
    // putchar(c);
    return 0;
}
