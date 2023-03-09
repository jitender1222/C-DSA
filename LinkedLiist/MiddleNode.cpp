#include<bits/stdc++.h>
using namespace std;

class Node{

    public:

    int data;
    Node *next;

    Node(int x){
        this->data=x;
        this->next=NULL;
    }
};

void insertNode(int val,Node* &head,Node* &tail){

    Node* newNode=new Node(val);

    if(head==NULL){
        head=newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=tail->next;
    }
}

void printNode(Node* head){

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


void MiddleNode(Node* head){

    Node* fast=head;
    Node* slow=head;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    cout<<endl;
    cout<<"Middle Node is"<<" "<< slow->data;
}



int main(){

    Node* head=NULL;
    Node* tail=NULL;

    insertNode(1,head,tail);
    insertNode(2,head,tail);
    insertNode(3,head,tail);
    insertNode(4,head,tail);
    insertNode(5,head,tail);
    insertNode(6,head,tail);

    printNode(head);

    MiddleNode(head);

}