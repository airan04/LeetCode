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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        bool p=false;
        vector<int> ans;
        while(head->next!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }
        ans.push_back(head->val);
        int m=ans.size();
        for(int i=0;i<m/2;i++){
            if(ans[i]==ans[m-1-i]){
                p=true;
            }else{
                p=false;
                break;
            }
        }
        
        return p;
    }
};