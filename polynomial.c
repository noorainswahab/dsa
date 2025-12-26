#include <stdio.h>
#include <stdlib.h>
struct node {
int coef;
int exp;
struct node *next;
};
struct node *head = NULL;
void insert(int c, int e) {
struct node *n = malloc(sizeof(struct node));
n->coef = c;
n->exp = e;
n->next = NULL;
if (!head) {
head = n;
return;
}
struct node *t = head;
while (t->next)
t = t->next;
t->next = n;
}
void display() {
struct node *t = head;
while (t) {
printf("%dx^%d", t->coef, t->exp);
if (t->next) printf(" + ");
t = t->next;
}
printf("\n");
}
int main() {
system("getmac");
int n, c, e;
printf("Enter number of terms: ");
scanf("%d", &n);
for (int i = 0; i < n; i++) {
printf("Enter coefficient and exponent for term %d: ", i + 1);
scanf("%d %d", &c, &e);
insert(c, e);
}
printf("Polynomial: ");
display();
return 0;
}
