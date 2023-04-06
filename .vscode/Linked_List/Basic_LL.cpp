#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node  *next;

    Node (int data){
        this->data=data;
        this->next=NULL;
    }


};

void print(Node* &head){
    Node* ptr=head;
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head, int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtEnd(Node* &head, Node* &tail, int d){
    Node* temp=new Node(d);
    temp->next=tail->next;
    tail->next=temp;
    tail=temp;
}


void insertAtPosition(Node* &head, int d, int pos){
    Node* temp=new Node(d);
    Node* ptr=head;
    for(int i=0;i<pos-1;i++){
        ptr=ptr->next;
    }

    temp->next=ptr->next;
    ptr->next=temp;

}
int main(){

    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    cout<<"creation of Linked List :"<<endl;
    print(head);

    insertAtEnd(head,tail,0);
    insertAtEnd(head,tail,100);
    cout<<"Insertion At End : "<<endl;
    print(head);
    
    
    insertAtPosition(head,500,2);

    cout<<"Insertion At Mid : "<<endl;
    
    print(head);








}