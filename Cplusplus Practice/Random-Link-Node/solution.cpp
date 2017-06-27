class Solution {
private:
ListNode* head;
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head) {
      //  srand (time(NULL));
        this->head= head;
    }
    
    /** Returns a random node's value. */
    int getRandom() {
       ListNode* walker = head->next;
       int answer = head->val;
       int temp= 0;
       int i = 2;
       while (walker){
           temp = rand()%i;
           if(temp == 0){
               answer = walker->val;
           }
           walker = walker->next;
           i++;
       }
       return answer;
    }
};
