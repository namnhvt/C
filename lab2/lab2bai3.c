#include <stdio.h>

int main() {
    float d, m,n;
    printf("Enter distance (m): ");
    scanf("%f",&d);

    if (d<=2000) {
        printf("pay: 15000\n");
    }
    else if (d>2000 && d<= 30000) {
        m = 15000 + 2000*((d-20000)/250);
        printf("Pay: %f\n",m);
    }
    else  if (d > 30000) {
        n = 15000 + 2000*((30000-20000)/250);
        m = n + 5000*((d-30000)/1000);
        printf("Pay: %f\n",m);
    }
    }



