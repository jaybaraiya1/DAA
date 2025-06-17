#include<stdio.h>
int cd(int n){
    if(n<=0){
        return 0;
    }
    else{
        return 1+cd(n/10);
    }
}
void main(){
    int n;
    scanf("%d",&n);
    printf("%d",cd(n));
}