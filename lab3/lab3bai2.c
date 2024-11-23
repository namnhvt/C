#include <stdio.h>
int main() {
int i,j,k,l,count = 0;

for( i = 0; i <= 30; i++) {
    for(j = 0; j <= 15; j++) {
        for(k = 0; k <= 6; k++) {
            for(l = 0; l <= 3; l++) {
                if(1000*i + 2000*j + 5000*k + 10000*l == 30000) {
                    printf("%d notes of 1000 + %d notes of 2000 + %d notes of 5000 + %d notes of 10000\n",i,j,k,l);
                    count++;                
                }
            }
        }
    } 
  }
  printf("there are %d to solve",count);
}