#include <stdio.h>
int b[1000] = {0};
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i <n; ++i){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    for(int i =0; i <n;++i){
        if(b[a[i]]==1){
            printf("%d ",a[i]);
        }
    }return 0;
}