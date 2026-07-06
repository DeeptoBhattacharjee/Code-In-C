#include <stdio.h>
#include <stdlib.h>

struct Node
{
int value;
struct Node *prev;
struct Node *next;
};

struct Node* createNode(int value)
{
    struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
    if (newNode==NULL)
    {
        printf("Memory Allocation failed!\n");
        exit(0);
    }

    newNode->value=value;
    newNode->prev=NULL;
    newNode->next=NULL;

    return newNode;
}

void insertStart(struct Node **head,int value)
{
    struct Node *newNode=createNode(value);

    newNode->next=*head;

    if(*head!=NULL)
    (*head)->prev=newNode;

    *head=newNode;
}

void insertEnd(struct Node **head,int value)
{
    struct Node *newNode=createNode(value);

    if(*head==NULL)
    {
        *head=newNode;
        return;
    }

    struct Node *temp=*head;

    while(temp->next !=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
}

void deleteStart(struct Node **head)
{
    struct Node *temp;

    if(*head==NULL)
    {
        printf("List is Empty!");
        return;
    }
    
    temp=*head;
    *head=(*head)->next;
    
    if(*head!=NULL)
    (*head)->prev=NULL;
    
    free(temp);
}

void deleteEnd(struct Node **head)
{
    struct Node *temp;

    if(*head==NULL)
    {
        printf("List is Empty!");
        return;
    }

    if((*head)->next==NULL)
    {
        free(*head);
        *head=NULL;
        return;
    }

    temp=*head;
    
    while(temp->next!=NULL)
    temp=temp->next;

    temp->prev->next=NULL;

    free(temp);
}

void search(struct Node *head,int key)
{
    struct Node *temp;
    int pos=1;

    temp=head;

    while(temp!=NULL)
    {
        if(temp->value==key)
        {
            printf("Element found at position:%d\n",pos);
            return;
        }
        temp=temp->next;
        pos++;
    }
    printf("Element not found in the List");
}

void traverse(struct Node *head)
{
    struct Node *temp;

    if(head==NULL)
    {
        printf("List is Empty!");
        return;
    }
    printf("Doubly Linked List:");

    temp=head;

    while(temp!=NULL)
    {
        printf("%d<->",temp->value);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int ch,value,key;
    struct Node *head = NULL;
    while (1)
    {
        printf("\n----- Doubly Linked List Menu -----\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete at Beginning\n");
        printf("4. Delete at End\n");
        printf("5. Search in List\n");
        printf("6. Traverse in List\n");
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
            traverse(head);
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