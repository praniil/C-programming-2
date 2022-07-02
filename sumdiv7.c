#include<stdio.h>
int main(){
    int number=100, i, sum=0;
    for(i=number; i<=200; i++){
        if(i % 7==0 && i % 5!=0){
            sum = sum + i;
        }
    }
    printf("the required sum is: %d", sum);
    return 0;
}