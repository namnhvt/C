#include <stdio.h>

void Int_to_Binary(int x){
    int Arr[32];
    int i = 0;
    while(x>0) {
        Arr[i] = x%2;
        x = x/2;
        i++;
    }
    for(int j = i - 1; j>=0; j--){
    printf("%d", Arr[j]);
    }
}
int main(){
    int x;
    printf("enter number:  ");
    scanf("%d",&x);
    Int_to_Binary(x);
    return 0 ;

}

