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
    ListNode* middleNode(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next == NULL) return head;
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return count&1 ? slow:slow->next;
    }
};