#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL; //initiali shob next NULL kore diyechi
    }

};
void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode= new Node(val);
    if(head == NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void rev_print(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    rev_print(head->next);
    cout<<head->val<<" ";
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    while(1)
    {
        int val;
        cin>>val;
        if(val== -1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    rev_print(head);
    return 0;
}