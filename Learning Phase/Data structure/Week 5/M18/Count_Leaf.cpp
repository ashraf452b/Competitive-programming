#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }

};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    queue<Node*> q;
    if(val== -1)
        root=NULL;
    else 
        root=new Node(val);
    if(root != NULL)
    {
        q.push(root);
    }
    while(!q.empty())
    {
        Node* f=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myleft, *myright;
        if(l== -1)
            myleft=NULL;
            else
                myleft= new Node(l);
        
        if(r == -1)
            myright=NULL;
            else
                myright=new Node(r);
        
        f->left=myleft;
        f->right=myright;

        if(f->left != NULL)
            q.push(f->left);
        
        if(f->right != NULL)
            q.push(f->right);

    }
    return root;
}
int count(Node* root)
{
    if(root==NULL)
        return 0;
    
    if(root->left==NULL && root->right == NULL)
        return 1;
    int l=count(root->left);
    int r=count(root->right);
    return l+r;
}
int main()
{
    Node* root=input_tree();
    int cnt=count(root);
    cout<<cnt<<endl;
    return 0;
}