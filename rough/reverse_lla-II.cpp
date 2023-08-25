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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *prevptr, *nextptr, *temphead=head ,*itr=head;
        prevptr=head;
        for( int i=1 ; i <= (left - 1) ; i++ ){
            if(i==left-1){
                temphead=itr->next;
                prevptr=itr;
            }
            else {
                itr=itr->next;
            }   
        }
        itr=head;
        for(int i=0 ; i < (right-1) ; i++ ){
            itr=itr->next;
            if(i==right-2){
                nextptr=itr->next;
                itr->next=NULL;
            }
            else {
                continue;
            }
        }
        temphead=reverseList(temphead);
        prevptr->next=temphead;

        itr=head;
        while(itr != NULL){
            if(itr->next==NULL){
                itr->next=nextptr;
                break;
            }
            else{
                itr=itr->next;
            }
        }
        return head;
    }

    ListNode* reverseList(ListNode* head) {
            ListNode* curr=head, *prev=NULL, *nextptr=NULL;   
            while(curr!=NULL){
                nextptr=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nextptr;
                if(curr==NULL){
                    head=prev;
                }
            }
            return head;
        }
};