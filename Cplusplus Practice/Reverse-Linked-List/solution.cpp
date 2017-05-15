/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head){
        ListNode* current = head->next;
        ListNode* temp = head;
        temp->next = NULL;
        ListNode* currentNext = NULL;
        while(current){
            currentNext = current->next;
            current->next = temp;
            temp = current;
            current = currentNext;
        }
        return temp;
        }
        return head;
    }
};
