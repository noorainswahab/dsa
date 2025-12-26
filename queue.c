#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int q[MAX];
int front = 0, rear = -1;
void enqueue(int x){
if (rear == MAX - 1){
printf("Queue Overflow\n");
return;
}
q[++rear] = x;
}
void dequeue(){
if (front > rear){
printf("Queue Underflow\n");
return;
}
printf("Deleted: %d\n", q[front++]);
}
void display(){
int i;
if (front > rear){
printf("Queue is empty\n");
return;
}
for (i = front; i <= rear; i++)
printf("%d ", q[i]);
printf("\n");
}
int main(){
system("getmac");
enqueue(10);
enqueue(20);
enqueue(30);
display();
dequeue();
display();
return 0;
}
