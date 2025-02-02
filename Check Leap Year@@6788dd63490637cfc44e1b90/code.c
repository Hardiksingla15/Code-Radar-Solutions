#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int year;
    scanf("%d", &year);
    printf("%s",(year%4 == 0) ? "Leap Year" : "Not a Leap Year");
    return 0;
}