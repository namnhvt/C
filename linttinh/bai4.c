#include <stdio.h>
int main() {
    double  x, y, z , result;     

    printf("Enter x: ");
    scanf("%lf", &x);
    printf("Enter y: ");
    scanf("%lf",&y);
    z = x*y;

    result = y*(-2*z - 4*y + 10) - z*(3*z - 7*x + 15) + x*(2*x - 3) + 6;
    printf("The result of the function is:  %.3lf",result);
    return 0;
    

}