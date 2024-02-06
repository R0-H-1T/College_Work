#include<stdio.h>
#define MRKS 10


void display_details(char name[], int regno, unsigned short int marks[]){
    printf("%s\n", name);
    printf("%d\n", regno);
    printf("Marks: ");
    for(int i; i< MRKS; i++){
        printf("%hu ", marks[i]);
    }
}

int main(){
    char name[20];
    unsigned int registerNo;
    unsigned short int marks[MRKS];

    printf("Enter name: ");
    fgets(name, 20, stdin);
    printf("Enter register No: ");

    scanf("%d", &registerNo);
    printf("Enter marks:\n");

    for (int i=0; i<3; i++){
        printf("%d : ", i+1);
        scanf("%hu", &marks[i]);
        printf("%hu", marks[i]);
    }

    display_details(name, registerNo, marks);
    return 0;
}

//write a prog in c lang to find the sum of 2 3X4 matrix 
// and display matrix1, matrix2 and their sum.