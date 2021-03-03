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
    
    ListNode* revrse(ListNode* head) {
        ListNode *curr=head, *prev=NULL;
        while(curr!=NULL) {
            ListNode* Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return true;
        
        ListNode *slow=head, *fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL) {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* dummy=head;
        slow->next=revrse(slow->next);
        slow=slow->next;
        
        while(slow!=NULL) {
            if(slow->val!=dummy->val)
                return false;
            slow=slow->next;
            dummy=dummy->next;
        }    
                
        return true;
    }
};