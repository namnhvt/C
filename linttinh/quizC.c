#include <stdio.h>

int main() {

    int n,i, y=0;
    int arr[y];
    printf("type in number to check: ");
    while (n) {
    scanf("%d",&n);
        for ( i = 2; i < n; i++) {
        
        if (n % i == 0) {
            break;
        }
        
        else if ((n%i> 0 && n - i>0) || n == 2) {
        arr[y] = n;
        y++;
        
        }
    }    
   }
    printf("%d",arr[0]);
    return 0;
}