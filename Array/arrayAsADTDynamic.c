#include<stdio.h>
#include <stdlib.h>
struct Array{
    int *A;
    int size;
    int length;
};
void Create(struct Array* arr,int size){
    arr->size=size;
    arr->length=0;
    arr-> A=(int*)malloc(arr->size*sizeof(int));
}
void Insert(struct Array* arr,int element){
    if(arr->length<arr->size){
        arr->A[arr->length++]=element;
    }
}
void Display(struct Array arr){
    int i;
    printf("elements are\n");
      printf("[");
    for(int  i=0;i<arr.length;i++){
      
        printf("%d ,",arr.A[i]);
              

    }
      printf("]");
}
int main(){
    int totalElement,element;
    struct Array arr;
    printf("enter the number of element u want to save \n");
    scanf("%d",&totalElement);
    Create(&arr,totalElement);
    for(int i=0;i<totalElement;i++){
            printf("input the Data of index %d \n",i);

        scanf("%d",&element);
            Insert(&arr,element);

    }

    Display(arr);
    return 0;
}