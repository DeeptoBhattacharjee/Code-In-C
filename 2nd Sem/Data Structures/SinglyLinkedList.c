#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *nextNode;
};

struct Node *createNode(int value)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->value = value;
    newNode->nextNode = NULL;

    return newNode;
}

void insertStart(struct Node **head, int value)
{
    struct Node *newNode;
    newNode = createNode(value);
    newNode->nextNode = *head;
    *head = newNode;
}

void insertEnd(struct Node **head, int value)
{
    struct Node *newNode, *temp;
    newNode = createNode(value);

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    temp = *head;

    while (temp->nextNode != NULL)
    {
        temp = temp->nextNode;
    }
    temp->nextNode = newNode;
}

void deleteStart(struct Node **head)
{
    struct Node *temp;
    if (*head == NULL)
    {
        printf("List is Empty");
        return;
    }

    temp = *head;
    *head = (*head)->nextNode;

    free(temp);
}

void deleteEnd(struct Node **head)
{
    struct Node *temp;
    if (*head == NULL)
    {
        printf("List is Empty");
        return;
    }
    if ((*head)->nextNode == NULL)
    {
        free(*head);
        *head = NULL;
        return;
    }

    temp = *head;

    while (temp->nextNode->nextNode != NULL)
    {
        temp = temp->nextNode;
    }
    free(temp->nextNode);
    temp->nextNode = NULL;
}

void search(struct Node *head,int key)
{
    int pos=1;

    while(head!=NULL)
    {
        if(head->value==key)
        {
            printf("Element found at position:%d\n",pos);
            return;
        }
        head=head->nextNode;
        pos++;
    }
    printf("Element not found\n");
}

void display(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is Empty");
        return;
    }

    printf("Singly Linked List:");
    while (head != NULL)
    {
        printf("%d->", head->value);
        head = head->nextNode;
    }
    printf("NULL\n");
}

int main()
{
    int ch,value,key;
    struct Node *head = NULL;
    while (1)
    {
        printf("\n----- Singly Linked List Menu -----\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete at Beginning\n");
        printf("4. Delete at End\n");
        printf("5. Search in List\n");
        printf("6. Display List\n");
        printf("7. Exit\n");
        printf("Enter Your Choice!:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter the value to insert at Start:");
            scanf("%d",&value);
            insertStart(&head,value);
            break;

            case 2:
            printf("Enter the value to insert at End:");
            scanf("%d",&value);
            insertEnd(&head,value);
            break;

            case 3:
            deleteStart(&head);
            break;

            case 4:
            deleteEnd(&head);
            break;

            case 5:
            printf("Enter the element to search for:");
            scanf("%d",&key);
            search(head,key);
            break;

            case 6:
            display(head);
            break;
            
            case 7:
            printf("Exit program!!\n");
            exit(0);
            
            default:
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}