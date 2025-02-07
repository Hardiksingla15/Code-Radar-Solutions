#include <stdio.h>
int main() {
    int a,i;
    int isprime = 1;
    scanf("%d",&a);
    if(a<=1){
        isprime=0;
    }else{
        for(i=2;i <= a/2;++i){
            if(a%i==0){
                isprime=0;
             break;
            }
        }
    }
    if(isprime){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}