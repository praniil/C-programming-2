#include<stdio.h>
int main(){
    int a=0 , b=1, c, i, m;
    printf("number of terms needed to print:");
    scanf("%d", &m);
    printf("%d \t",b);
    for(i=1; i< m; ++i){
        c= a+b;
        a=b;
        b=c;
        
        printf("%d \t",c);
        
       
    }
    return 0;
}