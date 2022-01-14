#include <stdio.h>
void NhapMaTran(int a[50][50], int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int a[50][50];
    NhapMaTran(a, m, n);
    int res = -1e9;
    int hang, cot;
    for (int i = 0; i < m; ++i)
    {
        int s = 0;
        for (int j = 0; j < n; ++j)
        {
            s += a[i][j];
        }
        if (res < s)
        {
            res = s;
            hang = i;
        }
    }
    res = -1e9;
    for (int i = 0; i < m; ++i)
    {
        int s = 0;
        for (int j = 0; j < n; ++j)
        {
            if (j != hang)
            {
                s += a[j][i];
            }
        }
        if (res < s)
        {
            res = s;
            cot = i;
        }
    }
    for (int i = 0; i < m; ++i)
    {
        if (i != hang)
        {
            for (int j = 0; j < n; ++j)
            {
                if (j != cot)
                {
                    printf("%d ", a[i][j]);
                }
            }
            printf("\n");
        }
    }

    printf("Hello");
    printf("phuongvy");
    printf("Viet Nam");
}