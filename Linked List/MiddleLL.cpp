class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast && fast->next)
        {
            fast = fast->next;
            slow = slow->next;
            if(fast){
                fast=fast->next;
            }
        }
        return slow;
    }
};