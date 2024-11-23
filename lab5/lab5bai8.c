#include <stdio.h>

int most_to_least(int n){
    int c = 0,arr[c];
    while (n>0){
        arr[c] = n%10;
        c++;
        n/=10;
    }
    int d = c; 
    for(int i = 0; i<c ; i++){
        for(int j = 0; j<d;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
        
            }
        }
    }
    for(int i = 0; i<c ; i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int N;
    printf("enter n-digit integer:  ");
    scanf("%d",&N);
    most_to_least(N);
    return 0;
}