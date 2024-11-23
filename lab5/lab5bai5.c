#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n ) {
    if (n == 0|| n == 1){
        return false;
    }
    for ( int i = 2; i*i <= n; i++ ) {
        if (n%i ==0)
            return false;
    }
    return true;
}
int main(){
    int N;
    printf("enter: ");
    scanf("%d",&N);
    for(int i = 2; i < N; i++){
        if (isPrime(i)){
            printf("%d ",i);
        }
    }
}