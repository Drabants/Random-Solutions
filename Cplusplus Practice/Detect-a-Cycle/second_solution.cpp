class Solution {
public:
    bool hasCycle(ListNode *head) {
        vector<ListNode*> visited;
        while(head){
        visited.push_back(head);
        head = head->next;
        for(int i =0; i<visited.size(); i++){
        if(head == visited.at(i))
        return true;
        }
        }
        return false;
    }
};
