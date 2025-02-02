#include <stdio.h>

int main() {
    int a, b, c, sum;
    float avg;
    scanf("%d, %d, %d", &a ,&b, &c);
   
    avg = (a + b + c) / 3.0;
    printf("Average: %.2lf", avg);
    return 0;
}