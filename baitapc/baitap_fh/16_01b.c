#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;++i){
        scanf("%d",&a[i]);
    }
    int dc=0; 
    int dl = 0;
    for(int i =0;i <n;++i){
        if(a[i]%2==0){
            dc++;
        }else {
            dl++;
        }
    }
    printf("%d %d",dc,dl);
}