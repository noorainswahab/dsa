#include <stdio.h>
#include<stdlib.h>
struct Node {
int data;
struct Node* next;
};
int main() {
struct Node node1, node2;
system("getmac");
printf("Enter value for node 1: ");
scanf("%d", &node1.data);
printf("Enter value for node 2: ");
scanf("%d", &node2.data);
node1.next = &node2;
node2.next = NULL;
printf("%d -> %d\n", node1.data, node1.next->data);
return 0;
}
