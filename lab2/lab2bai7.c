#include <stdio.h>

int main() {
    int x,i;
    printf("type in number to check: ");
    scanf("%d",&x);
    if (x < 2) {
        printf("not a prime number\n");
    }
    for ( i = 2; i <= x; i++) {
        printf("%d\n",i);
        
        if (x % i == 0) {
            printf("not a prime number\n");
        }
    }
    if ((x%i!=0 && x - i>0) || x == 2) {
        printf("PRIME NUMBER!");
    }


    return 0;
}