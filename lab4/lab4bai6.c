#include <stdio.h>
int main(){
    int a,b=0,c,d=1, arr[100] ;
    arr[b]= 0;
    arr[d]= 1;
    printf("enter N = ");
    scanf("%d",&c);
   
    if(c>2){
        printf("%d %d ",b,d);
        for(a=0;a <= c-2; a++ ) {
           arr[d+1] = arr[b] + arr[d];
            printf("%d ", arr[d+1]);
           b++;
           d++; 
        
        }
    }
    else if(c==2){
        printf("%d %d",b,d);
    }
    else if(c==1){
        printf("%d",b);
    }
    
}