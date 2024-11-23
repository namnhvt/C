#include <stdio.h>

int main() {
    int N,i;
    printf("enter : ");
    scanf("%d",&N);
    for(i = 0; i<=N; i++) {
        for (int h = N-i; h>=0 ; h--){
            printf(" ");
        }
        for(int j=0; j<i;j++){
            printf("%d",i);
        }
    
        printf("\n");
    }
}