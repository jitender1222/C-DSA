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

// insert the node at the end 

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

// insert the node at the head

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

// print the node

void printData(NodeList* head){

    NodeList *temp=head;

    while(temp!=NULL){

        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


// find the node 

NodeList* findNode(int pos,NodeList* head){

    NodeList *temp=head;

    int curr=0;

    while(curr<pos-1){
        curr++;
        temp=temp->next;
    }

    return temp;

}

// find the middle node

void insertNodeMiddle(int pos1,int pos2,int val,NodeList* head){

    NodeList* temp1=findNode(pos1,head);
    NodeList* temp2=findNode(pos2,head);    

    NodeList* newNode=new NodeList(val);

    temp1->next=newNode;
    newNode->next=temp2;
}


// find the Prev Node

NodeList *findPrev(NodeList *node,NodeList* head){

    NodeList* temp=head;
    NodeList* prev=NULL;

    while(temp!=node){

        prev=temp;
        temp=temp->next;
    }

    return prev;

}

// delete the node 

void deleteNode(int pos,NodeList* head,NodeList*& end){

    NodeList *node=findNode(pos,head);

    NodeList *prev=findPrev(node,head);

    prev->next=node->next;

    if(node==end){
        end=prev;
    }
    delete(node);
}


// delete a value 

void deleteValue(int pos,NodeList* head){

    NodeList* node=findNode(pos,head);

    swap(node->data,node->next->data);
    node->next=node->next->next;
}


int main(){

    NodeList* head=NULL;    
    NodeList* tail=NULL;

insertNodeEnd(head,tail,40);
insertNodeEnd(head,tail,50);
insertNodeEnd(head,tail,60);
insertNodeEnd(head,tail,70);

insertNodehead(head,tail,40);
insertNodehead(head,tail,30);
insertNodehead(head,tail,20);
insertNodehead(head,tail,10);


insertNodeMiddle(4,5,35,head);

cout<<"before deleting"<<endl;
printData(head);             // print data

// cout<<'\n'<<"tail first"<<endl;

// cout<<tail->data;         // print tail value

// deleteNode(9,head,tail);  //delete node

// cout<<"\n";
// cout<<"After deleting"<<endl;
// printData(head);         // print head

// cout<<'\n';
// cout<<tail->data;       // print tail value


deleteValue(5,head);

cout<<"After replacing"<<endl;
printData(head); 

}