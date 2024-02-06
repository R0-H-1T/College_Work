#include<stdio.h>


void ques2(){
    char string1[20];
    char string2[20];
    char string3[20];
    
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string1), stdin);

    unsigned short int count = 0;
    for(int i=0; i<sizeof(string1); i++){
        if (string1[i] == '\0' && string1[i+1] != ' '){    
            count += 1;
        }
    }


    printf("\n%d\n",count);
    printf("%d", sizeof(string2));
}

//accept 10 numbers and print only prime numbers;
void ques3(){
    const unsigned short int n = 10;
    unsigned short int arr[n];

    printf("Enter 10 numbers:\n");
    for(int i=0; i<10; i++){
        printf("%hu : ", i+1);
        scanf("%hu", &arr[i]);
    }

    printf("Displaying:\narr[10] = { ");
    for(int i=0; i<10; i++){
        printf("%hu ", arr[i]);
    }
    printf("}");
}

int main(){
    ques3();    

}
//read 10 numbers and print only prime numbers from the list of the numbers;
