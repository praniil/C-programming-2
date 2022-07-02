#include<stdio.h>
#include<math.h>
int main(){
    int num1, i, num2, rem, arm=0,length, original, org;
    printf("enter any two numbers:");
    scanf("%d %d", &num1, &num2);
    original= i;
    org= i;
    for(i=num1; i<=num2; ++i){
        while(i>0){
            rem= i % 10;
            length= ++length;
            i= i/10;
        }
        while(original>0){
            rem= original % 10;
            original= original/10;
            arm= arm+pow(rem, length);
        }
        if(org==arm){
        printf("%d", arm);
        }
    }
}


