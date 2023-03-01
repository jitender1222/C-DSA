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

int main(){

    // NodeList* head=NULL;
    // NodeList* tail=NULL;

// create a new node

NodeList* newNode=new NodeList(10);

cout<<newNode->data;

}