
#include<iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head==NULL){
            return head;

        }
        while(head && head->val==val){
            head=head->next;
        }


        ListNode *a = head;
        while(a) {
            if (a->next->val==val){
                a->next=a->next->next;
            }
            else{
                a=a->next;
            }
        }
        
    return head;
    }
};