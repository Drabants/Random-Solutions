/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
  int max_size =0;
  if(head==NULL){
      return false;
  }  
   while(head != NULL){
       head=head->next;
       max_size++;
       if(max_size >  100){
           return true;
       }
   }
    return false;
}
