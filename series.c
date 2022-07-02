#include<stdio.h>
#include<math.h>
int main(){
    int number= -11, i;
    for(i=0; i<=15; ++i){
        number= number- pow(2,i);
    
    printf("%d", number);
    }
}
