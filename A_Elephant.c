/// https://codeforces.com/contest/617/problem/A
/// A. Elephant

#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d", &n);
    s = (n/5) + (n%5!=0);

    /*
    if(n%5==0)
    {
        s=n/5;
    }
    else
    {
        s = (n/5)+1;
    } */
    printf("%d\n",s);

    return 0;
}
