#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long long a[n];
    for(int i =0;i<n;++i){
        scanf("%d",&a[i]);
    }
    int max1,max2;
    for(int i =1;i<n;++i){
        if(a[i]>max1){
            max2 = max1;
            max1 = a[i];
        }else if(a[i]>max2){
            max2 = a[i];
        }
        
    }printf("%d %d",max1,max2);
    


}