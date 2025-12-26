#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *left;
struct node *right;
};
struct node* createNode(int value) {
struct node *n = (struct node*)malloc(sizeof(struct node));
n->data = value;
n->left = n->right = NULL;
return n;
}
struct node* insert(struct node* root, int value) {
if (root == NULL)
return createNode(value);
if (value < root->data)
root->left = insert(root->left, value);
else if (value > root->data)
root->right = insert(root->right, value);
return root;
}
struct node* minValueNode(struct node* root) {
struct node* current = root;
while (current && current->left != NULL)
current = current->left;
return current;
}
struct node* deleteNode(struct node* root, int key) {
if (root == NULL) return root;
if (key < root->data)
root->left = deleteNode(root->left, key);
else if (key > root->data)
root->right = deleteNode(root->right, key);
else {
if (root->left == NULL) {
struct node* temp = root->right;
free(root);
return temp;
}
else if (root->right == NULL) {
struct node* temp = root->left;
free(root);
return temp;
}
struct node* temp = minValueNode(root->right);
root->data = temp->data;
root->right = deleteNode(root->right, temp->data);
}
return root;
}
void inorder(struct node *root) {
if (root) {
inorder(root->left);
printf("%d ", root->data);
inorder(root->right);
}
}
int main() {
system("getmac");
struct node *root = NULL;
int n, value, key;
printf("Enter number of nodes to insert: ");
scanf("%d", &n);
for (int i = 0; i < n; i++) {
printf("Enter value for node %d: ", i+1);
scanf("%d", &value);
root = insert(root, value);
}
printf("Inorder traversal: ");
inorder(root);
printf("\n");
printf("Enter value to delete: ");
scanf("%d", &key);
root = deleteNode(root, key);
printf("Inorder after deletion: ");
inorder(root);
printf("\n");
return 0;
}
