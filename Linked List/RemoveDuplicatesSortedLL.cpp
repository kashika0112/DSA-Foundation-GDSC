class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p;
        ListNode* q;
        p = head;
        
        while(p){
            
            if(p && p->val == q->val){
                q->next = p->next;
                delete p;
                p = q->next;
            }
            
            else{
                q = p;
                p = p->next;
            }
        }
        return head;
    }
};