#include<iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head==NULL || head->next==NULL){
            return head;   
        }
        else {
            ListNode* itr = new ListNode;
            ListNode* prev = new ListNode;
            ListNode* curr = new ListNode;
            itr = head;
            prev = head;
            curr = head->next;
            head->next = NULL;
            int count = 0;
            while(itr->next != NULL){
                curr->next = prev;
                curr = curr->next;
                prev = prev->next;
                itr = itr->next;
                if(itr->next == NULL){
                    head = curr;
                    break;
                } 
                else {
                    continue;
                }
                cout<<count;
                count++;
            } 
            return head;

        }
    }
};

int main(){
    
}