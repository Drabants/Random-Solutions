class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* lag = head;
        if (!head) return head;
        ListNode* front = head->next;
        if (!front) return head;
        while (front){
            if(lag->val == front->val){
                lag->next = front->next;
                delete[] front;
                front = lag->next;
            }
            else{
                front = front->next;
                lag = lag->next;
            }
        }
        return head;
    }
};
