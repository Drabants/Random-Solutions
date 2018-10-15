DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode* currentNode = head;
    DoublyLinkedListNode* temp;
    while(currentNode->next){
        temp = currentNode->next;
        currentNode->next = currentNode->prev;
        currentNode->prev = temp;
        currentNode = currentNode->prev;
    }
        temp = currentNode->next;
        currentNode->next = currentNode->prev;
        currentNode->prev = temp;
    return currentNode;
}
