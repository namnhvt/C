#include <stdio.h>
int main() {
    int N,i,x;
    printf("enter interger: ");
    scanf("%d",&N);
    x=N;
    for (i = 0; N > 0; i++ ){
        N/=10;
    }
printf("       %d has %d digits",x,i);
}