#include <stdio.h>  
#include <stdlib.h>  
void createlist(int n);
void display();
struct node{  
    int data;  
    struct node *next;  
}*x,*head,*tail;
int main()
{
    int n;
    printf("enter number of nodes");
    scanf("%d" ,&n);
    createlist(n);
    printf("the entered list is");
    display();
}
void createlist(int n){ 
    int i,data;
    struct node *p= (struct node*)malloc(sizeof(struct node));  
    if(p == NULL){  
        printf("memory cannot be allocated");
    }
    else
    {
        printf("input data for node 1");
        scanf("%d",&data);
        p->data=data;
        tail=p;
    }
    for(i=2;i<=n;i++)
    {
        head=(struct node*)malloc(sizeof(struct node));
        if(head==NULL)
        {
            printf("memory cannot be allocated");
            break;
        }
        else{
            printf("input data for node %d" ,i);
            scanf("%d",&data);
            head->data=data;
            tail->next=head;
            tail=head;
        }
    }
    tail->next=p;
    x=p;
}

void display()
{  
    struct node *t = x;  
    if(x == NULL){  
        printf("List is empty");  
    }  
    else{  
        printf("nodes of circular list is: \n");  
        while(t->next!=x)
        {
            printf("%d\t",t->data);
            t=t->next;
        }
        printf("%d",t->data);

    }  
}  
