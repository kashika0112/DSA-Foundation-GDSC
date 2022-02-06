class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * p = head;
        int len = 0;
        while(p){
            len += 1;
            p = p->next;
        }
        
        int pos = len - n;
        p = head;
        if(pos == 0){
            head = head->next;
            return head;
        }
        for(int i = 0; i<pos-1; i++)
        {
            p=p->next;
        }
        ListNode* q = p->next;
        if(q){
            p->next = q->next;
            delete q;
        }
        
        return head;
    }
};