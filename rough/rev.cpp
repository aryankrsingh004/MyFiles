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
            Node* tmp = new Node;
            Node* prev = new Node;
            Node* curr = new Node;
            prev = head;
            curr = head->next;
            tmp= curr->next;
            head->next= NULL;
            if(tmp==NULL){
                    curr->next=prev;
                    head=curr;
                }
            int count = 0;
            while(tmp != NULL){
                tmp = curr->next;
                curr->next = prev;
                prev = curr;
                head = curr;
                curr=tmp;
                tmp= tmp->next;
                if(tmp==NULL){
                    curr->next=prev;
                    head=curr;
                }
                else {
                    continue;
                }
                cout<<count;
                count++;
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