#include <stdio.h>
#include <time.h>
void min(int a[100],int n){
    int min = a[0];
    for(int i =0;i<n;++i){
        if(a[i]<min){
            min = a[i];
        }
    }printf("%d",min);
}
void max(int a[100],int n){
    int max = a[0];
    for(int i =0;i<n;++i){
        if(a[i]>max){
            max = a[i];
        }
    }printf("%d ",max);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[100];
    for(int i =0;i<n;++i){
        scanf("%d",&a[i]);
    }
    clock_t end, start;
    double time;
    start = clock();
    max(a,n);
    min(a,n);
    end = clock();
    time = (double)(end - start)/ CLOCKS_PER_SEC;
    printf("%lf",time);

}