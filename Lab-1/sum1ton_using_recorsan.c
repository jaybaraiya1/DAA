#include<stdio.h>
int sn(int n){
    int i=n;
    if(n<=0){
        return 0;
    }
    else{
        return i+sn(n-1);
    }
}
void main(){
    int n;
    scanf("%d",&n);
    printf("%d",sn(n));
}