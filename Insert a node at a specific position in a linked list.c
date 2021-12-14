int count(SinglyLinkedListNode *llist)
{
    int c=0;
    SinglyLinkedListNode *temp=llist;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    return c;
    
}

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    int i;
    SinglyLinkedListNode *temp=llist;
    int n=count(llist);
    if(position>1 && position<n)
    {
        SinglyLinkedListNode *new=(SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
        new->data=data;
        new->next=NULL;
        for(i=1;i<=position-1;i++)
        temp=temp->next;
        new->next=temp->next;
        temp->next=new;
    }
    return llist;

}

