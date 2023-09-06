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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ans;
        for(auto x:lists){
            while(x!=NULL){
                ans.push_back(x->val);
                x = x->next;
            }
        }
        sort(ans.begin(),ans.end());

        ListNode* head1 = NULL;
        ListNode* tail = NULL;
        for(auto x: ans){
            ListNode* n = new ListNode(x);
            if(head1 == NULL){
                head1 = n;
                tail = n;
            }
            else{
                tail->next = n;
                tail =n;
            }
        }
        return head1;
    }
};