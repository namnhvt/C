#include <stdio.h>
#include <limits.h>
int main() {
    int number, min = INT_MAX, max = INT_MIN;

    printf("Input number( enter 0 to stop ):  ");
    

    while(1) {
        scanf("%d",&number);
        if (number == 0) {
            break;
        
        }
        if  (number > max) {
            max = number;
        }
        if (number < min) {
            min = number;
        }
    }
    
    if (min == INT_MAX || max == INT_MIN) {
        printf("No values were entered");
    }
    else {
        printf("Max is: %d\n Min is: %d",max, min);
    }

}



