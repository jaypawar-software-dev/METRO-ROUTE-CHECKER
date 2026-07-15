#include <stdio.h>
#include <limits.h>

#define V 5 // Total 5 Stations

// Station names corresponding to Index 0 to 4
char stations[V][30] = {"PCMC", "Bhosari", "Khadki", "Shivaji Nagar", "Swargate"};

// Function to find minimum distance node
int minDistance(int dist[], int sptSet[]) {
    int min = INT_MAX, min_index;
    int v;
    for (v = 0; v < V; v++) {
        if (sptSet[v] == 0 && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

// Function to calculate Shortest Path using Dijkstra's Algorithm
void findShortestRoute(int graph[V][V], int src, int dest) {
    int dist[V]; 
    int sptSet[V]; 
    int i, count, u, v;

    for (i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = 0;
    }

    dist[src] = 0;

    for (count = 0; count < V - 1; count++) {
        u = minDistance(dist, sptSet);
        sptSet[u] = 1;

        for (v = 0; v < V; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    if (dist[dest] == INT_MAX) {
        printf("\nRoute not found!\n");
        return;
    }

    // Calculations
    int distance = dist[dest];
    int timeTaken = distance * 2;   // 2 mins per km
    int fare = 10 + (distance * 2);  // Base fare 10 Rs + 2 Rs per km

    printf("\n==============================");
    printf("\n     PUNE METRO TRIP DETAILS   ");
    printf("\n==============================");
    printf("\nSource Station      : %s", stations[src]);
    printf("\nDestination Station : %s", stations[dest]);
    printf("\nTotal Distance      : %d KM", distance);
    printf("\nEstimated Time      : %d Minutes", timeTaken);
    printf("\nCalculated Fare     : Rs. %d", fare);
    printf("\n==============================\n");
}

int main() {
    // Distance matrix between stations
    int graph[V][V] = {
        {0, 5, 0, 0, 0},  // PCMC to Bhosari (5km)
        {5, 0, 6, 0, 0},  // Bhosari to Khadki (6km)
        {0, 6, 0, 4, 0},  // Khadki to Shivaji Nagar (4km)
        {0, 0, 4, 0, 7},  // Shivaji Nagar to Swargate (7km)
        {0, 0, 0, 7, 0}   // Swargate
    };

    int srcChoice, destChoice, i;

    printf("=== PUNE METRO STATION LIST ===\n");
    for (i = 0; i < V; i++) {
        printf("%d. %s\n", i, stations[i]);
    }

    printf("\nEnter Source Station Number (0-4): ");
    scanf("%d", &srcChoice);
    printf("Enter Destination Station Number (0-4): ");
    scanf("%d", &destChoice);

    if (srcChoice < 0 || srcChoice >= V || destChoice < 0 || destChoice >= V) {
        printf("Invalid Selection!\n");
    } else if (srcChoice == destChoice) {
        printf("Source and Destination are same!\n");
    } else {
        findShortestRoute(graph, srcChoice, destChoice);
    }

    return 0;
}