#include<bits/stdc++.h>
using namespace std;

class Node{

    public:

    int val;
    Node* next;

    Node(int x){
        this->val=x;
        this->next=NULL;
    }
};


void insertNode(int data,Node* &head,Node* &tail){

    Node* newNode=new Node(data);
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
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

Node* reverseLL(Node *head){

    Node* prev=NULL;
    Node* curr=head;
    Node* next=curr->next;

    while(curr!=NULL){

        curr->next=prev;
        prev=curr;
        curr=next;
        if(next!=NULL){
            next=next->next;
        }
    }

    return prev;
}

int main(){


    Node *head=NULL;
    Node *tail=NULL;

    insertNode(2,head,tail);
    insertNode(3,head,tail);
    insertNode(4,head,tail);
    insertNode(5,head,tail);
    insertNode(6,head,tail);

    printNode(head);

    Node* node=reverseLL(head);

     cout<<endl;
    printNode(node);


}