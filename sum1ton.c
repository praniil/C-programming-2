#include<stdio.h>
int main(){
    int number, sum= 0, i;
    printf("enter a number:");
    scanf("%d", &number);
    for(i=1; i<=number; i++){
    sum= sum +i;
    }
    printf("sum is %d", sum);

}