    static int findMergeNode(SinglyLinkedListNode head1, SinglyLinkedListNode head2) {
        IList<SinglyLinkedListNode> head1LinkedList = new List<SinglyLinkedListNode>();
        SinglyLinkedListNode walker = head1;
        while(walker != null){
            head1LinkedList.Add(walker);
            walker = walker.next;
        }
        walker = head2;
        while(walker != null){
            foreach (var temp in head1LinkedList){
                if(temp == walker){
                    return walker.data;
                }
            }
            walker = walker.next;
        }
        return 0;
    }
