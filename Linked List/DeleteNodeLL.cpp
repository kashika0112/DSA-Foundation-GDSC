class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode * p = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete p;
    }
};