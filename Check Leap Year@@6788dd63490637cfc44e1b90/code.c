#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int year;
    scanf("%d", &year);
    
    if((year%4) != 0){
        printf("Not a Leap Year");
    }else if((year%400)==0){
        printf("Leap Year")
    }else{
        printf("Leap Year");
    }return 0;
}