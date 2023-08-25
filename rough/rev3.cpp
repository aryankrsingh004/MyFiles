#include<iostream>
using namespace std;

class dlinkedlist{


    class Node{

        public:
            int info;
            Node *next;
    };
    
    public:
        int size;
        Node *head=NULL;

        dlinkedlist(){
            this->size=0;
        }
        void addasfisrtnode(int n){
            Node *node = new Node;
            node->info=n;
            node->next=NULL;
            if(this->head==NULL){
                this->head=node;
            }
            else{
                node->next=this->head;
                this->head=node;
            }
            size++;
        }

        void transcribelist(Node *head){
            
            if(head==NULL){
                cout<<"list is empty";
                return;
            }
            else{
                Node *t = new Node;
                t = head;  
                while(t!=NULL){
                    cout<<t->info<<" ";
                    t=t->next;
                }
            }
        }

        void transcribelist(){
            
            if(head==NULL){
                cout<<"list is empty";
                return;
            }
            else{
                Node *t = new Node;
                t = head;  
                while(t!=NULL){
                    cout<<t->info<<" ";
                    t=t->next;
                }
            }
        }

        Node* reverseList(Node* head) {
            Node* curr=head, *prev=NULL, *nextptr=NULL;   
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

        Node* reverseBetween( int left, int right) {
        Node *prevptr, *nextptr, *temphead=head ,*itr=head;
        prevptr=head;
        for( int i=1 ; i <= (left - 1) ; i++ ){
            //temphead=itr->next;
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
};
int main(){

    dlinkedlist dll;
    for(int i=1;i<=5;i++){
        dll.addasfisrtnode(i);
    }
    dll.transcribelist();
    cout<<"\n";
   // dll.transcribelist(dll.reverseBetween(2,4));
    //dll.reverseList(dll.reverseBetween(3,4));
    cout<<"\n";
    dll.transcribelist(dll.reverseBetween(2,4));

    return 0;
}