#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,x1,x2,z;
    printf("type a: ");
    scanf("%f",&a);
    printf("type b: ");
    scanf("%f",&b);
    printf("type c: ");
    scanf("%f",&c);
    z = b*b - 4*a*c;
    x1 = (-b + sqrt(z))/2*a;
    x2 = (-b - sqrt(z))/2*a;
    printf("%.3fx^2 + %.3fx + %.3f\n",a,b,c);
    printf("x1 = %.2f\nx2 = %.2f\n",x1,x2);
}