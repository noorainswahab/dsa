#include <stdio.h>
#include <stdlib.h>
struct node {
int r, c, val;
struct node *next;
};
struct node *head = NULL;
void insert(int r, int c, int val) {
if (val == 0) return;
struct node *n = malloc(sizeof(struct node));
n->r = r; n->c = c; n->val = val;
n->next = head;
head = n;
}
void display(int rows, int cols) {
struct node *t;
for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
t = head;
int found = 0;
while (t) {
if (t->r == i && t->c == j) { printf("%d ", t->val); found=1; break; }
t = t->next;
}
if (!found) printf("0 ");
}
printf("\n");
}
}
int main() {
system("getmac");
int rows = 3, cols = 4;
insert(0,1,5);
insert(1,3,8);
insert(2,0,3);
display(rows, cols);
return 0;
}
