#include <stdio.h>
#include <math.h>
int snt(int x){
    if(x<2){ return 0;}
    int y = sqrt(x);
    for(int i = 2;i<=y;++i){
        if(y%i==0){
            return 0;
        }
    }return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;++i){
        scanf("%d",&a[i]);
    }
    for(int i =0;i<n;++i){
        if(snt(a[i])){
            printf("%d ",a[i]);
        }
    }
}