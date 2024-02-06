# include<stdio.h>
#include<stdlib.h>

void main(){
    int num1, num2;
    short int ch;
    do{
        printf("\n\nEnter operation\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication\n5. Exit\n::");
        scanf("%hi", &ch);   
        if( ch == 5){
            printf("\nExiting . . . ");
            exit(0);
        } 

        printf("\nEnter 2 numbers: ");
        scanf("%d %d", &num1, &num2);
            
        switch (ch){
        case 1: printf("%d + %d = %d", num1, num2, num1+num2); 
            break;
        case 2: printf("%d - %d = %d", num1, num2, num1-num2);
            break;
        case 3: printf("%d / %d = %d", num1, num2, num1/num2);
            break;
        case 4: printf("%d * %d = %d", num1, num2, num1*num2);
            break;
        default:
            printf("Invalid operation selected.\nTry again\n");
            break;
        }
    }while(1);

}