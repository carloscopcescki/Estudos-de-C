#include <stdio.h>
#define V 5  // Número de vértices no grafo
#define INF 99999  // Valor para representar "infinito" (ausência de caminho)

// Função para encontrar o vértice com a menor distância que ainda não foi visitado
int minDistance(int dist[], int visited[]) {
    int min = INF, min_index;
    // Percorre todos os vértices para encontrar o vértice não visitado com a menor distância
    for (int v = 0; v < V; v++)
        if (!visited[v] && dist[v] <= min)
            min = dist[v], min_index = v;
    return min_index;
}

// Função que implementa o algoritmo de Dijkstra para encontrar as menores distâncias
void dijkstra(int graph[V][V], int src) {
    int dist[V];  // Array para armazenar as menores distâncias do vértice de origem para cada vértice
    int visited[V] = {0};  // Array para marcar quais vértices já foram visitados

    // Inicializa todas as distâncias como "infinito" e marca todos os vértices como não visitados
    for (int i = 0; i < V; i++)
        dist[i] = INF;
    dist[src] = 0;  // A distância do vértice de origem para ele mesmo é 0

    // Encontra o menor caminho para todos os vértices
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited);  // Seleciona o vértice de menor distância
        visited[u] = 1;  // Marca o vértice como visitado

        // Atualiza as distâncias dos vértices vizinhos do vértice selecionado
        for (int v = 0; v < V; v++)
            // Atualiza dist[v] apenas se:
            // 1. Não foi visitado
            // 2. Existe uma aresta entre u e v (graph[u][v] != 0)
            // 3. A distância total do caminho de origem a v através de u é menor que o valor atual de dist[v]
            if (!visited[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    // Imprime o resultado: menor distância do vértice de origem para cada vértice
    printf("Vertex\tDistancia\n");
    for (int i = 0; i < V; i++)
        printf("%d\t\t%d\n", i, dist[i]);
}

int main() {
    // Matriz de adjacência representando o grafo
    // O valor 0 indica ausência de aresta entre os vértices
    int graph[V][V] = {{0, 2, 0, 6, 0},
                       {2, 0, 3, 8, 5},
                       {0, 3, 0, 0, 7},
                       {6, 8, 0, 0, 9},
                       {0, 5, 7, 9, 0}};
    dijkstra(graph, 0);  // Chama o algoritmo de Dijkstra com o vértice de origem 0
    return 0;
}