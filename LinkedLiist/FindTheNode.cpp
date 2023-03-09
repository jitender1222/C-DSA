
// find the index of the node if it is present otherwise return -1;

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

// insert the node 

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

// Print the data

void printNode(Node* head){
    Node* temp=head;

    while(temp!=NULL){

        cout<<temp->val<<" ";
        temp=temp->next;
    }
}

// find thee index of the node

void FindIndex(int val,Node* head){
    
    Node* temp=head;
    int i=0;

    while(temp!=NULL){

        if(temp->val==val){
            break;
        }
        else{
            i++;
            temp=temp->next;
        }
    }
    cout<<endl;
    if(i==0){
        cout<<"Not Present"<<" "<<-1;
    }
    else{
        cout<<"Present at position"<<" "<<i;
    }

}

int main(){

    Node*head=NULL;
    Node*tail=NULL;

    insertNode(3,head,tail);
    insertNode(4,head,tail);
    insertNode(5,head,tail);
    insertNode(2,head,tail);
    insertNode(6,head,tail);
    insertNode(1,head,tail);
    insertNode(9,head,tail);
    insertNode(-1,head,tail);

    printNode(head);

    FindIndex(5,head);
}

// 3 4 5 2 6 1 9 -1