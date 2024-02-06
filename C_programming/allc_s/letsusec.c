#include <stdio.h>// prepocessor directive -    chapter 5
#include <stdlib.h>

struct Customer{
    long int acc_no;
    float bal;
    short int age;
    char gender;
};

int main(){
    int i=0;
    struct Customer c[1];
    while(i<1){
        printf("\nEnter customer %d\nAcc no, Bal, Age, Gen: ", i+1);
        scanf("%d %f %d %c", &c[i].acc_no, &c[i].bal,&c[i].age, &c[i].gender);
        i++;
    }

    printf("\nDisplaying Customer details: ");
    
    for(int i=0; i<1; i++){
            printf("\n\nCustomer %d --\nAccount no: %d\nBalance: %f\nAge: %d\nGender: %c\n\n",i+1,
            c[i].acc_no, c[i].bal, c[i].age, c[i].gender);

    }
    return 0;
}


