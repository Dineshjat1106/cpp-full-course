#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node* prev;
    node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class dll{
    public:
    node*head;
    node*tail;
    int size;
    dll(){
        head=tail=NULL;
        size=0;
    }
    void insertattail(int val){
        node*temp=new node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void insertathead(int val){
        node*temp=new node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void insertatidx(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"invalid index"<<endl;
            return;
        }
        else if(idx==0){
            insertathead(val);
            return;
        }
        else if(idx==size){
            insertattail(val);
            return;
        }
        else{
            node* Temp=new node(val);
            node* temp=head;
            for (int i=1;i<=idx-1;i++) {
                temp=temp->next;
            }
            Temp->next=temp->next;
            temp->next=Temp;
            Temp->prev=temp;
            Temp->next->prev=Temp;
            size++;
        }
    }
    int getatidx(int idx){
        if (idx<0 || idx>=size) {
            cout<<"invalid index"<<endl;
            return -1;  
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            node* temp=head;
            for (int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void deleteathead(){
        if (size==0){
            cout<<"List is empty, nothing to delete."<<endl;
            return;
        }
        head=head->next;
        if(head!=NULL) head->prev=NULL;
        if(head==NULL) tail=NULL;
        size--;
    }
    void deleteattail(){
        if(size==0){
            cout<<"List is empty, nothing to delete."<<endl;
            return;
        }
        else if(size==1){
            deleteathead();
            return;
        } 
        node* temp=tail->prev;
        temp->next=NULL;
        tail=temp;  
        size--;
    }
    void deleteatidx(int idx){
        if(idx<0 || idx>=size){
            cout<<"invalid index"<<endl;
            return;
        }
        else if(size==0){
            cout<<"list is empty";
            return;
        }
        else if(idx==0) return deleteathead();
        else if(idx==size-1) return deleteattail();
        else{
            node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
            size--;
        }
    }
    void display(){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
dll list;
list.insertattail(10);
list.insertattail(20);
list.insertattail(30);
list.display();
list.insertattail(40);
list.display();
list.insertathead(50);
list.display();
list.insertatidx(2,60);
list.display();
list.deleteathead();
list.display();
list.deleteattail();
list.display();
list.deleteatidx(2);
list.display();
cout<<list.getatidx(1);
}