#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
   if(a>b && a>c){
            if(c*c + b*b > a*a ){
            printf("Valid");
            }
   }else if(b>c && b>a){
            if(a*a + c*c > b*b ){
            printf("Valid");
            }
   }else if(c>a && c>b){
            if(a*a + b*b > c*c ){
            printf("Valid");
            }
   }else{
            printf("Invalid");
            }
   }
    return 0;
}