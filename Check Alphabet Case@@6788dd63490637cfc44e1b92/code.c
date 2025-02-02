#include <stdio.h>
#include <stdlib.h>
int main() {
    char a;
    scanf("%d", &a);
    if(a>='A' && a<='Z'){
        printf("Upppercase");
    }else if(a>='a' && a<='z'){
        printf("Lowercase");
    }
    return 0;
}