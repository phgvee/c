#include <stdio.h>
#include <time.h>
int min(int a,int b){
  return  a < b ? a : b;
}
int max(int a, int b){
    return a > b ? a :b;
}
int main(){
    int n ;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;++i){
        scanf("%d",&a[i]);
    }
    clock_t start,end;
    double cpu_time_used;
    start = clock();
    for(int i = 0;i<n;++i){
        if(i == 0){ printf("%d %d\n",a[1]-a[0],a[n-1]-a[0]);}
        else if(i == n-1){printf("%d %d\n",a[n-1]-a[n-2],a[n-1]-a[0]);}
        else printf("%d %d\n",min(a[i]-a[i-1],a[i+1]-a[i]),max(a[i]-a[0],a[n-1]-a[i]));
    }
    end = clock();
    cpu_time_used = (double)(end - start)/CLOCKS_PER_SEC;
    printf("%lf",cpu_time_used);
}