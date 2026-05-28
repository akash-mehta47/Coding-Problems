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

    ListNode *findIntersection(ListNode *list1, ListNode *list2, int diff){
        while(diff > 0){
            diff--;
            list2 = list2->next;
        }

        while(list1 != list2){
            list1=list1->next;
            list2=list2->next;
        }

        return list1;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;

        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        int count1 = 0, count2 = 0;
        
        while(temp1 != NULL){
            count1++;
            temp1=temp1->next;
        }
        while(temp2 != NULL){
            count2++;
            temp2=temp2->next;
        }

        if(count1 < count2) return findIntersection(headA, headB, count2-count1);
        else return findIntersection(headB, headA, count1-count2);
    }
};