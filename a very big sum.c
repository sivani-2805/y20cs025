#include<stdio.h>
int main()
{
    long long int a[1000],n,i,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%lld",&a[i]);
    s+=a[i];
    }
    printf("%lld",s);
}
