#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;++i){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0; i<n; ++i)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d ",max);
    int flag=a[0];
    for(int i=0;i<n;++i){
      if(a[i]!=a[0]){
          flag=0;
          break;
        }else flag=1;
}
  if(flag==0){
    int max2=a[0];
    for(int i=0;i<n;++i){
        if((max2<a[i])&&(a[i]<max)){
            max2=a[i];
        }
    } printf("%d",max2);
  }else printf("-1");

}