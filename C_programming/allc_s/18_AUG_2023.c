


//write a prog in c lang to find the sum of 2 3X4 matrix 
// and display matrix1, matrix2 and their sum.

#include<stdio.h>
#include<stdlib.h>
int*  working(int add_arr[]){
    return add_arr;
}

int main(){
    const unsigned short int row, col;
    printf("Enter row and column of matrix: ");
    scanf("%hu %hu", &row, &col);
    unsigned short int m1[row][col], m2[row][col], m3[row][col];
    fflush(stdin);
    printf("\n\nEnter the 1st matrix: ");

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("m1[%hu][%hu]",i, j);
            scanf("%hu",  &m1[i][j]);
        }
    }

    printf("\n\nEnter the 2nd matrix: ");

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("m1[%hu][%hu]",i, j);
            scanf("%hu",  &m2[i][j]);
        }
    }

    printf("\nAddition. . .\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("Displaying the matrices:\nMatrix1\n ");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%hu ",m1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n+\n\nMatrix2\n");

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%hu ",m2[i][j]);
        }
        printf("\n");
    }
    printf("\n\n=\n\nMatrix3\n");

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%hu ",m3[i][j]);
        }
        printf("\n");
    }
}