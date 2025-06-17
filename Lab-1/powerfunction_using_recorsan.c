#include<stdio.h>
int p(int x,int n){
        if(n==0){
            return 1;
        }
        else{
            return x*p(x,n-1);
        }
}
void main(){
    int n,x;
    scanf("%d",&x);
    scanf("%d",&n);
    printf("%d",p(x,n));
}