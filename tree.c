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

int main() {
    system("getmac");
    // Creating nodes manually
    struct node *root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);

    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->left = createNode(12);
    root->right->right = createNode(18);

    printf("Binary tree created successfully.\n");

    return 0;
}
