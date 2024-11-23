#include <stdio.h>
#include <math.h>
int main() {
long number;
printf("type number: ");
scanf("%d",&number);
int n = number;
int c = 0;
int numberArray[c];
while (n > 0)
{
    numberArray[c] = n % 10;
    n /= 10;
    c++;
}
long i =0,z= 0;
   while(i<c){
    z=z+pow(numberArray[i],c);
    printf("%d\n",z);
    i++;
   }
    if (z==number || (z >= number-1&&z<number)) {
    printf("%d is an Armstrong number",number);
        }
    else {
        printf("This is not an Armstrong number");
        }
}

