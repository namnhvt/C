#include <stdio.h>

int Reverse_int(int n){
    int x=0,arr[x];

    while(n>0){
        arr[x] = n%10;
        n/=10;
        x++;
    }
    for(int i = 0; i<x; i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int n;
    printf("enter: ");
    scanf("%d",&n);
    Reverse_int(n);
    return 0;

}