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
    ListNode* sortList(ListNode* head) {
        vector<int>ans;
        while(head!=NULL){
            ans.push_back(head->val);
            head = head->next;
        }

        sort(ans.begin(),ans.end());
        ListNode* head2 =NULL;
        ListNode* tail = NULL;
        for(auto x :ans){
            ListNode *n = new ListNode(x);
            if(head2 == NULL){
                head2 = n;
                tail =n;

            }
            else{
                tail ->next=n;
                tail = n;
            }
        }
        return head2;
    }
};