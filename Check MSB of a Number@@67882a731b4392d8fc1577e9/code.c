#include <stdio.h>

void checkMSB(int num) {
    int mask = 0x80000000; // Mask with only the MSB set
    if (num & mask) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    checkMSB(num);
    return 0;
}
