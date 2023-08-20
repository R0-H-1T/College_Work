#include<stdio.h>
#define MAX 24
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
    printf("Enter %d numbers -\n", MAX);
    for(unsigned short int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        printf("%hu: ", i+1);
        scanf("%hu", &arr[i]);
    }
    printf("\nAll odd nos. in array: ");
    for(unsigned short int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        check_if_odd(arr[i]);
    }
    printf("\n\nDisplaying all palindrome nos. in array: ");
    for(unsigned short int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        check_if_palindrome(arr[i]);
    }
    printf("\n\nAll 4 digit nos. in array: ");
    for(unsigned short int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        check_if_4_digit(arr[i]);
    }
    
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

    printf("\n\n");
    return 0;   
}