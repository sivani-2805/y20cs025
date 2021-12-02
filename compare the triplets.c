#include<stdio.h>
int main()
{
    int a[3],b[3],c[2];
    int i;
    for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    for(i=0;i<3;i++)
    scanf("%d",&b[i]);
    c[0]=0,c[1]=0;
    for(i=0;i<3;i++)
    {
    if(a[i]>b[i])
    {
        c[0]+=1;
    }
    if(a[i]<b[i])
    {
        c[1]+=1;
    }
    }
    printf("%d %d",c[0],c[1]);
}
