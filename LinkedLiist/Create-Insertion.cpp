#include<bits/stdc++.h>
using namespace std;

// declare a class

class NodeList{

    public:

    int data;
    NodeList*next;

    NodeList(int x){
        this->data=x;
        this->next=NULL;
    }
};

void insertNodeEnd(NodeList *&head, NodeList *&tail,int data){

    // create a new node 

    NodeList* newNode=new NodeList(data);

    if(head==NULL){

       head=newNode;
       tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }

}


void insertNodehead(NodeList *&head, NodeList *&tail,int data){

    // create a new node 

    NodeList* newNode=new NodeList(data);

    if(head==NULL){
       head=newNode;
       tail=newNode;
    }
    else{

        newNode->next=head;
        head=newNode;
    }

}


void printData(NodeList* head){

    NodeList *temp=head;

    while(temp!=NULL){

        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){

    NodeList* head=NULL;    
    NodeList* tail=NULL;

// create a new node

// NodeList* newNode=new NodeList(10);

// cout<<newNode->data;

insertNodeEnd(head,tail,40);
insertNodeEnd(head,tail,50);
insertNodeEnd(head,tail,60);
insertNodeEnd(head,tail,70);

insertNodehead(head,tail,40);
insertNodehead(head,tail,30);
insertNodehead(head,tail,20);
insertNodehead(head,tail,10);


printData(head);

}