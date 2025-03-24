#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node()
    {
        data=0;
        next=NULL;
    }
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

class Linkedlist
{
    public:
    Node *head;
    Linkedlist()
    {
        head=NULL;
    }
    void print()
    {
        Node *temp=head;
        if(head==NULL)
        {
            cout<<"\n linkedlist is empty";
            return;
        }
        cout<<"\nelements are ";
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
    void insertAtBeginning(int data)
    {
        Node* newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        newnode->next=head;
        head=newnode;
    }
    void insertAtEnd(int data)
    {
         Node* newnode=new Node(data);
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        Node *temp=head;
        while(temp->next!=NULL)temp=temp->next;
        temp->next=newnode;
    }
    void deleteAtBeginning()
    {
        if(head==NULL)
        {
            cout<<"LL is empty cant't delete ";
            return ;
        }
        Node *temp=head;
        head=head->next;
        delete temp;
    }
    void deleteAtEnd()
    {
        if(head==NULL)
        {
            cout<<"LL is empty can't delete ";
            return ;
        }
        if(head->next==NULL)
        {
            delete head;
            head=NULL;
            return;
        }
        Node *temp=head;
        while(temp->next->next!=NULL)temp=temp->next;
        delete temp->next;
        temp->next=NULL;
    }
};

int main()
{
    Linkedlist l;
   l.insertAtBeginning(10);
   l.insertAtEnd(20);
  l.insertAtEnd(30);
    l.print();
    return 0;
}