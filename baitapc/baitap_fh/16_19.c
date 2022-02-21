#include <stdio.h>
int b[50]={0};
int main(){
    short n;
    scanf("%hd",&n);
    int a[n];
    for( short i = 0; i <n;++i){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
     short flag = 0;
    for(int i =0;i<n;++i){
        if(b[a[i]]>1){
            printf("%d",a[i]);
            flag = 0;
            break;
        }
    }
    if(flag==1){
        printf("-1");
    }
    
}