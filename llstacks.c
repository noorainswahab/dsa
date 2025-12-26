#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *top = NULL;
void push(int x){
struct node *newnode = malloc(sizeof(struct node));
newnode->data = x;
newnode->next = top;
top = newnode;
}
void pop(){
if (top == NULL){
printf("Stack Underflow\n");
return;
}
struct node *temp = top;
printf("Popped: %d\n", temp->data);
top = top->next;
free(temp);
}
void display(){
struct node *temp = top;
if (temp == NULL){
printf("Stack is empty\n");
return;
}
while (temp != NULL){
printf("%d ", temp->data);
temp = temp->next;
}
printf("\n");
}
int main(){
system("getmac");
push(10);
push(20);
push(30);
display();
pop();
display();
return 0;
}
