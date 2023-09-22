/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        //transcribelist(head);
        //exit(0);

        if(head==NULL || head->next==NULL) return false;
        else if( head->next==head ) return true;
        else{
            ListNode* itr=head->next;
            while(itr->next!=NULL){
                ListNode* itr2=head;
                do{
                    itr2=itr2->next;
                    if(itr->next == itr2) {
                        return true;
                        exit(0);
                    }
                    //cout<<itr2->val<<" ";
                    
                }
                while(itr2 != itr);
                //cout<<endl;
                itr=itr->next;
            }
            return false;
        }

    }

    void transcribelist(ListNode *head){
            
            if(head==NULL){
                cout<<"list is empty";
                return;
            }
            else{
                ListNode *t = new ListNode;
                t = head;  
                while(t!=NULL){
                    cout<<t->val<<" ";
                    t=t->next;
                }
            }
        }

};