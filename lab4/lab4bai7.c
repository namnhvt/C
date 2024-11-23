#include<stdio.h>
#include<math.h>

int main(){
    int x,n,temp1,temp2,temp3;
    printf("type in x: ");
    scanf("%d",&x);
    printf("type in n: ");
    scanf("%d",&n);
    temp1 = sqrt(x);
    temp3 = x;
    for(int i = 0; i < n; i++) {
         
        temp2 = temp3 + temp1;
        x = temp2;
        temp1 = sqrt(x);
        
    }
printf("%f\n",(float)temp1);

}
