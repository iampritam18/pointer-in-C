#include <stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
void peek();
void enqueue();
void dequeue();
void display();
int rear=-1;
int front=-1;

int main ()
{
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display();
    peek();
    dequeue();
    peek();
    display();
}
void enqueue(int x)
{
    if(rear==N-1)
    {
        printf("overflow!\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;

    }
}

void dequeue()
{
    if(front=1-1 && rear==-1)
    {
    printf("the queue is empty\n");
    }
    else if( front== rear)
    {
        front=rear=-1;
    }
    else{
        printf("the dequeued element is %d\n",queue[front]);
        front++;
    }
}

void display()
{
    if(front== -1 && rear==-1)
    {
        printf("the queue is empty!\n");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
    }
    printf("\n");
}
void peek()
{
    if(front==-1 && rear==-1)
    {
        printf("the queue is empty\n");

    }
    else 
    printf("the peek element is %d\n",queue[front]);
}


