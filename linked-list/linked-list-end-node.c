#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

struct node* add_end(struct node *head, int d)
{
    struct node *avail, *temp;

    avail = malloc(sizeof(struct node));
    avail->data = d;
    avail->link = NULL;

    temp = head;

    while(temp->link != NULL)
    {
        temp = temp->link;
    }

    temp->link = avail;

    return head;
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 7;
    head->link = NULL;

    struct node *avail = malloc(sizeof(struct node));
    avail->data = 8;
    avail->link = NULL;

    head->link = avail;

    int data = 5;

    head = add_end(head, data);

    avail = head;

    
    while(avail != NULL)
    {
        printf("%d ", avail->data);
        avail = avail->link;
    }

    return 0;
}