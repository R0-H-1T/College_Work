#include<stdio.h>

int main(){
    printf("\n\n");
    char str1[20] = "CHRIST UNIVERSITY";
    char str2[20] = "EMPLOYEE PAYROLL";
    

    int width = 75;
    int length1 = sizeof(str1) - 1;  // Discount the terminal '\0'
    int length2 = sizeof(str2) - 1;  // Discount the terminal '\0'
    int pad1 = (length1 >= width) ? 0 : (width - length1) / 2;
    int pad2 = (length2 >= width) ? 0 : (width - length2) / 2;
    printf("%*.*s%s\n", pad1, pad1, " ", str1);
    printf("%*.*s%s\n", pad2, pad2, " ", str2);

    unsigned short int x;
    x = 65000;
    printf("%d",x);    
}


