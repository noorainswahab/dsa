#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct adjNode {
int vertex;
struct adjNode* next;
};
struct Graph {
int numVertices;
struct adjNode* adjLists[MAX];
};
struct adjNode* createAdjNode(int v) {
struct adjNode* n = (struct adjNode*)malloc(sizeof(struct adjNode));
n->vertex = v; n->next = NULL; return n;
}
struct Graph* createGraph(int vertices) {
struct Graph* g = (struct Graph*)malloc(sizeof(struct Graph));
g->numVertices = vertices;
for (int i = 0; i < vertices; i++) g->adjLists[i] = NULL;
return g;
}
void addEdge(struct Graph* g, int u, int v) {
struct adjNode* n = createAdjNode(v);
n->next = g->adjLists[u]; g->adjLists[u] = n;
n = createAdjNode(u);
n->next = g->adjLists[v]; g->adjLists[v] = n;
}
void DFS(struct Graph* g, int start) {
int visited[MAX] = {0}, stack[MAX], top=-1;
stack[++top] = start;
printf("DFS: ");
while(top!=-1){
int v = stack[top--];
if(!visited[v]){
printf("%d ",v); visited[v]=1;
}
struct adjNode* t = g->adjLists[v];
while(t){if(!visited[t->vertex]) stack[++top]=t->vertex; t=t->next;}
}
printf("\n");
}
void BFS(struct Graph* g, int start) {
int visited[MAX] = {0}, queue[MAX], f=0, r=0;
queue[r++]=start; visited[start]=1;
printf("BFS: ");
while(f!=r){
int v=queue[f++];
printf("%d ",v);
struct adjNode* t = g->adjLists[v];
while(t){
if(!visited[t->vertex]){queue[r++]=t->vertex; visited[t->vertex]=1;}
t=t->next;
}
}
printf("\n");
}
int main() {
system("getmac");
int vertices, edges, u, v, start, choice;
printf("Enter number of vertices: "); scanf("%d",&vertices);
struct Graph* graph = createGraph(vertices);
printf("Enter number of edges: "); scanf("%d",&edges);
for(int i=0;i<edges;i++){printf("Enter edge (u v): "); scanf("%d %d",&u,&v); addEdge(graph,u,v);}
printf("Enter starting vertex: "); scanf("%d",&start);
while(1){
printf("\nChoose traversal: 1.DFS 2.BFS 3.Exit\nChoice: ");
scanf("%d",&choice);
if(choice==1) DFS(graph,start);
else if(choice==2) BFS(graph,start);
else if(choice==3) break;
else printf("Invalid choice!\n");
}
return 0;
}
