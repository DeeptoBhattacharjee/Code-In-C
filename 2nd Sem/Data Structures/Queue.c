#include <stdio.h>
#define max 5

int queue[max], front=-1, rear=-1;

void enqueue(int value)
{
    if(rear==max-1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }

        rear++;
        queue[rear]=value;
        printf("%d enqueued to queue\n",value);
    }
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("Queue underflow\n");
    }
    else
    {
        printf("%d dequeued from queue\n",queue[front]);
        front++;
        if(front>rear)
        {
            front=-1;
            rear=-1;
        }
    }

}

void display()
{
    if(front==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elemensts are:");
        for(int i= front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice,value;
    while(1)
    {
        printf("Enter your choice:\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the value to be enqueued:");
            scanf("%d",&value);
            enqueue(value);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("Exiting...\n");
            return 0;
            default:
            printf("Invalid Choice\n");
        }
    }
    return 0;   
}