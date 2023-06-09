#include <stdlib.h>
#include <stdio.h>

struct node 
{
    int data;
    struct node *link;
};

int main()
{
    
        struct node *head = (struct node *)malloc (sizeof(struct node));
        head->data =45;
        head-> link =NULL;
    
        struct node*current = (struct node *)malloc(sizeof(struct node));
        current->data= 80;
        current->link = NULL;
        head->link = current;
        head->link->link = current;
    

    //printf("%d", head->link->link);
}
//create a linked list

void print_data(struct node *head)
{
    if(head == NULL);
        printf("linked list empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }
}
//printing data of each node

void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));    
}
//insert a node at the end

int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 14;
    head->link = NULL;

    struct node *ptr1 = malloc(sizeof(struct node));
    ptr1->data = 10;
    ptr1->link = NULL;
    head->link = ptr1;
    int data = 3;
    head = add_at_start(head, data);
    ptr = head;
    while(ptr != NULL);
    {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }
}