#include <stdio.h>
int arr[100000];
int index = 0;

void push()
{
    int a;
    scanf("%d", &a);
    arr[index++] = a;
}

void pop()
{
    if (empty() == 0)
    {
        printf("%d\n", arr[index - 1]);
        index--;
    }
    else
    {
        printf("Empty stack\n");
    }
}

void top()
{
    if (empty() == 0)
    {
        printf("%d\n", arr[index - 1]);
    }
    else
    {
        printf("Empty stack\n");
    }
}

int empty()
{
    return index == 0;
}

int main()
{
    int x;
    while (1)
    {
        printf("Menu\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Top\n");
        printf("4. Empty\n");
        printf("5. Clear\n");
        printf("6. End\n");

        scanf("%d", &x);
        if (x == 1)
            push();
        if (x == 2)
            pop();
        if (x == 3)
            top();
        if (x == 4)
        {
            if (empty())
                printf("Empty\n");
            else
                printf("Not empty\n");
        }
        if (x == 5)
            index = 0;
        if (x == 6)
            break;
    }
    return 0;
}