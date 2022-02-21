
#include <stdio.h>

int kt(int a[], int vt){
    for(int i = 0 ;i <vt;++i){
        if(a[i]>=a[vt]){
            return 0;
        }
    }return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; ++i){
        scanf("%d",&a[i]);
        
    }
    
    for(int i = 0;i<n;++i){
        if(kt(a,i)){
            printf("%d ",a[i]);
        }
    }
   
    return 0;
}