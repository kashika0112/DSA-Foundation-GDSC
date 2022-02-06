class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode * p = head;
        ListNode * q = nullptr;
        ListNode * r = nullptr;
        
        while(p){
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        head = q;
        return head;
    }
};