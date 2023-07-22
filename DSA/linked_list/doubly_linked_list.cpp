#include<iostream>
using namespace std;

class dlinkedlist *start=NULL;

class dlinkedlist{


    class Node{

        public:
            int info;
            Node *next,*prev;
    };
    
    public:
        int size;
        Node *head=NULL, *tail=NULL;
        //dlinkedlist *start=NULL;
        
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

        void deletefirstnode(){
            cout<<this->head->info;
            cout<<this->head->next->info;
            

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
                    cout<<t->info<<endl;
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
    dll.transcribelist();
    //dll.deletefirstnode();


    return 0;
}

//hello world