#include <stdio.h>
#include <math.h>
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

int main() {
    int A,B;
    printf("enter starting number: ");
    scanf("%d",&A);
    printf("enter ending number: ");
    scanf("%d",&B);
    printf("\n");
    for (int i = A; i <= B; i++) {
        if (isPrime(i))
            printf("%d ",i);
    }
}