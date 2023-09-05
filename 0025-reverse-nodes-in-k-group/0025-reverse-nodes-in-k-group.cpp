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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int size =0;
        ListNode*temp =head;
        while(temp!=NULL){
            temp = temp->next;
            size++;
        }
        if(size<k)return head;
        
        if(head ==NULL)return head;

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forw = NULL;
        int count =0;
        while(curr!=NULL && count<k){
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
            count++;
        }
        if(forw!=NULL){
            head->next=reverseKGroup(forw,k);
        }
        return prev;
    }
};