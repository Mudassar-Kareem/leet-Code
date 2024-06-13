/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> set;
        ListNode* dummy= new ListNode(0);
        ListNode* temp =dummy;
        while(head){
            if(!set.count(head->val)){
                set.insert(head->val);
                temp->next=new ListNode(head->val);
                temp= temp->next;
            };
            head=head->next;
        };
        return dummy->next;
        
    }
};