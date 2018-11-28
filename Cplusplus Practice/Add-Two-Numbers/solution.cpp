class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode preHead(0);
        ListNode *walker = &preHead;
        int carry = 0;
        while(l1 || l2 || carry){
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            walker -> next = new ListNode(sum%10);
            walker = walker->next;
            carry = sum / 10;
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }
        walker->next == NULL;
        return walker = preHead.next;
    }
};
