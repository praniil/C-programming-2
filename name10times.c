#include<stdio.h>
int main(){
    char name[500];
    int i;
    printf("enter your name:");
    scanf("%s", &name);
    for(i=1; i<=10; ++i){
        printf("%s\t", name);
    }
    return 0;
}