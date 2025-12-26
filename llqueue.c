#include <stdio.h>
#include <stdlib.h>
struct node{int data; struct node *next;}*front=NULL,*rear=NULL;
void enqueue(int x){
struct node *n=malloc(sizeof(struct node));
n->data=x; n->next=NULL;
if(!rear) front=rear=n;
else rear->next=n, rear=n;
}
void dequeue(){
if(!front){printf("Queue empty\n"); return;}
struct node *t=front; printf("Deleted: %d\n",t->data);
front=front->next; if(!front) rear=NULL; free(t);
}
void display(){
struct node *t=front;
while(t){printf("%d ",t->data); t=t->next;} printf("\n");
}
int main(){
system("getmac");
enqueue(10); enqueue(20); enqueue(30);
display(); dequeue(); display();
return 0;
}
