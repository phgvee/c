#include <stdio.h>

int KtTang(int a[],int n)
{
    int dem=0;
    for(int i=0; i<n; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            if(a[i]>=a[j])
            {
                dem++;
            }
        }
    }
    if(dem==0)
    {
        printf("YES");
    }
    else printf("NO");
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; ++i)
    {
        scanf("%d",&a[i]);
    }
    KtTang(a,n);
}