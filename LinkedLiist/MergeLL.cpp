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

Node* MergeList(Node* l1,Node* l2){

    if(l1==NULL) return l2;
    if(l2==NULL) return l1;

    Node* temp=NULL;
    Node* move=NULL;

    if(l1->val<=l2->val){

        temp=l1;
        l1=l1->next;
    }
    else{
        temp=l2;
        l2=l2->next;
    }

    move=temp;

    while(l1!=NULL && l2!=NULL){

        if(l1->val<=l2->val){
            move->next=l1;
            move=move->next;
            l1=l1->next;
        }
        else{
            move->next=l2;
            move=move->next;
            l2=l2->next;
        }
    }

    while(l1!=NULL){

        move->next=l1;
        move=move->next;
        l1=l1->next;
    }

    while(l2!=NULL){
        move->next=l2;
        move=move->next;
        l2=l2->next;
    }
    return temp;
}
int main(){

    Node*head1=NULL;
    Node*head2=NULL;
    Node*tail=NULL;

    insertNode(3,head1,tail);
    insertNode(4,head1,tail);
    insertNode(5,head1,tail);
    insertNode(2,head1,tail);

    printNode(head1);
    cout<<endl;

    insertNode(6,head2,tail);
    insertNode(1,head2,tail);
    insertNode(9,head2,tail);
    insertNode(-1,head2,tail);

    printNode(head2);

    Node* ans=MergeList(head1,head2);

    cout<<endl;
    cout<<"MERGE LIST"<<endl;
    printNode(ans);
}
