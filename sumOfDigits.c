#include<stdio.h>
int main(){
    int number, rem, sum=0;
    printf("enter a number:");
    scanf("%d", &number);
    while(number>0){
        rem= number%10;
        number=number/10;
        sum=sum+rem;
    }
    printf("the sum of the digits of the number is :%d", sum);
}