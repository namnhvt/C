#include <stdio.h>
#include <stdbool.h>

bool is_Perfect(int n){
    int num=0,i=1;
    while(num<n){
        num = num + i;
        i++;
    }
    if(num%n!=0){
        printf("NOT A PERFECT NUMBER\n");
        return false;
        
    }
     printf("PERFECT NUMBER\n");
     return true;
   
}

int main(){
    int N,A = 0;
    printf("enter: ");
    scanf("%d",&N);
    if(is_Perfect(N)){
        for(int j=0;A<990;j++){
            A = A+j;
            printf("%d ",A);
        }
    }
    
}