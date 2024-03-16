#include <stdio.h>
#include <stdlib.h>

int count;

struct node
{
    int data;
    struct node *prev, *next;
} *head;
void create_list()
{
    int n;
    scanf("%d", &n);
    struct node *newnode, *temp;
    head = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &head->data);
    head->prev = NULL;
    head->next = NULL;
    temp = head;

    for (int i = 1; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
}
void display()
{
    count = 1;
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\n");
}
void insertion()
{
    int n;
    scanf("%d", &n);
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &newnode->data);
    if (n == 1)
    {
        newnode->prev = NULL;
        newnode->next = head;
        head = newnode;
        printf("After insertation at first position\n");
        display();
    }
    else if (n > 1 && n <= count)
    {
        struct node *temp = head;
        for (int i = 1; i < n - 1; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
        printf("After insertation \n");
        display();
    }
    else if (n == count + 1)
    {
        struct node *temp;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newnode->prev = temp;
        newnode->next = NULL;
        temp->next = newnode;
        printf("After insertation \n");
        display();
    }
}

int main()
{
    create_list();
    display();
    insertion();
}
