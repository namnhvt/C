#include <stdio.h>

int main() {
    int count = 0;
    for (int x = 0; x <= 30; x++) {       // max 1,000 VND notes is 30
        for (int y = 0; y <= 15; y++) {    // max 2,000 VND notes is 15
            for (int z = 0; z <= 6; z++) { // max 5,000 VND notes is 6
                for (int w = 0; w <= 3; w++) { // max 10,000 VND notes is 3
                    if (1000 * x + 2000 * y + 5000 * z + 10000 * w == 30000) {
                        printf("%d notes of 1,000 VND + %d notes of 2,000 VND + %d notes of 5,000 VND + %d notes of 10,000 VND\n", x, y, z, w);
                        count++;
                    }
                }
            }
        }
    }
    printf("Total combinations: %d\n", count);
    return 0;
}
