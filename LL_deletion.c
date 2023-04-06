#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *deleteAtbegin(struct node *head){
    struct node *ptr=head;
    head=ptr->next;
    free(ptr);
    return head;
}

void deleteInBetween(struct node *head, int value){
    struct node *ptr=head;
    for(int i=1;i<value;i++){
        ptr=ptr->next;
    }
    struct node *q=head;
    for(int i=1;i<value-1;i++){
        q=q->next;
    }
    q->next=ptr->next;
    free(ptr);

}

void deleteAtEnd(struct node *head){
    struct node *ptr=head;
    while(ptr->next!=0){
        ptr=ptr->next;
    }
    struct node *q=head;
     while(q->next!=ptr){
        q=q->next;
    }
    q->next=0;
    free(ptr);

}

int main()
{

    struct node *head, *newnode, *temp,*ptr;
    head = 0;
    int n;
    printf("how many nodes u want to create\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {

        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data of %d node :", i+1);
        scanf("%d", &newnode->data);
        newnode->next=0;
        if (head == 0)
        {
            head = temp = newnode;
        }

        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    ptr=head;

    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
        printf(" ");
    }
    printf("\n");

    printf("after deletion\n");

    // head=deleteAtbegin(head);

    // ptr=head;

    // while(ptr!=NULL){
    //     printf("%d",ptr->data);
    //     ptr=ptr->next;
    //     printf(" ");
    // }


    // deleteAtEnd(head);

    //  ptr=head;

    // while(ptr!=NULL){
    //     printf("%d",ptr->data);
    //     ptr=ptr->next;
    //     printf(" ");
    // }

    deleteInBetween(head,3);

      ptr=head;

    while(ptr!=NULL){
        printf("%d",ptr->data);
        ptr=ptr->next;
        printf(" ");
    }
    
    return 0;
}