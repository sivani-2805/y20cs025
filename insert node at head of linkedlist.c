SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode *new=(SinglyLinkedList *)malloc(sizeof(SinglyLinkedListNode));
    new->data=data;
    new->next=NULL;
    if(llist==NULL)
    {
        llist=new;
    }
    else 
    {
      new->next=llist;
      llist=new;    
    }
    return llist;

}

