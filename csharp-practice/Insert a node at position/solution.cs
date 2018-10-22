    static SinglyLinkedListNode insertNodeAtPosition(SinglyLinkedListNode head, int data, int position) {
        SinglyLinkedListNode walker = head;
        for(int i=0; i<position-1; i++){
            walker = walker.next;
        }
        SinglyLinkedListNode newNode = new SinglyLinkedListNode(data);
        newNode.next = walker.next;
        walker.next= newNode;
        return head;
    }
