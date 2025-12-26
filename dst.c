#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *left;
struct node *right;
};
struct node* createNode(int value) {
struct node* n = (struct node*)malloc(sizeof(struct node));
n->data = value;
n->left = n->right = NULL;
return n;
}
void DFS(struct node* root) {
if (!root) return;
printf("%d ", root->data);
DFS(root->left);
DFS(root->right);
}
int main() {
system("getmac");
int n;
printf("Enter number of nodes: ");
scanf("%d", &n);
if (n <= 0) return 0;
struct node* nodes[n];
int value;
for (int i = 0; i < n; i++) {
printf("Enter value for node %d: ", i + 1);
scanf("%d", &value);
nodes[i] = createNode(value);
}
for (int i = 0; i < n; i++) {
int leftIndex = 2*i + 1;
int rightIndex = 2*i + 2;
if (leftIndex < n) nodes[i]->left = nodes[leftIndex];
if (rightIndex < n) nodes[i]->right = nodes[rightIndex];
}
printf("DFS (Preorder) traversal: ");
DFS(nodes[0]);
printf("\n");
return 0;
}
