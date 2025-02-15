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
void nthlevel2(node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level) cout<<root->val<<" ";
    nthlevel2(root->right,curr+1,level);
    nthlevel2(root->left,curr+1,level);
}
int level2(node* root){
    if(root==NULL) return 0;
    return 1+max(level2(root->left),level2(root->right));
}
void levelorder2(node* root){
    int n=level2(root);
    for(int i=1;i<=n;i++){
        nthlevel2(root,1,i);
        cout<<endl;
    }
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
    nthlevel(a,1,1);
    nthlevel(a,1,2);
    nthlevel(a,1,3);
    cout<<endl;
    levelorder(a);
    cout<<endl;
    levelorder2(a);
}