#include<stdio.h>

int main(){
    int n,m,i=1,b=0;
    printf("enter the number:");
    scanf("%d",&n);
    m=n;

    while(n>0){
        
        b=b+(n%2)*i;
        n=n/2;
        i=i*10;
    }
    printf("%d is %d in binary",m,b);
}