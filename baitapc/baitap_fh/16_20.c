#include <stdio.h>
int main(){
    short n,m;
    scanf("%hd%hd",&n,&m);
    int a[n],b[m];
    for(short i = 0;i <n; ++i){ scanf("%d",&a[i]);}
    for(short i = 0; i<m;++i){ scanf("%d",&b[i]);}
    short i=0,j=0,d=0;
    int c[n+m];
    while(i<n && j<m){
      if(a[i]<=b[j]){
          c[d++] = a[i];
          ++i;
      }else{
          c[d++] = b[j];
          ++j;
      }
    }
    while(i<n){
        c[d++] = a[i++];
    }
    while(j<m){
        c[d++] = b[j++];
    }
    for(short i =0;i<n+m;++i){
        printf("%d ",c[i]);
    }
}