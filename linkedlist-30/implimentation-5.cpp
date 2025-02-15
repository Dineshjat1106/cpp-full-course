#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node*next;
    node(int val){
        this->val=val;this->next=NULL;
    }
};
class linkedlist{
    public:
    node*head;
    node*tail;
    int size;
    linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertatend(int val){
        node*temp=new node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertathead(int val){
        node*temp=new node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertatidx(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"invalid index"<<endl;
            return;
        }
        if(idx==0){
            insertathead(val);
            return;
        }
        if(idx==size){
            insertatend(val);
            return;
        }
        else{
            node* Temp=new node(val);
            node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            Temp->next=temp->next;
            temp->next=Temp;
            size++;
        }
    }
    int getatidx(int idx){
        if(idx<0 || idx>=size){
            cout<<"invalid index"<<endl;
            return -1;  
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            node* temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
    }
    void deleteathead(){
        if(size==0){
            cout<<"List is empty, nothing to delete."<<endl;
            return;
        }
        head=head->next;
        size--;
    }
    void deleteatend(){
        if(size==0){
            cout<<"List is empty, nothing to delete."<<endl;
            return;
        }
        node* temp=head;
        while(temp->next != tail){
            temp=temp->next;
        }
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
        else if(idx==size-1) return deleteatend();
        else{
            node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
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
    linkedlist ll;
    ll.insertatend(10);
    ll.display();
    ll.insertatend(20);
    ll.display();
    ll.insertathead(40);
    ll.display();
    ll.insertathead(100);
    ll.display();
    ll.insertatidx(2,80);
    ll.display();
    cout<<ll.getatidx(3)<<endl;
    ll.deleteathead();
    ll.display();
    ll.deleteatend();
    ll.display();
    ll.deleteatidx(2);
    ll.display();
}