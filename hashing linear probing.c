#include<stdio.h>
#include<stdlib.h>
int hash(int x)
{
        return x%10;
}
void insert(int a[10],int x)
{
        int flag=0,j;
        int i=hash(x);
        if(a[i]==-1)
        {
                a[i]=x;
                flag=1;
        }
        else
        {
                for(int j=i+1;j<10;j++)
                {
                        if(a[j]==-1)
                        {
                                a[j]=x;
                                flag=1;
                                break;
                                }
                }
                for(j=0;j<i&&flag==0;j++)
                {
                        if(a[j]==-1)
                        {
                                a[j]=x;
                                flag=1;
                                break;
                        }
                }
        }
                if(flag==0)
                {
                        printf("there is no slot for %d ele",x);
                }

}
void search(int a[10],int x)
{
        int flag=0,j,i;
        i=hash(x);
        if(a[i]==x)
        {
         flag=1;
        }
        else
        {
                for(j=i+1;j<10;j++)
                {
                        if(a[j]==x)
                        {
                                flag=1;
                                break;
                        }
                }
                for(j=0;j<i&&flag==0;j++)
                {
                        if(a[j]==x)
                        {
                                flag=1;
                                break;

                        }
                }
        }
        if(flag==1)
        {
        printf("ele %d is found",x);
        }
        else
        {
                printf("ele %d is not found",x);
        }
}
void display(int a[10])
{
        int i;
        for(i=0;i<10;i++)
        {
                printf("%d\t",a[i]);
        }
}
void delete(int a[10],int x)
{
        int flag=0,j;
        int i=hash(x);
        if(a[i]==x)
        {
                a[i]=-1;
                flag=1;
        }
        else
        {
                for(j=i+1;j<10;j++)
                {
                        if(a[j]==x)
                        {
                                a[j]=-1;
                                flag=1;
                        }
                }
                for(j=0;j<i&&flag==0;j++)
                {
                        if(a[j]==x)
                        {
                                a[j]=-1;
                                flag=1;
                        }
                }
        }
        if(flag==1)
        {
                printf("%d ele is deleted",x);
        }
        else
         {
                printf("%d ele is not found",x);
        }
}

int main()
{
        int a[10],i,x,t;
        for(i=0;i<10;i++)
        {
                a[i]=-1;
        }
        while(1)
        {
                printf("1:insert\n 2:display\n 3:search\n 4:delete\n 5:exit\n");
                printf("enter choice");
                scanf("%d",&t);
                switch(t)
                {
                        case 1:printf("enter ele to be inserted");
                               scanf("%d",&x);
                               insert(a,x);
                               break;
                        case 2:printf("ele in hash table are");
                         display(a);
                               break;
                        case 3:printf("enter ele to be searched");
                               scanf("%d",&x);
                               search(a,x);
                               break;
                        case 4:printf("enter ele to be deleted");
                               scanf("%d",&x);
                               delete(a,x);
                               break;
                        case 5:exit(0);
                               break;
                        default:printf("check choice");
                }
        }
}
