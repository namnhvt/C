#include <stdio.h>

void primeFactorization(int n) {
    printf("Prime factorization of %d: ", n);
    int factor = 2;
    while (n > 1) {
        if (n % factor == 0) {
            printf("%d", factor);
            n /= factor;
            if (n > 1) {
                printf(" x ");
            }
        } else {
            factor++;
        }
    }
    printf("\n");
}

int main() {
    int N;
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        primeFactorization(N);
    }

    return 0;
}
