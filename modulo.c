#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int queue[SIZE], front=-1, rear=-1;
void enqueue(int x)
{
if((rear+1)%SIZE==front)
{
printf("Queue Overflow\n");
return;
}if(front==-1)
front=0;
rear=(rear+1)%SIZE;
queue[rear]=x;}
int dequeue(){
if(front==-1)
{printf("Queue Underflow\n");
return -1;}
int val=queue[front];
if(front==rear) front=rear=-1;
else front=(front+1)%SIZE;
return val;}
void display()
{if(front==-1)
{printf("Queue is empty\n");
return;}
int i=front;
printf("Queue: ");
while(1)
{printf("%d ",queue[i]);
if(i==rear)
break;
i=(i+1)%SIZE;}
printf("\n");}
int main()
{system("getmac");
enqueue(10)
;enqueue(20);
enqueue(30);
enqueue(40);
enqueue(50);
display();
printf("Dequeued: %d\n",dequeue());
printf("Dequeued: %d\n",dequeue());
display();
enqueue(60);
enqueue(70);
display();
return 0;}

