/// https://codeforces.com/contest/25/problem/A
/// A. IQ test - codeforces

#include<stdio.h>
int main()
{
    int n,i,odd=0,even=0,ans;
    scanf("%d",&n);
    int arr[105];
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    if(even==1)
    {
        for(i=1; i<=n; i++)
        {

            if(arr[i]%2 == 0)
            {
                ans=i;
            }
        }
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            if(arr[i]%2 != 0)
            {
                ans=i;
            }

        }
    }

    printf("%d",ans);

    return 0;
}



