#include <stdio.h>

int main()
{
   int t,k;
   scanf("%d",&t);
   for(k=0;k<t;k++)
   {
        int i,j;
        long int a[1000000],n,count=0,temp,add;
        scanf("%ld",&n);
        for(i=0;i<n;i++)
            scanf("%ld",&a[i]);
        add=0;
        for(i=1;i<n;i++)
        {   
            temp=a[i];
            count=0;
            j=i-1;
            while(a[j]>temp && j>=0)
            {
                    
                    a[j+1]=a[j];
                    count+=1;
                    j-=1;
            }
            a[j+1]=temp;
            add+=count;
        }
        printf("%ld\n",add);
   }
   return 0;
}

 


