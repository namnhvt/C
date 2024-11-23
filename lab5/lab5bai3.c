#include <stdio.h>
#include <math.h>

float Pi_cal( int n) {
    float X=0,pi;
    printf("N\t\tPi\n");
    for(int i = 1; i<=n;i++ ){
        X = X +  1.0/(i*i);
        pi= sqrt(X*6);
        if(i>=10){
            
            printf("%f\t\t%f\n",(float)i,(double)pi);
        }
    }
}
int main(){
    int N;
    printf("Enter N: ");
    scanf("%d",&N);
    Pi_cal(N);
    return 0 ;
}