#include<stdio.h>
int main(){
    int i;
    for(i=100; i>=10; --i){
        if(i % 11== 0 && i% 7!=0){
            printf("%d\t", i);
        }
    }
    return 0;
}