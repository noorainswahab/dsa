#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* left;
struct Node* right;
};
void preorder(struct Node* root) {
if (!root) return;
printf("%d ", root->data);
preorder(root->left);
preorder(root->right);
}
void inorder(struct Node* root) {
if (!root) return;
inorder(root->left);
printf("%d ", root->data);
inorder(root->right);
}
void postorder(struct Node* root) {
if (!root) return;
postorder(root->left);
postorder(root->right);
printf("%d ", root->data);
}
int main() {
system("getmac");
struct Node n1 = {1, NULL, NULL};
struct Node n2 = {2, NULL, NULL};
struct Node n3 = {3, &n1, &n2};
printf("Preorder traversal: ");
preorder(&n3);
printf("\n");
printf("Inorder traversal: ");
inorder(&n3);
printf("\n");
printf("Postorder traversal: ");
postorder(&n3);
printf("\n");
return 0;
}
