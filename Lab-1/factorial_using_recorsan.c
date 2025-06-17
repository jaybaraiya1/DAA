#include<stdio.h>
int sf(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*sf(n-1);
    }
}
void main(){
    int n;
    scanf("%d",&n);
    printf("%d",sf(n));
    
}