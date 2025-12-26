#include <stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *last=NULL;
void insert(int x){
struct node *n=malloc(sizeof(struct node));
n->data=x;
if(!last){
last=n; n->next=n;
printf("Inserted %d (first node)\n",x);
}else{
n->next=last->next;
last->next=n;
last=n;
printf("Inserted %d\n",x);
}
}
void del(){
if(!last){
printf("List is empty\n");
return;
}
struct node *t=last->next;
printf("Deleted %d\n",t->data);
if(t==last) last=NULL;
else last->next=t->next;
free(t);
}
void display(){
if(!last){
printf("List is empty\n");
return;
}
struct node *t=last->next;
printf("Circular List: ");
do{
printf("%d ",t->data);
t=t->next;
}while(t!=last->next);
printf("\n");
}
int main(){
system("getmac");
insert(10);
insert(20);
insert(30);
display();
del();
display();
return 0;
}
