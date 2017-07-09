class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* sumList;
        ListNode* sumHead;
        int carry=0;
        carry += l1->val + l2->val;
        sumList = new ListNode(carry%10);
        sumHead = sumList;
        carry = carry/10;
        l1 = l1->next;
        l2 = l2->next;
        while(l1 && l2){
            carry += l1->val + l2->val;
            sumList->next = new ListNode(carry%10);
            carry = carry/10;
            sumList= sumList->next;
            l1 = l1->next;
            l2 = l2->next;               
        }
        if(l1){
            while(l1){
             carry += l1->val;
             sumList->next = new ListNode(carry%10);
             carry = carry/10;
             sumList= sumList->next;
             l1 = l1->next;
            }
        }
        if(l2){
            while(l2){
             carry += l2->val;
             sumList->next = new ListNode(carry%10);
             carry = carry/10;
             sumList= sumList->next;
             l2 = l2->next;
            }
        }
        if(carry){
            sumList->next = new ListNode(carry);
        }
        return sumHead;
    }
};
