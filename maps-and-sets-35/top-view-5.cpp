#include<iostream>
#include<queue>
#include<unordered_map>
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
void topview(node* root){
    unordered_map<int,int> m;
    queue< pair<node*,int>> q;
    pair<node*,int> r;
    r.first=root;
    r.second=0;
    q.push(r);
    while(q.size()>0){
        node* temp=(q.front()).first;
        int level=(q.front()).second;
        q.pop();
        if(m.find(level)==m.end()) m[level]=temp->val;
        if(temp->left!=NULL){
             pair<node*,int> p;
            p.first=temp->left;
            p.second=level-1;
            q.push(p);
        }
        if(temp->right!=NULL){
             pair<node*,int> p;
            p.first=temp->right;
            p.second=level+1;
            q.push(p);
        }
    } 
    int minlevel=INT32_MAX;
    int maxlevel=INT32_MIN;
    for(auto x: m){
        int level=x.first;
        minlevel=min(minlevel,level);
        maxlevel=max(maxlevel,level);
    }
    for(int i=minlevel;i<=maxlevel;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,INT32_MIN,6,INT32_MIN,INT32_MIN,7,8};
    int n=11;
    node* root=construct(arr,n);
    levelorder(root);
    topview(root);
}