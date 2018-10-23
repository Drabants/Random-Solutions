    static DoublyLinkedListNode sortedInsert(DoublyLinkedListNode head, int data) {
        DoublyLinkedListNode walker = head;
        DoublyLinkedListNode newNode = new DoublyLinkedListNode (data);
        if(data < head.data)
        {
            newNode.next = head;
            head.prev = newNode;
            head = newNode;
            return head;
        
        }
        while(walker.data < data && walker.next != null){
            walker = walker.next;
        }
        if(walker.data < data){
            walker.next = newNode;
            newNode.prev = walker;
        }else{
        newNode.next = walker;
        newNode.prev = walker.prev;
        walker.prev.next = newNode;
        walker.prev = newNode;
        }
        return head;

    }
