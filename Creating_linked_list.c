#include <stdio.h>
#include <stdlib.h>
#define int long long
#define N 5

struct node
{
    int data;
    struct node *next;
} *head;
void create_list()
{
    struct node *newnode, *temp;
    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value of node 1 \n");
    scanf("%d", &head->data);
    head->next = NULL;
    temp = head;
    for (int i = 1; i <= N; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value of node %d \n", i + 1);
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
    int i = 1;
    while (temp != NULL)
    {
        printf("Node %d -> %d\n", i++, temp->data);
        temp = temp->next;
    }
}
signed main()
{
    create_list();
    display();
}
