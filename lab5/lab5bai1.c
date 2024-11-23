#include<stdio.h>
int main(){
    int num, x = 0,n;
    printf("enter n: ");
    scanf("%d",&n);
    for (int i = 1; i<=n;i++){
        num = i*(i+1);
        x = x+num;
        printf("%d ",x);
    }
}