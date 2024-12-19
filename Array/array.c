#include <stdio.h>
int main(){
int arr[20];
// printf("heloo world");

printf("enter the array\n");

for(int i=0;i<20;i++){
    printf("at index %d :::",i);
    scanf("%d",&arr[i]);
}

// can use sizeof(arr) / sizeof(arr[0]) insteaf of 20 in loop

printf("/n");
printf("the arr is ");
for(int i=0;i<20;i++){
    printf("\t");
    printf("%d",arr[i]);
}
}