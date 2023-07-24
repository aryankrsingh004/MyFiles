#include<iostream>
using namespace std;

class dlinkedlist{


    class Node{

        public:
            int info;
            Node *next,*prev;
    };
    
    public:
        int size;
        Node *head=NULL, *tail=NULL;

        dlinkedlist(){
            this->size=0;
        }
        void addasfisrtnode(int n){
            Node *node = new Node;
            node->info=n;
            node->next=NULL;
            node->prev=NULL;
            if(this->head==NULL){
                this->head=node;
                this->tail=node;
            }
            else{
                this->head->prev=node;
                node->next=this->head;
                this->head=node;
            }
            size++;
        }
        void addatindex(int n,int m){
            Node *node = new Node;
            Node *ptr=head;
            node->info = m;
            for(int i=1; i<n ; i++){
                ptr=ptr->next;
            }
            node->next=ptr->next;
            node->prev=ptr;
            ptr->next->prev=node;
            ptr->next=node;
            size++;
        }
        void deletefirstnode(){
            if(head==NULL){
                cout<<"dlist is empty";
            }

            else{
                Node *ptr;
                ptr=head;
                head=head->next;
                delete ptr;
                size--;
            }
        }
        void deletebyindex(int n){

            if(n<0){
                cout<<"invalid input";
            }
            else {
                Node *ptr;
                ptr=head;
                for(int i=1; i<=n; i++){
                    ptr=ptr->next;
                }
                ptr->prev->next=ptr->next;
                ptr->next->prev=ptr->prev;
                delete ptr;
                size--;
            }
        }
        void deleteendnode(){
            Node *ptr;
            ptr=tail;
            tail=tail->prev;
            tail->next=NULL;
            delete ptr;
            size--;
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
};

int main(){

    dlinkedlist dll;
    for(int i=0;i<=10;i++){
        dll.addasfisrtnode(i);
    }
    //dll.addasfisrtnode(1);
    //dll.addasfisrtnode(2);
    //dll.addasfisrtnode(3);
    
    //dll.deletefirstnode();
    //dll.deletebyindex(3);
    //dll.deleteendnode();
    dll.addatindex(5,111);
    dll.transcribelist();
    cout<<dll.size;

    //dll.deletefirstnode();


    return 0;
}

//hello world