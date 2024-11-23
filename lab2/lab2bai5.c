#include <stdio.h>
#include <ctype.h>
int main(){
    char cha;
    printf("Enter charater to check: ");
    scanf("%c",&cha);
    cha = tolower(cha);
    if (cha <'a'|| cha > 'z'){ 
        printf("not a character");
    }
    else if (cha == 'a'|| cha == 'e'||cha =='i'||cha =='o'||cha =='u') {
        printf("vowels");
    }
    else{
        printf("sonsoneant");
    }
}



