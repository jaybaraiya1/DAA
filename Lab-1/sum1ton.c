#include<stdio.h>
void main(){
    int n,sn=0;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        sn+=i;
    }
    printf("%d",sn);
}