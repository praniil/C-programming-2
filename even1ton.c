#include<stdio.h>
int main(){
    int number, i;
    printf("enter any number:");
    scanf("%d", &number);
    for(i=1; i<=number; ++i){
        if( i % 2==0){
            printf("%d", i);
        }
    }
}