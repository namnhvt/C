#include <stdio.h>

int main() {
    int N,x,y;
    printf("enter interger: ");
    scanf("%d",&N);
    if (N<0) {
        printf("pls enter a positive int");
    
    }
    else {
    printf("Number          Square              Cube\n");
    for (int i = 0; i<=N;i++)  {
        x = i*i;
        y = i*i*i;
    
        printf("%d    \t%d    \t%d\n",i,x,y);
    }

        }
    return 0;

 }   