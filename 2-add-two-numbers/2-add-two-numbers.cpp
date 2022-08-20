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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;
        
        int carry = 0;
        while(l1 || l2){
            int first = (l1) ? l1->val : 0;
            int second = (l2) ? l2->val : 0;
            int temp = first + second + carry;
            carry = temp/10;
            temp = temp%10;

            dummy->next = new ListNode(temp);
            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
            dummy = dummy->next;
        }
        if(carry == 1) dummy->next = new ListNode(carry);
        return ans->next;
    }
};