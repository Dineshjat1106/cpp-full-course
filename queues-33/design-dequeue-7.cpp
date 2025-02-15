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
class dequeue{
    public:
    node*head;
    node*tail;
    int size;
    dequeue(){
        head=tail=NULL;
        size=0;
    }
    void pushback(int val){
        node*temp=new node(val);
        if(size==0) head=tail=temp;
        else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
         }
    size++;
}
void pushfront(int val){
    node*temp=new node(val);
    if(size==0) head=tail=temp;
    else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    size++;
}
    void popfront() {
        if (size == 0) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }
        head=head->next;
        if(head!=NULL) head->prev=NULL;
        if(head==NULL) tail=NULL;
        size--;
    }
    void popback() {
        if (size == 0) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }
        else if (size == 1) {
            popfront();
            return;
        } 
            node* temp = tail->prev;
            temp->next=NULL;
            tail = temp;  
        size--;
    }
    int front(){
        if(size==0){
            cout<<"queue is empty! ";
            return -1;
        }
        return head->val;
    }
    int back(){
        if(size==0){
            cout<<"queue is empty! ";
            return -1;
        }
        return tail->val;
    }
    int sizee(){
        return size;
    }
    bool empty(){
        if(size==0) return true;
        else return false;
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
    dequeue dq;
    dq.pushback(10);
    dq.pushback(20);
    dq.pushback(30);
    dq.pushback(40);
    dq.display();
    dq.popback();
    dq.display();
    dq.popfront();
    dq.display();
    dq.pushfront(10);
    dq.display();
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
}