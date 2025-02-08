#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a=="A"){
        printf("%s","Excellent");
    }else if(a=="B"){
        printf("%s","Good");
    }else if(a=="C"){
        printf("%s","Average");
    }else if(a=="D"){
        printf("%s","Below Average");
    }else if(a=="F"){
        printf("%s","Fail");
    }else{
        printf("%s","Invalid grade");
    }
    return 0;
}