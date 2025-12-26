#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000
struct node {
int data;
struct node *next;
};
struct node *head = NULL;
void ll_insert_begin(int x) {
struct node *newnode = malloc(sizeof(struct node));
newnode->data = x;
newnode->next = head;
head = newnode;
}
void ll_delete_begin() {
if (head == NULL) return;
struct node *temp = head;
head = head->next;
free(temp);
}
int main()
{
system("getmac");
int arr[N];
clock_t start, end;
printf("Insertion at beginning:\n");
start = clock();
for (int i = 0; i < N; i++) {
for (int j = i; j > 0; j--)
arr[j] = arr[j - 1];
arr[0] = i;
}
end = clock();
printf("Array: %.4f sec\n", (double)(end - start)/CLOCKS_PER_SEC);
start = clock();
for (int i = 0; i < N; i++) {
ll_insert_begin(i);
}
end = clock();
printf("Linked List: %.4f sec\n", (double)(end - start)/CLOCKS_PER_SEC);
printf("\nDeletion at beginning:\n");
start = clock();
for (int i = 0; i < N; i++) {
for (int j = 0; j < N - i - 1; j++)
arr[j] = arr[j + 1];
}
end = clock();
printf("Array: %.4f sec\n", (double)(end - start)/CLOCKS_PER_SEC);
start = clock();
for (int i = 0; i < N; i++) {
ll_delete_begin();
}
end = clock();
printf("Linked List: %.4f sec\n", (double)(end - start)/CLOCKS_PER_SEC);
return 0;
}
