#include <stdio.h>
#include <stdlib.h>
int main() {
    char a;
    scanf("%d", &a);
    if(a>='A' && a<='Z'){
        printf("Upppercase");
    }else{
        printf("Lowercase");
    }
    return 0;
}