#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head;

void cretelist()
{
    struct node *newnode, *temp;
    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value of first node\n");
    scanf("%d", &head->data);
    head->next = NULL;
    temp = head;
    for (int i = 1; i <= 3; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value of node-%d\n", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp->next = newnode;
        temp = newnode;
    }
}

void display()
{
    struct node *temp;
    temp = head;
    int i = 0;
    while (temp != NULL)
    {
        printf("Node-%d: %d\n", ++i, temp->data);
        temp = temp->next;
    }
}

int main()
{
    cretelist();
    display();
    return 0;
}
