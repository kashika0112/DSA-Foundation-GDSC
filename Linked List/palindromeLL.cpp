class Solution {
public:
    ListNode * reverseLL(ListNode * head)
    {
        ListNode * q = nullptr;
        ListNode * r = nullptr;
        ListNode * p = head;
        while(p){
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }
        head = q;
        return head;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode * fast = head;
        ListNode * slow = fast;
        while(fast)
        {
            fast = fast->next;
            if(fast){
                fast = fast->next;
            }
            if(fast){
                slow = slow->next;
            }
        }
        cout<<"Middle "<<slow->val<<endl;
        ListNode * q = reverseLL(slow);
        ListNode * p = head;
        
        while(p && q){
            if(p->val != q->val){
                return false;
            }
            p = p->next;
            q = q->next;
        }
        return true;
    }
};