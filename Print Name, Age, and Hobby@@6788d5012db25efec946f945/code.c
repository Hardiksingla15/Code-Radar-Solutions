#include <stdio.h>
int main(){
    char name[30], hobby[30];
    int age;
    scanf("%29s %d %29s", &name, &age, &hobby);
    printf("Name: %s\n %s", name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}