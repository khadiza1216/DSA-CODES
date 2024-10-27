#include <stdio.h>
# define SIZE 100
void enqueue();
void dequeue();
void show();
int q[SIZE];
int rear = - 1;
int front = - 1;
 int main()
{
    int ch;
    printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
while(1){
    printf("enter your choice:");
    scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            default:
            printf("Incorrect choice \n");
        }
    }
}

void enqueue()
{
    int item;
    if (rear == SIZE - 1)
       printf("Overflow \n");
    else
    {
        if (front == - 1)

        front = 0;
        printf("Element to be inserted in the Queue : \n");
        scanf("%d", &item);
        rear = rear + 1;
        q[rear] = item;
    }
}

void dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("Underflow \n");
        return ;
    }
    else
    {
        printf(" %d deleted from the Queue\n", q[front]);
        front = front + 1;
    }
}

void show()
{

    if (front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = front; i <= rear; i++)
            printf("%d ", q[i]);
        printf("\n");
    }
}
