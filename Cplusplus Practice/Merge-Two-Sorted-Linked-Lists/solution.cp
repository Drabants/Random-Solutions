class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
             ListNode* walk1= l1;
        ListNode* walk2= l2;
        ListNode* lag;
        ListNode* front;
        if(!l1 && !l2){
            return l1;
        }else if (!l1){
            return l2;
        }else if (!l2){
            return l1;
        }else{
        if(walk1->val <= walk2->val){
            lag = walk1;
            front = walk1;
            walk1 = walk1->next;
        }else{
            lag = walk2;
            front = walk2;
            walk2 = walk2->next;
        }
        while(walk1 && walk2){
            if(walk1->val <= walk2->val){
                lag->next = walk1;
                walk1 = walk1->next;
            }
            else{
                lag->next = walk2;
                walk2 = walk2->next;
            }
            lag= lag->next;
        }
        if(walk1){
            lag->next = walk1;
        }else{
            lag->next = walk2;
        }
    }
    
    return front;   
    }
};
