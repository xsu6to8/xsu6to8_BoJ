#include<stdio.h>
#include<stdlib.h>

typedef struct _Queue {
    int* data;
    int front, rear, size;
} Queue;

typedef struct _Graph {
    int size;
    int* indegree;
    int** adjList;
} Graph;

// Queue 관련 함수들
Queue* CreateQueue(int n) {
    Queue* Q = (Queue*)malloc(sizeof(Queue));
    Q->data = (int*)malloc(n * sizeof(int));
    Q->front = 0;
    Q->rear = 0;
    Q->size = n;
    return Q;
}

void Enqueue(Queue* Q, int value) {
    Q->data[Q->rear++] = value;
}

int Dequeue(Queue* Q) {
    return Q->data[Q->front++];
}

int IsEmpty(Queue* Q) {
    return Q->front == Q->rear;
}

void DeleteQueue(Queue* Q) {
    free(Q->data);
    free(Q);
}

// Graph 관련 함수들
Graph* CreateGraph(int n) {
    Graph* G = (Graph*)malloc(sizeof(Graph));
    G->size = n;
    G->indegree = (int*)calloc(n, sizeof(int));
    G->adjList = (int**)malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++) {
        G->adjList[i] = (int*)malloc(0); // 초기에는 아무 것도 연결되지 않음
    }
    return G;
}

void AddEdge(Graph* G, int a, int b) {
    G->indegree[b]++;
    G->adjList[a] = (int*)realloc(G->adjList[a], (G->adjList[a][0] + 2) * sizeof(int));
    G->adjList[a][++G->adjList[a][0]] = b;
}

void TopologicalSort(Graph* G) {
    Queue* Q = CreateQueue(G->size);
    for (int i = 0; i < G->size; i++) {
        if (G->indegree[i] == 0) {
            Enqueue(Q, i);
        }
    }

    while (!IsEmpty(Q)) {
        int node = Dequeue(Q);
        printf("%d ", node + 1);

        for (int i = 1; i <= G->adjList[node][0]; i++) {
            int next = G->adjList[node][i];
            if (--G->indegree[next] == 0) {
                Enqueue(Q, next);
            }
        }
    }
    printf("\n");
}

void DeleteGraph(Graph* G) {
    for (int i = 0; i < G->size; i++) {
        free(G->adjList[i]);
    }
    free(G->adjList);
    free(G->indegree);
    free(G);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    Graph* G = CreateGraph(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        AddEdge(G, a - 1, b - 1);
    }

    TopologicalSort(G);
    DeleteGraph(G);

    return 0;
}
