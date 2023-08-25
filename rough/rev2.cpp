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

        void reverseList() {
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
        }
};

int main(){

    dlinkedlist dll;
    for(int i=0;i<=3;i++){
        dll.addasfisrtnode(i);
    }
    dll.transcribelist();
    cout<<"\n";
    dll.reverseList();
    cout<<"\n";
    dll.transcribelist();

    return 0;
}