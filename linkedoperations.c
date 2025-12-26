#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head = NULL;
void insert(){
int x;
struct node *newnode = malloc(sizeof(struct node));
printf("Enter value: ");
scanf("%d", &x);
newnode->data = x;
newnode->next = head;
head = newnode;
}
void delete(){
struct node *temp;
if (head == NULL){
printf("List is empty\n");
return;
}
temp = head;
head = head->next;
free(temp);
printf("Node deleted\n");
}
void traverse(){
struct node *temp = head;
if (temp == NULL){
printf("List is empty\n");
return;
}
while (temp != NULL){
printf("%d ", temp->data);
temp = temp->next;
}
printf("\n");
}
int main(){
int ch;
system("getmac");
while (1){
printf("\n1.Insert  2.Delete  3.Traverse  4.Exit\n");
printf("Enter choice: ");
scanf("%d", &ch);
switch (ch){
case 1: insert(); break;
case 2: delete(); break;
case 3: traverse(); break;
case 4: exit(0);
default: printf("Invalid choice\n");
}
}
return 0;
}
