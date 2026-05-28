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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode* ,int> hash;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        while(temp1 != NULL){
            hash[temp1]++;
            temp1=temp1->next;
        }
        while(temp2 != NULL){
            if(hash[temp2] != 1){
                hash[temp2]++;
            }else{
                return temp2;
            }
            temp2=temp2->next;
        }
        return NULL;
    }
};