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
void leftboundary(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftboundary(root->left);
    if(root->left==NULL) leftboundary(root->right);
}
void bottom(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) cout<<root->val<<" ";
    bottom(root->left);
    bottom(root->right);
}
void rightboundary(node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    rightboundary(root->right);
    if(root->right==NULL) rightboundary(root->left);
    cout<<root->val<<" ";
}
int main(){
    int arr[]={1,2,3,4,5,INT32_MIN,6,7,INT32_MIN,8,INT32_MIN,9,10,INT32_MIN,11,INT32_MIN,12,INT32_MIN,13,INT32_MIN,14,15,16,INT32_MIN,17,INT32_MIN,INT32_MIN,18,INT32_MIN,19,INT32_MIN,INT32_MIN,INT32_MIN,20,21,22,23,INT32_MIN,24,25,26,27,INT32_MIN,INT32_MIN,28,INT32_MIN,INT32_MIN};
    int n=47;
    node* root=construct(arr,n);
    leftboundary(root);
    bottom(root);
    rightboundary(root->right);
}