#include <stdio.h>

int main() {
    
    int a=1,N,c=0,arr[c],temp;
    printf("type in interger: ");
    scanf("%d",&N);
    while (N>0) {
        arr[c] = N % 10;
        N/=10;
        c++;
        
    }
    printf("\n");
    for (int i = 0;i < c-1; i++) {
        if (arr[i] > arr[a]){ 
            temp = arr[i];
            arr[a] = temp;
        }
        else if (arr[i] < arr[a]){
            temp = arr[a];
        }
        a++;
    }
    printf("maximum digit is: %d\n",temp);
}