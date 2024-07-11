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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k==0) return head;

        ListNode* q1=head;
        ListNode* q2=head;
        int count=1;
        while(q1->next!=NULL){
            count++;
            q1=q1->next;
        }
        k=k%count;
        if(k==0){
            return head;
        }
        int i=0,j=count-k-1;
        while(i<j){
            q2=q2->next;
            i++;
        }
        q1->next=head;
        head=q2->next;
        q2->next=NULL;
        return head;
    }
};