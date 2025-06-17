#include<stdio.h>
void main(){
    int n,x;
    double p=1;
    scanf("%d",&x);
    scanf("%d",&n);
    while(n<0){
        p*=x;
        ++n;
    }
    printf("%lf",(1/p));
}