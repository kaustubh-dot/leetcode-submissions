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
    int dectobin(int num){
        int power=1;
        int ans=0;
        while(num>0){
            ans=ans+power*num%10;
            power*=2;
            num/=10;
        }
        return ans;
    }
    int getDecimalValue(ListNode* head) {
        ListNode* temp=head;
        int num=0;
        while(temp!=NULL){
            num=num*2+temp->val;
            temp=temp->next;
        }
        return num;        
    }
};