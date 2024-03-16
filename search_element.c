#include <stdio.h>
#include <stdlib.h>
#define N 3
struct node
{
    int data;
    struct node *next;
} *head;

void create_list()
{
    struct node *newnode, *temp;
    head = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("Memory allocation failed\n");
    }
    printf("Enter the value of node 1: \n");
    scanf("%d", &head->data);
    head->next = NULL;
    temp = head;
    for (int i = 1; i <= N; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Memory allocation failed\n");
        }
        printf("Enter the value of node %d: \n", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp->next = newnode;
        temp = newnode;
    }
}

void search()
{
    int search_item;
    printf("Enter the value you want to search: \n");
    scanf("%d", &search_item);
    struct node *temp;
    temp = head;
    int found = 0;
    while (temp != NULL)
    {
        if (temp->data == search_item)
        {
            found = 1;
            break;
        }
        temp = temp->next;
    }
    if (found)
    {
        printf("Found\n");
    }
    else
    {
        printf("Not found\n");
    }
}

void display()
{
    struct node *temp;
    temp = head;
    int i = 1;
    while (temp != NULL)
    {
        printf("Node %d -> %d\n", i++, temp->data);
        temp = temp->next;
    }
}

int main()
{
    create_list();
    display();
    search();
    return 0;
}
