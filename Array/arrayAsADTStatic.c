
// array as ADT static


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
    
    for(int  i=0;i<arr.length;i++){
        printf("%d",arr.A[i]);
    }
}
int main(){
    struct Array arr;
    Create(&arr,10);
    Insert(&arr,5);
    Insert(&arr,3);
    Insert(&arr,7);
    Display(arr);
    return 0;
}