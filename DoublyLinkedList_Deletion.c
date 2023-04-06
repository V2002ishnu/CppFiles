#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void print(struct node *head)
{
    struct node *ptr = head;
    while (ptr != 0)
    {
        printf("%d", ptr->data);
        printf(" ");
        ptr = ptr->next;
    }
}

struct node *deleteAtbegin(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    head->prev = 0;
    free(ptr);
    return head;
}

void deleteAtEnd(struct node *head)
{
    struct node *ptr = head;
    while (ptr->next != 0)
    {
        ptr = ptr->next;
    }

    struct node *q = ptr->prev;
    q->next = 0;
    free(ptr);
}

void deleteInBetween(struct node *head)
{
    struct node *ptr = head;
    int choice;
    printf("enter the choice where u want to delete an element:\n");
    scanf("%d", &choice);
    for (int i = 0; i < choice - 1; i++)
    {
        ptr = ptr->next;
    }
    struct node *q = ptr->next;
    ;
    ptr->next = q->next;
    q->next->prev = ptr;
    free(ptr);
}

int main()
{

    struct node *head, *newnode, *temp, *ptr;
    head = 0;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter the data :");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        newnode->prev = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }

        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }

    printf("before deletion :\n");
    print(head);

    printf("\n");

    deleteInBetween(head);

    printf("after deletion :\n");

    print(head);
}