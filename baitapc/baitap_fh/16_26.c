#include <stdio.h>
void sxGiam(short a[], short n){
    for(short i = 0; i < n-1; ++i){
        for(short j = i+1; j < n; ++j){
            if(a[i]<a[j]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}
void sxTang(short a[], short n){
    for(short i = 0; i < n-1; ++i){
        for(short j = i+1; j < n; ++j){
            if(a[i]>a[j]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}
int main(){
    short testCase; scanf("%hd",&testCase);
    while(testCase--){
        short n;
        scanf("%hd",&n);
         short a[n],b[n];
         for(short i = 0; i < n; ++i ){
             scanf("%hd",&a[i]);
        }
         for(short i = 0; i < n; ++i){
             scanf("%hd",&b[i]);
         }
         sxTang(a,n);
         sxGiam(b,n);
         short c[n*2];
         short i = 0, j= 0,d = 0;
        while(i<n ){
      if(i%2==0){
          c[d++] = a[i];
          ++i;
      }else{
          c[d++] = b[i];
          ++i;
      }
    }
   
    for(short i =0;i<n*2;++i){
        printf("%d ",c[i]);
    }
}
}

     

