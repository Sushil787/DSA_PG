//Memory allocated during the compilation is called static memory 
// memory allocated at runtime is dma some function are
//allocated memory location can only be accessed through pointer
// calloc,malloc,realloc, free
#include<stdlib.h>
#include<stdio.h>

//ptr = (cast-type*) malloc(byte-size)
//MALLOC

// int main(){
//     int i,n;
//     printf("enter the no of integers: ");
//     scanf("%d",&n);
//     int *ptr = (int *)malloc(n*sizeof(int));
//     if(ptr==NULL)
//     {
//         printf("memmory is not avialable");
//         exit(1);
//     }
//     for(i = 0;i<=n;i++){
//         printf("enter the integer: ");
//         scanf("%d",ptr+i);
//     }
//     for (i=0;i<=n;i++){
//         printf("%d",*(ptr+i));
//         printf("\n")

//     }
//     return 0;
//     }
// clear allocation calloc, memory allocation malloc
//CALLOC => This is used to allocate multiple block of memory
// ptr = (int *)calloc(no of block, size of block)
// reallocation with out changing old data
// ptr = (int *)realloc(ptr,2*sizeof(int))
