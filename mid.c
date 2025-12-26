#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
void insert(struct Node** h,int pos,int val){
    struct Node* n=malloc(sizeof(struct Node));
    n->data=val;
    if(pos==1){n->next=*h;*h=n;return;}
    struct Node* t=*h;
    for(int i=1;i<pos-1;i++) t=t->next;
    n->next=t->next;
    t->next=n;
}
void delete(struct Node** h,int pos){
    struct Node* t=*h;
    if(pos==1){*h=t->next;free(t);return;}
    for(int i=1;i<pos-1;i++) t=t->next;
    struct Node* d=t->next;
    t->next=d->next;
    free(d);
}
void display(struct Node* h){
    while(h){
        printf("%d ",h->data);
        h=h->next;
    }
    printf("\n");
}
int main(){
    system("getmac")
    struct Node* head=NULL;
    printf("Inserting elements:\n");
    insert(&head,1,10);
    insert(&head,2,20);
    insert(&head,2,15);
    printf("Linked List after insertion:\n");
    display(head);
    printf("Deleting middle element:\n");
    delete(&head,2);
    printf("Linked List after deletion:\n");
    display(head);
    return 0;
}
