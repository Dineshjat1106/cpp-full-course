#include<iostream>
#include<vector>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val=val;
        left=nullptr;
        right=nullptr;
    }
};
void inorder(node* root,vector<int>& arr){
    if(root==NULL) return;
    inorder(root->right,arr);
    arr.push_back(root->val);
    inorder(root->left,arr);
}
void preorder(node* root,vector<int>& arr,int& i){
    if(root==NULL) return;
    root->val=arr[i++];
    preorder(root->left,arr,i);
    preorder(root->right,arr,i);
}
void nthlevel(node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level) cout<<root->val<<" ";
    nthlevel(root->left,curr+1,level);
    nthlevel(root->right,curr+1,level);
}
int level(node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
void levelorder(node* root){
    int n=level(root);
    for(int i=1;i<=n;i++){
        nthlevel(root,1,i);
        cout<<endl;
    }
}
int main(){
    node* a=new node(10);
    node* b=new node(5);
    node* c=new node(16);
    node* d=new node(1);
    node* e=new node(8);
    node* f=new node(12);
    node* g=new node(20);
    a->left=b; a->right=c;
    b->left=d; b->right=e;
    c->left=f; c->right=g;
    vector<int> arr;
    inorder(a,arr);
    levelorder(a);
    int i=0;
    preorder(a,arr,i);
    levelorder(a);
}