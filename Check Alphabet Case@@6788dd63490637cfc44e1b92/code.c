#include <stdio.h>
#include <stdlib.h>
int main() {
    char a;
    scanf("%c", &a);
    if(a>='A' && a<='Z'){
        printf("Uppercase");
    }else if(a>='a' && b<='z'){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
    return 0;
}