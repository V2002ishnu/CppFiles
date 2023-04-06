#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;

};

void print(struct node *head){
    struct node *ptr=head;
    while(ptr!=0){
        printf("%d",ptr->data);
        printf(" ");
        ptr=ptr->next;
    }
}

struct node * insertAtbegin(struct node *head){
    struct node *ptr=head;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=head;
    head=newnode;
    return head;


}

void insertAtEnd(struct node *head){
    struct node *ptr=head;

    while(ptr->next!=0){
        ptr=ptr->next;
    }

    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d",&newnode->data);
    newnode->next=0;
    ptr->next=newnode;
    newnode->prev=ptr;
    
}

void insertInbetween(struct node *head){
    struct node *ptr=head;

    int choice;
    printf("enter the choice where u want to insert a element:\n");
    scanf("%d",&choice);
    for(int i=0;i<choice-1;i++){
        ptr=ptr->next;
    }

    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d",&newnode->data);
    newnode->next=ptr->next;
    ptr->next=newnode;
    newnode->prev=ptr;
    
}


int main(){

    struct node *head,*newnode,*temp,*ptr;
    head=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d",&newnode->data);
    newnode->next=0;
    newnode->prev=0;
    if(head==0){
        head=temp=newnode;
    }

    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }

    }

    printf("before insertion :\n");
    print(head);

    printf("\n");

    // ptr= insertAtbegin(head);

    // insertAtEnd(head);
    insertInbetween(head);

    printf("after insertion :\n");

    print(head);


    //  print(ptr);
    

    
    



}