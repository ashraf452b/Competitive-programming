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
void print(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<head->val<<" ";
    print(head->next);
    
}
void desc_sort(Node* head)
{
    for(Node* i=head; i->next != NULL ; i=i->next)
    {
        for(Node* j=i->next; j != NULL; j=j->next)
        {
            if(i->val < j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
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
    desc_sort(head);
    print(head);
    return 0;
}