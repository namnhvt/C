#include <stdio.h>

int main() {
    int  n, F;
    printf("enter interger : ");
    scanf("%d", &n);
    if (n<=0) {
        printf("Invalid interger");
    }
    else if (n % 2 == 0) {
        F = 1;
        for(int i = 2; i <= n; i+=2) {
            F = F*i;
            }
        printf("F = %d\n",F);

    } 
    else if (n % 2 ==1) {
        F = 1;
        for(int i = 1; i <=n; i+=2) {
            F = F*i;
        }
        printf("F = %d\n",F);
    }
    return 0;        
    }
