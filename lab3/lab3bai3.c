#include <stdio.h>
 
 int main () {
    char op;
    int x,y,z;
    printf("enter :");
    scanf("%d%c%d",&x,&op,&y);
    if(op == '-') {
        z = x - y;
        printf("%d - %d = %d",x,y,z );
        
    }
    else if(op =='+') {
        z = x + y;
        printf("%d + %d = %d",x,y,z );
    }
    
    else if (op =='/' ) {
        z = x/y;
    printf("%d / %d = %d",x,y,z );
    }

    else if (op == '*') {
        z = x * y;
    printf("%d * %d = %d",x,y,z ); 
    }
return 0;
 }