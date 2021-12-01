#include<stdio.h>
int main()
{
    int n,i,a[10000],t;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        t=a[n-i-1];
        a[n-i-1]=a[i];
        a[i]=t;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    
    
    
}
