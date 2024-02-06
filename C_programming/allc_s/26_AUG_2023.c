//write a program in c language to read a paragraph and print the following report
// 1. Number of characters
// 2. Number of words
// 3. Number of sentences



#include<stdio.h>
#include<string.h>
#define MAX 100

int main(){
    char user_str[MAX];

    printf("Enter a string: ");
    fgets(user_str, MAX, stdin);

    int count = 0, temp, words, sent=0; 
    printf("\n");
    for(int i=0; i<MAX; i++){
        if (user_str[i] == '.'){
            count = i;
        }
    }
    temp = count;
    for(int i=0; i<=temp; i++){
        if(user_str[i] == ' '){
            words++;
        }else if(user_str[i] == '.' && user_str[i+1] ==' ' ){
            sent++;
        }
    }

    printf("\n");
    printf("Total characters in paragraph: %d\n",count);
    printf("Total words in paragraph: %d\n",words+1);
    printf("Total sentences in paragraph: %d\n",sent+1);

    
    return 0;

}