#include <stdio.h>

 int sum (int n) {
    int i;
    for( i = 1; i<=n; i++) {
        i = i*i;
    }
    printf("%d",i);

    
 }

int main () {
    int n;
    printf("enter number: ");
    scanf("%d",&n);
    sum(n);




}
