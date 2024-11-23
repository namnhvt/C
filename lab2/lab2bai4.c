#include <stdio.h>
 int main(){
    int i;
    char week[7][10] = { "Sunday","Monday" ,"Tuesday", "Wednesday","Thusday","Friday","Saturday"};
    printf("Enter day: ");
    scanf("%d",&i);
    printf("%s",week[i-1]);
 }