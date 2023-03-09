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

Node* findMid(Node* head){

    Node* fast=head->next;
    Node* slow=head;

    while(fast!=NULL && fast->next!=NULL){

        fast=fast->next->next;
        slow=slow->next->next;
    }
    return slow;
}

Node* findReverse(Node* head,Node* prev){

    Node* curr=head;

    if(curr==NULL) return NULL;

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

bool Palindrome(Node* head){

    Node* mid=findMid(head);

    Node* temp=mid->next;
    Node* prev=NULL;

    mid->next=findReverse(temp,prev);

    Node* initialPointer=head;
    Node* afterMidPointer=mid->next;

    while(afterMidPointer!=NULL){

        if(initialPointer->data!=afterMidPointer->data){
            return false;
            break;
        }
        else{
            initialPointer=initialPointer->next;
            afterMidPointer=afterMidPointer->next;
        }
    }
    return true;
}


int main(){

    Node *head=NULL;
    Node *tail=NULL;

    insertNode(1,head,tail);
    insertNode(2,head,tail);
    insertNode(2,head,tail);
    insertNode(1,head,tail);
    // insertNode(6,head,tail);

    printNode(head);

    cout<<endl;
    
    if(Palindrome(head)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}