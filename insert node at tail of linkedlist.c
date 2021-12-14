SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *new=(SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    new->data=data;
    new->next=NULL;
    SinglyLinkedListNode* temp=head;
    if(head==NULL)
    {
        head=new;
        return head;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
            temp->next=new;
        
    } 
    return head;
}

