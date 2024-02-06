//write a program to store name regino and 3 subject marks of 10 studebnts
// and dispaly teh total mark of each student and the avg marks of the class


// ISSUES:
// 1. get 

#include<stdio.h>
#include<string.h>
#define MAX 4

struct Student{
    char name[40];
    unsigned int regno;
    unsigned int arr[MAX];
};


int main(){

    FILE *myfile = fopen("student.txt", "wb");
    struct Student s[10];
    int total_students = 2;


    for(int i=0; i<total_students; i++){
        printf("\nStudent %d ------------------------", i+1);
        printf("\nEnter name: ");
        // gets(s[i].name);
        fgets(s[i].name, 40 , stdin);
        fflush(stdin);

        printf("Enter registeration no: ");
        scanf("%hu", &s[i].regno);
        fflush(stdin);

        printf("Enter marks for 3 subjects: \n");
        for(int j=0; j<MAX-1; j++){
            printf("%d: ", j+1);
            scanf("%hu", &s[i].arr[j]);
            fflush(stdin);
        }
        printf("\nWriting to the file -> student.txt ...\n");
        fwrite(&s[i], sizeof(s[i]),1,myfile);
    }

    fclose(myfile);

    myfile = fopen("student.txt", "rb");
    printf("\nDisplaying contents of the file: ");
    for(int i=0; i<total_students; i++){
        fread (&s[i], sizeof (s[i]) ,1,myfile);
            printf("\n\nStudent %d ------------------------", i+1);
        printf("\nName: %s", s[i].name);
        printf("Registeration no: %hu", s[i].regno);
        s[i].arr[MAX] = 0;
        printf("\n\nTotal marks: ");
        for(int j=0; j<MAX-1; j++){
            s[i].arr[MAX] +=  s[i].arr[j];
        }
        printf("%hu", s[i].arr[MAX]);
    }

    // char c = get(myfile);
    // while(c != EOF){
    //     printf("%c", c);
    //     c=getc(myfile);
    // }

    // fclose(myfile);

    // printf("\nDisplaying student details: ");
    // for(int i=0; i<total_students; i++){
    //     printf("\nStudent %d ------------------------", i+1);
    //     printf("\nName: %s", s[i].name);
    //     printf("\nRegisteration no: %hu", s[i].regno);
    //     s[i].arr[MAX] = 0;
    //     printf("\nTotal marks: ");
    //     for(int j=0; j<MAX-1; j++){
    //         s[i].arr[MAX] +=  s[i].arr[j];
    //     }
    //     printf("%hu", s[i].arr[MAX]);
    // }

    // int sum=0;
    // for(int i=0; i<total_students; i++){
    //     sum += s[i].arr[MAX];
    // } 
    
    // printf("\n\nAverage marks of the class: %f", (float)sum/total_students);  


}