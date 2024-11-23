#include <stdio.h>
#include <stdbool.h>

bool check_prime(int x) {
    if (x < 2) {
        return false;
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);
    printf("Prime numbers are: ");
    for (int i = 2; i < N; i++) {
        if (check_prime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
