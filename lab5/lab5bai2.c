#include <stdio.h>
#include <math.h>
int main(){
    int x,y,n;
    printf("enter x : ");
    scanf("%d",&x);
    printf("enter n : ");
    scanf("%d",&n);
    y=0;
    for(int i = 1; i<=n; i++){
        y = y + pow(x,i) ;
        printf("%d\n",y);
    }
}
