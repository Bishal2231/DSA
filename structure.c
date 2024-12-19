#include <stdio.h>
int main(){
    
    struct Student{
        char name[20];
        int mark;
        int roll;;
        
    };
        
      struct  Student s1={"hero",20,12};
       printf("%d",s1.mark);
       return 0;
        
    
    
}