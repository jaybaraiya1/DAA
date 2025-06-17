#include<stdio.h>
void main(){
    int n,cd=0;
    scanf("%d",&n);
    while(n>0){
        n=n/10;
        cd++;
    }
    printf("%d",cd);
}