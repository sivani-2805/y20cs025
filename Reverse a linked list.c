SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    struct SinglyLinkedListNode* new_head = NULL;
    struct SinglyLinkedListNode* temp;
    
    while(head != NULL){
        temp = head->next;
        head->next = new_head;
        new_head = head;
        head = temp;
    }
    
    return new_head;

}
