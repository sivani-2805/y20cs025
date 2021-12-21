#include<stdio.h>
#include<stdlib.h>
struct DLLNode
{
    int val;
    struct DLLNode *prev,*next;
};
struct DLLNode*CreateNode()
{
    int val;
    struct DLLNode *newn;
    newn=(struct DLLNode*)malloc(sizeof(struct DLLNode));
    printf("enter value for node");
    scanf("%d",&val);
    newn->val=val;
    newn->prev=NULL;
    newn->next=NULL;
    return newn;
}
struct DLLNode *createlist(int size)
{
    int i;
    struct DLLNode*head=NULL,*tail,*newn;
    for(i=0;i<size;i++)
    {
        newn=CreateNode();
        if(head==NULL)
            head=newn;
        else
        {
            tail->next=newn;
            newn->prev=tail;
        }
        tail=newn;
    }
    return head;
}
void printlist(struct DLLNode *head)
{
    struct DLLNode *t=head;
    if(head!=NULL)
    {
        while(t)
        {
            printf("%d\t" ,t->val);
            t=t->next;
        }
        printf("\n");
    }
}
void printlist_reverse(struct DLLNode *head)
{
    struct DLLNode *t=head;
    if(head!=NULL)
    {
        while(t->next)
        t=t->next;
        while(t)
        {
            printf("%d\t" ,t->val);
            t=t->prev;
        }
    }
}
int listlength(struct DLLNode *head)
{
    int c=0;
    struct DLLNode *temp=head;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }return c;
}
int main()
{
    int n,l,c;
    struct DLLNode *head=NULL;
    printf("enter number of nodes");
    scanf("%d" ,&n);
    head=createlist(n);
    printf("the entered list is:");
    printlist(head);
    printf("the reverse list is:");
    printlist_reverse(head);
    printf("the length of list is:");
    l=listlength(head);
    printf("%d" ,l);
}
