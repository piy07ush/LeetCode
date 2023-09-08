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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>ans;
        vector<int>answer;
        int i=0;
        while(head!=NULL){
            if(i % 2!=0){
            ans.push_back(head->val);
            }
            else{
                answer.push_back(head->val);
            }
            i++;
            head=head->next;
            }
        ans.insert(ans.begin(),answer.begin(),answer.end());

        ListNode*head1= NULL;
        ListNode*tail = NULL;
        for(auto x:ans){
            ListNode*n = new ListNode(x);
            if(head1==NULL){
                head1 = n;
                tail = n;
            }
            else{
                tail->next = n;
                tail = n;
            }
        }
        return head1;
    }
};