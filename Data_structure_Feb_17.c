#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *head;

void createlist()
{
    int n;
    struct node *new_node, *temp;
    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter the number of input:\n");
    scanf("%d", &n);
    printf("Enter the value of first node:\n");
    scanf("%d", &head->data);
    head->next = NULL;
    temp = head;
    for (int i = 1; i < n; i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter the value of node-%d\n", i + 1);
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        temp->next = new_node;
        temp = new_node;
    }
}

void display()
{
    struct node *temp;
    temp = head;
    int i = 0;
    while (temp != NULL)
    {
        printf("\nOutput-%d: %d", ++i, temp->data);
        temp = temp->next;
    }
}

int countlist()
{
    struct node *temp;
    temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertlist(int N)
{
    struct node *new_node, *temp;
    int count = countlist();
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the value you want to insert:\n");
    scanf("%d", &new_node->data);
    temp = head;
    if (N == 1)
    {
        new_node->next = head;
        head = new_node;
    }
    else if (N > 1 && N <= count)
    {
        for (int i = 1; i < N - 1; i++)
        {
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
    }
    else if (N == count + 1)
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
        new_node->next = NULL;
    }
}

void searchlist()
{
    int searchitem;
    printf("\nEnter the value you want to search:\n");
    scanf("%d", &searchitem);
    struct node *temp;
    temp = head;
    while (temp != NULL)
    {
        if (temp->data == searchitem)
        {
            printf("Found!\n");
            break;
        }
        else
        {
            temp = temp->next;
        }
    }
    if (temp == NULL)
    {
        printf("Not Found!\n");
    }
}

int main()
{
    int position;
    createlist();
    display();
    printf("\nNumber of data in the list:%d\n", countlist());
    printf("\nEnter the position you want to insert new value:\n");
    scanf("%d", &position);
    insertlist(position);
    display();
    searchlist();
    return 0;
}
