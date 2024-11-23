#include <stdio.h>

int main () {
    int N,x,y= 0,i;

    printf("input interger: ");
    scanf("%d",&N);
    for(i=0; y < N;i++){
        y = y + i;
        
        printf("%d\n",y);
        if (y==N) {
           x = y;
           break;
           
        }
    }
    if(N==x) {
        printf("%d is a perfect number",x);
    }
    else {
        printf("not a perfect number");
    }
    

return 0;

}