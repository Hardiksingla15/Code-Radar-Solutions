#include <stdio.h>
int main(){
    char name[30], hobby[30];
    int age;
    scanf("%s %d %s", &name, &age, &hobby);
    printf("Name: %s\n %s", name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}