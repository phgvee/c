#include <stdio.h>
int main(){
    short n;
    scanf("%hd",&n);
    int a[n];
    for(short i = 0;i <n; ++i){
        scanf("%d",&a[i]);
    }
    for(short i =0;i <n-1;++i){
        for(int j=i+1;j<n;++j){
            if(a[i]>a[j]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for(short i =0;i<n;++i){
        if(a[i]%2==0){
            printf("%d ",a[i]);
        }
    }
    for(short i =0;i<n;++i){
        if(a[i]%2!=0){
            printf("%d ",a[i]);
        }
    }
}