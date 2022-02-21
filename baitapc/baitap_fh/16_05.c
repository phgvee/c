#include <stdio.h>
#include <stdbool.h>

bool Check(short a[], short n)
{
    short r25 = 0, r50 = 0;
    for (short i = 0; i < n; ++i)
    {
        if (a[i] == 25)
        {
            ++r25;
        }
        else if (a[i] == 50)
        {
            if (r25 == 0)
            {
                return false;
            }
            --r25;
            ++r50;
        }
        else
        {
            if (r25 == 0 || ((r25 * 25 + r50 * 50) < 75))
            {
                return false;
            }
            if (r50 != 0)
            {
                --r25;
                --r50;
            }
            else
            {
                r25 -= 3;
            }
        }
    }
    return true;
}
int main()
{
    short n;
    scanf("%hd", &n);
    short a[n];
    for (short i = 0; i < n; ++i)
    {
        scanf("%hd", &a[i]);
    }
    if (Check(a, n))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}