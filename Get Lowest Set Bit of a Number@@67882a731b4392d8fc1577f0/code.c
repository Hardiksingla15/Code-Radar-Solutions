#include <stdio.h>

void getLowestSetBitPosition(int num) {
    if (num == 0) {
        printf("-1\n"); // If the number is 0, there is no set bit
        return;
    }
    int position = 0;
    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }
    printf("%d\n", position);
}

int main() {
    int num;
    scanf("%d", &num);
    getLowestSetBitPosition(num);
    return 0;
}
