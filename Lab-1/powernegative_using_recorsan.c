#include<stdio.h>
int poweer(int n,int x){
    if(n==0){
        return 1;
    }
    else{
        return x*poweer(++n,x);
    }
}
void main(){
    int n,x;
    scanf("%d",&n);
    scanf("%d",&x);
    double p=poweer(n,x);
    printf("%lf",(1/p));
}