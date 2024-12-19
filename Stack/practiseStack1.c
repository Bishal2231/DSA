#include <stdio.h>
int max=5,data,sack[5],top=-1;

void push(){
    if(top==max-1){
        printf("\n:stack is full\n");
    }
    else{
        printf("\n enter the data\n");
        scanf("%d",&data);
        top++;
        sack[top]=data;
    }
}
void pop(){
    if(top==-1){
        printf("\n stack is full pop");
        
    }else{
        printf("\ndeleted data %d\n ",sack[top]);
        top--;
    }
}
void display(){
    printf("DATA :[");
    for(int i=0;i<top+1;i++){
        printf(" %d,",sack[i]);
    }
        printf("]");

}
int main(){

push();
push();
push();
push();
display();


pop();
pop();
pop();

display();
return 0;

}