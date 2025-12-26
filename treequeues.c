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
struct node* buildTree(int arr[], int i, int n) {
if (i >= n) return NULL;
struct node *root = createNode(arr[i]);
root->left = buildTree(arr, 2*i + 1, n);
root->right = buildTree(arr, 2*i + 2, n);
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
int n;
system(“getmac”);
printf("Enter number of elements in array: ");
scanf("%d", &n);
int arr[n];
printf("Enter elements of array:\n");
for (int i = 0; i < n; i++)
scanf("%d", &arr[i]);
struct node *root = buildTree(arr, 0, n);
printf("Inorder traversal of the constructed tree: ");
inorder(root);
printf("\n");
return 0;
}
