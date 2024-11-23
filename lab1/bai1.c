#include <stdio.h>

int main() {

    int number, value;
    printf("type in value:  ");
    scanf("%d", &number);


    while (number > 0) {
        value = number % 10;
        printf("%d ", value);
        number /= 10;
    

    }
}