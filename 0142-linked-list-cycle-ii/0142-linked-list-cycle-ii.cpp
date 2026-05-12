/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;
        map<ListNode*,int> hash;
        ListNode* temp=head;
        while(temp!=NULL){
            if(hash.find(temp)==hash.end()){
                hash[temp]=1;
            }else{
                return temp;
            }
            temp=temp->next;
        }
        return NULL;


    }
};