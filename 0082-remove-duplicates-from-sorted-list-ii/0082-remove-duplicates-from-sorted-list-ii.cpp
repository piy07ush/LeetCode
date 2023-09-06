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
        map<int,int>mp;
        while(head!=NULL){
            mp[head->val]++;
            head= head->next;
        }
        vector<int>ans;
        for(auto x: mp){
            if(x.second==1){
                ans.push_back(x.first);
            }
        }

        ListNode* head1 = NULL;
        ListNode* tail = NULL;
        for(auto x:ans){
            ListNode* n = new ListNode(x);
            if(head1 ==NULL){
                head1 = n;
                tail =n;
            }
            else{
                tail->next =n;
                tail =n;
            }
        }
        return head1;


    }
};
