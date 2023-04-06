#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void insertAtBetween(struct node *head, int value)
{
    struct node *ptr;
    ptr = head;
    for (int i = 1; i < value; i++)
    {
        ptr = ptr->next;
    }

    struct node *z = (struct node *)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d", &z->data);
    z->next = ptr->next;
    ptr->next = z;
}

struct node *insertAtBegin(struct node *head)
{
    struct node *q = (struct node *)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d", &q->data);
    q->next = head;
    head = q;
    return head;
}

void insertAtEnd(struct node *head)
{
    struct node *ptr;
    ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    struct node *r = (struct node *)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d", &r->data);
    ptr->next = r;
    r->next = 0;
    // return head;
}

struct node *reverse(struct node *head)
{
    struct node *prevnode, *currentnode, *nextnode;
    prevnode = 0;
    currentnode = nextnode = head;
    while (nextnode != 0)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }

    head = prevnode;
    return head;
}

int main()
{

    // For Creation & Traversal of Linked List...................

    int n;
    scanf("%d", &n);
    struct node *head, *newnode, *temp, *ptr;
    head = 0;

    for (int i = 0; i < n; i++)
    {

        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data :");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
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
    ptr = head;

    printf("before reversing :");
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
        printf(" ");
    }

    printf("\n");
    // struct node *ans;
    // ans=insertAtBegin(head);

    // ptr=ans;
    // while(ptr!=NULL){
    //     printf("%d",ptr->data);
    //     ptr=ptr->next;
    //     printf(" ");

    // }
    // insertAtEnd(head);

    // ptr=head;

    //  while(ptr!=NULL){
    //     printf("%d",ptr->data);
    //     ptr=ptr->next;
    //     printf(" ");

    // }

    // insertAtBetween(head,2);
    head=reverse(head);
    ptr = head;
    printf("after reversing :");
    while (ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
        printf(" ");
    }

    return 0;
}