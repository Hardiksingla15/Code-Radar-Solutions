#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a<=1){
        printf("Not Prime");
    }else{
        for(i=2,i<=(a/2),++i){
            if(a%i==0){
                printf("Not Prime")
            }break 
            else{
                printf("prime")
            }
        }
    }
    
    return 0;
}