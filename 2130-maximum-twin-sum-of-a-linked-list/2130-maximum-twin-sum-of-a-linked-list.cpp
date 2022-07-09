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
// class Solution {
// public:
//     int pairSum(ListNode* head) {
//         int ans=0;
//         int n=0;
//         vector<int> m;
//         ListNode* temp=head;
//         while(temp){
//             n++;
//             m.push_back(temp->val);
//             temp=temp->next;
//         }
//         int i=0,j=m.size()-1;
//         while(i<j){
//             ans=max(ans,m[i]+m[j-i]);
//             i++;
//             j--;
//         }
//        return ans; 
//     }
// };
class Solution {
public:
    ListNode* reverseList(ListNode* head){
        if(head!=NULL && head->next!=NULL){
            ListNode *p=head,*n=head->next;
            head->next=NULL;
            while(n){
                head=n;
                n=n->next;
                head->next=p;
                p=head;
            }
        }
        return head;
    }
    int pairSum(ListNode* head) {
        ListNode *p1=head,*p2=head;
        while(p2){
            p1=p1->next;
            p2=p2->next->next;
        }
        p2=reverseList(p1);
        int s=0,m=0;
        while(p2){
            s=p2->val+head->val;
            m=max(m,s);
            p2=p2->next;
            head=head->next;
        }
      return m;
    }
};