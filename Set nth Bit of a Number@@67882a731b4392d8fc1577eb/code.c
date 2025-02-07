#include <stdio.h>

void swap(int a, int b) {
    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping: a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    swap(x, y);
    return 0;
}


