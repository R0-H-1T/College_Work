//10 students name text file
//write a program in c lan to store details of 10 students
// get the data bac from te
//open and read data from the file and print into terminal

#include<stdio.h>
#include<string.h>
int main(){

    char name[10][64];
    FILE *myfile;
    myfile = fopen("output.txt", "w");

    printf("Enter 10 students name: \n");
    for(int i=0; i<10; i++){
        fgets(name[i], 64, stdin);
    }
    printf("Writing contents to file... ");
    for(int i=0; i<10; i++){
        fputs(name[i], myfile);
    }
    fclose(myfile);

    myfile = fopen("output.txt", "r");
    char c;

    printf("\n\nFetching contents from the file -> output.txt\n");
    c = getc(myfile);
    while(c!=EOF){
        printf("%c", c);
        c=getc(myfile);
    }
    fclose(myfile);

    char bool;
    printf("Want to append more content to the file? y/n:");
    getc(bool);
    if(bool == 'y'){
        myfile = fopen("output.txt", "a");
        for(int i=0; i<3; i++){
            fgets(name[i], 64, stdin);
        }
        printf("Writing to the file: ");
        for(int i=0; i<3; i++){
            fputs(name[i], myfile);
        }
    }
    return 0;
}

