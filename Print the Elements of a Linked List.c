void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *temp=head;
    if(head==NULL)
    {
        printf("no list to print");
    }
    else {
    {
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
            
        }
    }
    }


}

