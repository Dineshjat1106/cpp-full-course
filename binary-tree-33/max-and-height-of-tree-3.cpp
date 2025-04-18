#include<iostream>
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
int maxtree(node* root){
    if(root==NULL) return INT32_MIN;
    int lmax=maxtree(root->left);
    int rmax=maxtree(root->right);
    return max(root->val,max(lmax,rmax));
}
int level(node* root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
}
int main(){
    node* a=new node(1);
    node* b=new node(2);
    node* c=new node(3);
    node* d=new node(4);
    node* e=new node(5);
    node* f=new node(6);
    node* g=new node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    cout<<maxtree(a)<<endl;
    cout<<level(a);
}