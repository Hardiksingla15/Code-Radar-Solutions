#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
   if(a+c>b && a+b>c && b+c>a){
        printf("Valid");
   }else{
        printf("Invalid");
            }
   
    return 0;
}