#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node* delete_beg(struct node *head)
{
    struct node *temp;

    if(head == NULL)
    {
        printf("Linked list is empty");
        return head;
    }

    temp = head;
    head = head->link;
    free(temp);

    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));

    head->data = 10;
    head->link = second;

    second->data = 20;
    second->link = third;

    third->data = 30;
    third->link = NULL;

    struct node *temp = head;
   
    head = delete_beg(head);

    temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }

    return 0;
}