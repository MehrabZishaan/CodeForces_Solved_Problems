/// https://codeforces.com/contest/231/problem/A
///A. Team - codeforces
#include<stdio.h>

int main()
{
    int n,i,a,b,c;
    int sum =0;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d %d %d", &a,&b,&c);
        if(a+b+c >= 2)
            sum++;
    }
    printf("%d\n",sum);
    return 0;
}




