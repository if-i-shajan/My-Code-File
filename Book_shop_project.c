#include <stdio.h>
#include <stdlib.h>

char book_name[10];
char book_id[10];
int total_node = 0;
char admin_book_finding_id[10];
char user_book[10];
int qua;
struct shop
{
    char book_name[10];
    char book_id[10];
    struct shop *next;
} *book_head, *book_newnode, *book_temp, *For_display;
struct user
{
    char user_book[10];
    int qua;
    char id[10];
    struct user *next;
} *user_head = NULL, *user_newnode, *user_temp, *user_display;

void admin_insert()
{
    system("cls");
    if (book_head == NULL)
    {
        book_head = (struct shop *)malloc(sizeof(struct shop));
        printf("Enter book name : \n");
        scanf("%s", &book_name);
        strcpy(book_head->book_name, book_name);
        printf("Enter book id : \n");
        scanf("%s", &book_id);
        strcpy(book_head->book_id, book_id);
        book_temp = book_head;
        total_node++;
    }
    else
    {
        total_node++;
        book_newnode = (struct shop *)malloc(sizeof(struct shop));
        printf("Enter book name : \n");
        scanf("%s", &book_name);
        strcpy(book_newnode->book_name, book_name);
        printf("Enter book id : \n");
        scanf("%s", &book_id);
        strcpy(book_newnode->book_id, book_id);
        book_newnode->next = NULL;
        book_temp->next = book_newnode;
        book_temp = book_temp->next;
    }
}
void display()
{
    system("cls");
    For_display = book_head;
    while (For_display != NULL)
    {
        printf("%s\n", For_display->book_name);
        For_display = For_display->next;
    }
    char x;
    scanf("%c", &x);
}

int find_node_no()
{
    int counter = 0;
    printf("Enter book id : ");
    scanf("%s", &admin_book_finding_id);
    For_display = book_head;
    while (For_display != NULL)
    {
        counter++;
        if (strcmp(For_display->book_id, admin_book_finding_id) == 0)
        {
            return counter;
        }
        For_display = For_display->next;
    }
    return -1;
}
void admin_delete()
{
    system("cls");
    int x = find_node_no();
    if (x == 1)
    {
        struct node *dummyNode;
        dummyNode = book_head;
        book_head = book_head->next;

        free(dummyNode);
    }
    else if (total_node == x + 1)
    {
        struct shop *p, *q;
        p = book_head;
        q = book_head->next;
        while (q->next != NULL)
        {
            p = p->next;
            q = q->next;
        }
        p->next = NULL;
        free(q);
    }
    else
    {
        struct shop *p, *q;
        p = book_head;
        q = book_head->next;
        for (int i = 2; i < x - 1; i++)
        {
            p = p->next;
            q = q->next;
        }
        p->next = q->next;
        free(q);
    }
    printf("Waiting for 3 second....\n");
    sleep(2);
    printf("Done");
}
void admin_search()
{
    system("cls");
    For_display = book_head;
    printf("Enter book id : ");
    scanf("%s", &admin_book_finding_id);
    while (For_display != NULL)
    {
        if (For_display->book_id, admin_book_finding_id)
        {
            printf("%s", For_display->book_name);
            break;
        }
        For_display = For_display->next;
    }
    char x;
    scanf("%c", &x);
}
void admin()
{

    system("cls");
    printf("Enter admin password : ");
    char password[10];
    scanf("%s", &password);

    if (strcmp(password, "123") == 0)
    {

        while (1)
        {

            printf("1.Insert \n");
            printf("2.Delete \n");
            printf("3.Exit/Logout\n");
            printf("4. show all\n");
            int n;
            scanf("%d", &n);
            if (n == 1)
            {
                admin_insert();
            }
            else if (n == 2)
            {
                admin_delete();
            }
            else if (n == 3)
            {
                break;
            }
            else if (n == 4)
            {
                display();
            }
            else if (n == 5)
            {
                admin_search();
            }
        }
    }
    else
    {
        printf("Invalid Password\n");
        sleep(3);
    }
}
int find_node_nos()
{
    int counter = 0;
    printf("Enter book id : ");
    scanf("%s", &admin_book_finding_id);
    user_display = user_head;
    while (user_display != NULL)
    {
        counter++;
        if (strcmp(user_display->id, admin_book_finding_id) == 0)
        {
            return counter;
        }
        user_display = user_display->next;
    }
    return -1;
}

void cancel()
{
    system("cls");
    int x = find_node_nos();
    if (x == -1)
    {
        printf("Not Found\n");
    }
    else if (x == 1)
    {
        struct user *dummyNode;
        dummyNode = user_head;
        user_head = user_head->next;

        free(dummyNode);
    }
    else if (total_node == x)
    {
        struct user *p, *q;
        p = user_head;
        q = user_head->next;
        while (q->next != NULL)
        {
            p = p->next;
            q = q->next;
        }
        p->next = NULL;
        free(q);
    }
    else
    {
        struct user *p, *q;
        p = user_head;
        q = user_head->next;
        for (int i = 2; i < x - 1; i++)
        {
            p = p->next;
            q = q->next;
        }
        p->next = q->next;
        free(q);
    }
}
void show_buying_item()
{
    user_display = user_head;
    while (user_display != NULL)
    {
        printf("Product :%s\n", user_display->user_book);
        printf("id :%s\n", user_display->id);
        printf("Quantity :%d\n", user_display->qua);
        user_display = user_display->next;
    }
}

void buy()
{
    system("cls");
    int x = 0;
    display();
    char ids[10];
    printf("Enter id : \n");
    scanf("%s", &ids);
    struct shop *p = book_head;
    while (p != NULL)
    {
        if (strcmp(p->book_id, ids) == 0)
        {
            strcpy(user_book, p->book_name);
            x = 1;
            break;
        }
        p = p->next;
    }

    if (x == 1)
    {
        printf("Enter Quantity : \n");
        scanf("%d", &qua);
        user_newnode = (struct user *)malloc(sizeof(struct user));
        user_newnode->qua = qua;
        strcpy(user_newnode->user_book, user_book);
        strcpy(user_newnode->id, ids);
        user_newnode->next = NULL;
        if (user_head == NULL)
        {

            user_head = user_newnode;
        }
        else
        {
            user_newnode->next = user_head;
            user_head = user_newnode;
        }
    }
    else
    {
        printf("Not Found \n");
    }
}

void user()
{

    while (1)
    {
        system("cls");
        printf("\n");
        printf("1. Buy \n2.Cancel Order\n3. Show all \n4.Logout\n\n");
        int x;
        printf("Enter select 1,2,3 or 4\n");
        scanf("%d", &x);

        if (x == 1)
        {
            buy();
        }
        else if (x == 2)
        {
            cancel();
        }
        else if (x == 3)
        {
            show_buying_item();
        }
        else if (x == 4)
        {
            break;
        }
        else
        {
            printf("Select Current option . ");
        }
    }
}
void design()
{
    system("color A9");
    printf("######################################################################\n\n\n\n\n");
    system("color B9");
    printf("                       Welcome to our Shop..!!! \n\n\n\n\n");
    system("color A9");
    printf("######################################################################\n\n\n\n\n");
    sleep(2);
    system("cls");
    system("color 09");
}
int main()
{
    design();
    while (1)
    {
        system("cls");
        printf("1. Shop admin\n");
        printf("2. User\n");
        printf("Select 1 or 2.\n");
        int n;
        scanf("%d", &n);
        if (n == 1)
        {
            admin();
        }
        else if (n == 2)
        {
            user();
        }
    }

    return;
}
