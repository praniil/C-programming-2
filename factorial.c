#include<stdio.h>
int main(){
    int number, i, factorial;
    printf("enter a number:");
    scanf("%d", &number);
    factorial=1;
    for(i=(number); i>=1; --i){
        factorial= factorial * i;
    }
     printf("%d is the factorial of given number.", factorial);
    return 0;
}