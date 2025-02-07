#include <stdio.h>

int countLeadingZeros(int num) {
    int count = 0;
    while ((num & 0x80000000) == 0) {
        count++;
        num <<= 1;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", countLeadingZeros(num));
    return 0;
}
