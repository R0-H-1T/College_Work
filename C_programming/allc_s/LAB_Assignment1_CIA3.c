#include<stdio.h>
#include<stdlib.h>
#define MAX 25


void check_if_odd(unsigned short int n){
    if( n%2 != 0){
        printf("%hu ", n);
    }
}

void check_if_palindrome(unsigned short int num){
    unsigned short int temp = num;
    unsigned int pal_in = 0;
    while(temp != 0){
        int rem = temp%10;
        pal_in += rem;
        pal_in *= 10;
        temp /= 10;
    }
    pal_in/=10;
    if( pal_in == num){
        printf("%hu ", num);
    }
}

void check_if_4_digit(unsigned short int num){
        unsigned int temp = num, count = 0;
        while(temp!=0){
            count+=1;
            temp/=10;
        }
        if(count == 4){
            printf("%hu ", num);
        }
}
int main(){
    unsigned short int arr[MAX];
    unsigned short int ch;

    printf("Enter %d numbers -\n", MAX);
    for(unsigned short int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        printf("%hu: ", i+1);
        scanf("%hu", &arr[i]);
    }

    printf("\n\nMenu Driven Program -------------------------\n");
    while(1){
        printf("\n\nDisplay - \n");
        printf("1. Odd numbers\n2. Palindrome numbers\n3. 4 digit numbers\n4. Numbers in ascending order\n5. Exit\n");
        printf("Enter your choice:");
        scanf("%hu", &ch);
        switch (ch){
            case 1:
                printf("\nAll odd nos. in array: ");
                for(unsigned short int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
                    check_if_odd(arr[i]);
                }
                break;

            case 2:
                printf("\n\nDisplaying all palindrome nos. in array: ");
                for(unsigned short int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
                    check_if_palindrome(arr[i]);
                }
                break;

            case 3:
                printf("\n\nAll 4 digit nos. in array: ");
                for(unsigned short int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
                    check_if_4_digit(arr[i]);
                }
                break;

            case 4:
                printf("\n\nSorting array in acending order using insertion sort:\n");
                for(unsigned short int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
                    unsigned short int j = i;
                    while(j > 0 && arr[j] < arr[j-1]) {
                        unsigned short int temp = arr[j];
                        arr[j] = arr[j-1];
                        arr[j-1] = temp;
                        j--;
                    }
                }
                for(unsigned short int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
                    printf("%hu ", arr[i]);
                }
                break;

            case 5:
                exit(0);
                break;
            default:
                printf("Invalid choice entered!\nTry Again . . .\n");
        }
    }
    
    printf("\n\n");
    return 0;   
}