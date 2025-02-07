#include <stdio.h>

void convertToBinary(int num) {
    int binary[32];
    int index = 0;

    if (num == 0) {
        printf("0\n");
        return;
    }

    while (num > 0) {
        binary[index] = num % 2;
        num /= 2;
        index++;
    }

    // Print the binary array in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);
    convertToBinary(num);
    return 0;
}
