#include <stdio.h>
int Min(int a , int b){
    return a>b?b:a;
}
int Max(int a,int b){
    return a>b?a:b;
}
int c[100]= {0};
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n],b[m];
    int min = 1e9, max = -1e9;
    for(int i = 0; i < n; ++i){ 
    scanf("%d",&a[i]);
    c[a[i]]++;
    min = Min(min,a[i]), max = Max(max,a[i]);
    }
    for(int i = 0; i < m; ++i){
         scanf("%d",&b[i]);
     c[b[i]]++;
    min = Min(min,b[i]), max = Max(max,b[i]);    
    }
    for(int i = min;i<=max;++i){
        if(c[i]){
            printf("%d ",i);
        }
    }
    printf("\n");
    for(int i = min;i<=max;++i){
        if(c[i]==2){
            printf("%d ",i);
        }
    }
}