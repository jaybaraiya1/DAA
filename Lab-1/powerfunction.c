#include<stdio.h>
void main(){
    int n,x,p=1;
    scanf("%d",&x);
    scanf("%d",&n);
    while(n>0){
        p*=x;
        n--;
    }
    printf("%d",p);
}