#include<stdio.h>
 int main() {
    int i;
    printf("enter year to check: ");
    scanf("%d",&i);
    if (i % 4 != 0) {
        printf("not a leap year");
    }
    else if (i%4==0) {
        if (i%100==0) {
            printf("not a leap year");
        
        }
        else if (i%100!=0) {
            printf("LEAP YEAR!!");
        }
        else if (i%400==0) {
            printf("LEAP YEAR!");
        }
        else {
            printf("not a leap year");
        }
        }
    }

 