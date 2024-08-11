class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *t = head;

        if(!head || !head->next) return NULL;

        while(fast && fast->next){
            fast = fast->next->next;
            t = slow;
            slow = slow->next;
        }     

        t->next = slow->next;
        slow->next = NULL;
        return head;   
    }
};