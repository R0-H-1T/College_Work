// UNDERSTAND THE HEAP AND STACK MEMORY

// heap memory, a part of memory is used for 
// in heap memory 
// externally release form heap memory, else memory leak



// variable are always store in the stack area
// local and global variables are first inned and first out 

#include<stdio.h>
#include<stdlib.h>

int* id(int *ptr){
    return ptr;
}


// void ignore(){
//     int np = 10, **ptr;
//     int *p = &np;
//     ptr=&p;
    
//     printf("%p", p);
//     printf("\n%p", &np);
//     printf("\n%d", *p);

//     printf("%d",id(&np));
//     printf("\n%d %d", sizeof(int), np);
//     return 0;
// }

void pointerUsingBrackets(){
    int *p, n;
    printf("Enter no.of values: ");
    scanf("%d", &n);
    p = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n ; i++){
        printf("%d: ", i+1);
        scanf("%d", &p[i]);
    }
    for(int i=0; i<n; i++){
        printf("%i: %d\n",i+1, p[i]);
    }
}

int main(){
    int *p, n;
    printf("%u", sizeof(size_t));
    // printf("Enter no.of values: ");
    // scanf("%d", &n);
    // p = (int*)malloc(n*sizeof(int));
    // for(int i=0; i<n ; i++){
    //     printf("%d: ", i+1);
    //     scanf("%d", (p+i));
    // }
    // printf("Displaying numbers: \n");
    // for(int i=0; i<n; i++){
    //     printf("%i: %d\n",i+1, *(p+i));
    // }

    // free(p);
}