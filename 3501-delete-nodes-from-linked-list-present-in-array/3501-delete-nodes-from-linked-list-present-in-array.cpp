class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>st (nums.begin(), nums.end());

        ListNode* curr = head;
        while(curr){
            if(st.count(curr->val)) curr = curr->next;

            else break;
        }

        ListNode *Head = curr;
        while(curr && curr->next){
            if(st.count(curr->next->val)) curr->next = curr->next->next;

            else curr = curr->next;
        }
        return Head;        
    }
};