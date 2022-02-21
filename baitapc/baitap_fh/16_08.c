#include <stdio.h>
short max(short a,short b){
    return a>b?a:b;
}
int main(){
    short n;
    scanf("%hd",&n);
    int a[n];
    for(short i =0;i<n;++i){
        scanf("%d",&a[i]);
    }
    short res = 0, d =1;
    for(short i =0;i<n;++i){
        if(a[i]*a[i-1]<0){
            ++d;
        }
        else{
            d = 1;
        }
        res = max(res,d);
    }
    if(res == 1){
        printf("0");
    }else printf("%hd",res);
}