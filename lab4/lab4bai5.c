#include <stdio.h>
//12345678910111213141516171820
int findNthDigit(int n) {
    int length = 0, digits = 1, start = 1;

   
    while (n > length + digits * 9 * start) {
        n -= digits * 9 * start; 
        length += digits * 9 * start;
        digits++;           
        start *= 10;            
    }
    int num = start + (n - 1) / digits;
    printf("%d",num);
    
    int digitIndex = (n - 1) % digits;
    char numStr[12]; 
    sprintf(numStr, "%d", num);
    printf("%d\n",digitIndex);
    return numStr[digitIndex] - '0'; 
}
int main() {
    int n;
    printf("enter the value of n (n > 0): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("enter a positive integer.\n");
    } else {
        int result = findNthDigit(n);
        printf("The %d-th digit in the series is: %d\n", n, result);
    }

    return 0;
}
