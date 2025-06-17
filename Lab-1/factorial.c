#include<stdio.h>
void main(){
    int n,sf=1;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        sf*=i;
    }
    printf("%d",sf);
}