// highest no of an array of nth elements using function
#include<stdio.h>

int highestElem(int arr[], int len){
    int max = 0;
    for(int i=0; i<len; i++){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}



void main(){
    unsigned short int max;
    unsigned short int m, n; 
    printf("Enter m and n for matrix: ");
    scanf("%hu %hu", &m, &n);
    int arr[m][n];
    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("[%hu][%hu]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\nDisplaying: \n");
    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("\t%hu", arr[i][j]);
        }
        printf("\n");
    }
    printf("%d",highestInMatrix(arr,m,n));

    for(int i=0; i<10; i++){

    }
}
