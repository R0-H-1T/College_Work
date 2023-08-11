#include<stdio.h>
#include<stdlib.h>




void insure(char status[15], char gender[15], int age){
    if ( status == "married"){
        printf("You are insured !");
    }else{
        if( (gender == "male") && (age > 30))
            printf("You are insured !");
        else if((gender == "female") && (age > 25))
            printf("You are insured");
        else
            printf("You are not insured :(");
    }
}


int fine(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    switch (n){
    case 1:
        printf("You have entered one.");
        break;
    case 2:
        printf("You have entered two.");
    default:
        printf("Something is not right!");
        break;
    }

}

int factorial_num(int n){
    int fact;
    for (int i=n; i>=1; i--){
        fact *= i;
    }
    return fact;
}

int prime_num(int n){
    int flag = 0;
    if (n ==1 || n== 0){
        return 0;
    }
    for(int i=2; i<n-1; i++){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag) return 1;
    else return 0;
}

void greetings(){
    printf("Greetings my friend !");
    
}

void fact_prime_odd(){
    int flag = 1;
    int ch;
    int n;
    while(flag){

        printf("\n\n\n***** MENU DRIVEN PROGRAM *****\n1. Factorial of number.\n2. Prime or not.\n3. Odd or even.\n4. Exit.\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        if(ch != 4 && (ch ==1 || ch ==2 || ch ==3)){
            printf("Enter a number: ");
            scanf("%d", &n);
        }

        switch(ch){
            case 1:
                printf("\nFactorial of %d is: %d", &n, factorial_num(n));
                break;
            case 2:

                printf("prime");
                break;
            case 3:
                printf("odd");
                break;
            case 4:
                printf("Exiting program");
                exit(0);
            default:
                printf("You have entered an invalid option!\nTry again.");
        }
        char yn;
        printf("\nExit program ? (y/n): ");
        fflush(stdin);
        scanf("%c", &yn);
        if( yn == 'y' || yn == 'n'){
            if(yn == 'y') flag = 0;
            else flag = 1;
        }else{
            printf("Invalid character.\nExiting...");
            exit(0);
        }
    }
}

void understanding_pointers(){
    int i = -2;
    int *j, **k;
    j = &i;
    k = &j;
    printf("\nAddress of i : %u", &i);
    printf("\nAddress of i stored in j : %u", *&j);
    printf("\nAddress of j : %u", &j);
    printf("\nvalue at address held by k: %u", *k );



}


void calling_pointers(int *a, int *b){
    int temp;
    temp = *a;
    a = b;
    b = &temp;
}
int main(){
    // int i =10;
    // printf("Value of i: %d",i);
    // printf("\nAddress of i: %u",&i);
    // printf("\nValue at address of i: %d",*(&i));
    
    
    //understanding_pointers();
    int a=91, b=32;
    printf("%d: %u, %d:%u", a,&a, b,&b);
    calling_pointers(&a, &b);
    printf("\n%d: %u, %d:%u", a,&a,b, &b);


    // insure("umarried", "male", 35);
    // int i;
    // (i == 1)? printf("Yes is one ") : printf("Is not one");
    // fine();
    // printf("Enter a number: ");
    // scanf("%d", &num);

    // if(num < 5)
    //     printf("%d is smaller than 5", num);
    // else if( num == 56)
    //     printf("%d is %d", num, num);
    // else
    //     printf("Nothings true");

    return 0;
}


// check version of gcc => gcc -v

// to name your own object file use command:
// gcc -o your_name filename.c
// ./yourname for execution




