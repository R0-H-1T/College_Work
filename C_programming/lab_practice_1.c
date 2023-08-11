/*
    QUESTION --------------------------------------------------------------------
    Take input form user:
        1. Customer name
        2. Customer phno 
        3. Customer type - (Student/faculty)
        4. Customer No.of Due days

    The fine amount will be applicable depending upon the following criteria
    if cutomer type is student
        then for first 5 days the fine would be Rs 2
        for next five days the fine would be Rs 2.5
        and for next 10 days the fine is 3.25
        Additionaly, a  fine of Rs 1000 would be added if its over 20 days.
    if customer type is faculty then
        first 5 days fine 4.5
        next 5 days, fine 7.5
        next 10 days, fine 10.25
        Fine of Rs 2000 is added if its over 20 days

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 20
struct Customer{
    char customer_name[MAX];
    unsigned int customer_number;
    char customer_type;
    short int number_due_days;
};

void getCustomerDetails(struct Customer *c){
    char name[MAX];
    printf("\n\nEnter customer name: ");
    fgets(name, MAX, stdin);
    strcpy(c->customer_name, name);
    // scanf("%s", &c->customer_name);
    printf("Enter customer phno.: ");
    scanf("%lu", &c->customer_number);
    fflush(stdin);

    printf("Enter customer type Student(s) or Faculty(f): ");
    scanf("%c", &c->customer_type);

    printf("Enter no.of days late: ");
    scanf("%d", &c->number_due_days);
}

void displayCustomerDetails(struct Customer *c){
    printf("\n\nDisplaying customer details:");
    printf("\nName: "); puts(c->customer_name);
    // printf("\nName: %s", c->customer_name);
    printf("Phno: %lu", c->customer_number);
    printf("\nType: %c", c->customer_type);
    printf("\nNo.of days late: %d", c->number_due_days);
    
}


void calculate_fine_amount(struct Customer *c, double f_five, double next_five, double next_ten, double damage){
        if(c->number_due_days <= 5){
            printf("\nFine Amount: %d", c->number_due_days * f_five);
        }else if(c->number_due_days > 5 && c->number_due_days <= 10){
            printf("\nFine Amount: %d", ((c->number_due_days - 5) * next_five) + (c->customer_number - (c->number_due_days - 5))*f_five);
        }else if(c->number_due_days > 10 && c->number_due_days <= 20){
            printf("\nFine Amount: %f", (c->number_due_days - 10)*next_ten + 5*next_five + 5*f_five);
        }
        else printf("\nFine amount: %d", damage + 10*next_ten + 5*next_five + 5*f_five);
}

int main(){
    struct Customer c1, c2;
    int student_due[] = {2,2.5,3.25,1000};
    int faculty_due[] = {4.5,7.5,10.25,2000};
    getCustomerDetails(&c1);
    displayCustomerDetails(&c1);
    fflush(stdin);
    getCustomerDetails(&c2);
    displayCustomerDetails(&c2);
    calculate_fine_amount(&c1, student_due[0],student_due[1],student_due[2],student_due[3]);
    calculate_fine_amount(&c2, faculty_due[0],faculty_due[1],faculty_due[2],faculty_due[3]);
    return 0;

}