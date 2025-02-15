#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
node* construct(int arr[],int n){
    queue<node*> q;
    node* root=new node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        node* temp=q.front();
        q.pop();
        node* l;
        node* r;
        if(arr[i]!=INT32_MIN) l=new node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT32_MIN) r=new node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i=i+2;
        j=j+2;
    }
    return root;
}
void levelqueue(node* root){
    queue<node*> q;
    q.push(root);
    while(q.size()>0){
        node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,INT32_MIN,6,INT32_MIN,INT32_MIN,7,8,9};
    int n=12;
    node* root=construct(arr,n);
    levelqueue(root);
    cout<<endl;
}