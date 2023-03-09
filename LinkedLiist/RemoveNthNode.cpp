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
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void RemoveNthNode(Node * head,int node){

    int cnt=1;

    Node* currNode=head;

    // find the curr  node

    while(cnt!=node){
        currNode=currNode->next;
        cnt++;
    }

    // find the (l-nth) node 

    Node* beforeHead=new Node(-1);
    beforeHead->next=head;

    while(currNode->next!=NULL){

        currNode=currNode->next;
        beforeHead=beforeHead->next;
    }
    beforeHead->next=beforeHead->next->next;
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

    RemoveNthNode(head,3);
    cout<<endl;
    printNode(head);

}