#include<stdio.h>
int main(){
    int number=1, sum=1, i;
    printf("%d\t", number);
    for(i=1; i<=18; i=i+2){
        
        sum= sum+ i;
        printf("%d\t", sum);
        
    }
}