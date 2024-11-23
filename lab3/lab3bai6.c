#include <stdio.h>
#include <stdlib.h>
int main() {
    int x,y,a,b,z;
    printf("enter: \n");
    scanf("%d %d",&x,&y);
    a=x;
    b=y;
    if (x<=0 || y<=0){
        printf("wrong interger!!");
        return 0;
    }
    while (y>0) {
        z = abs(y -x);
        x = y;
        y= z;
    }
printf("%d is the GCD of (%d,%d)",x,a,b);
return 0;
}