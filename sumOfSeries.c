#include<stdio.h>
int main(){
    int number=1, i, sum=0;
    int difference=4;
    for(i=0; i<=3; ++i){
        
        sum= sum+ difference*i+ number;
    }
    printf("the sum of the series is %d", sum);
    return 0;
}
