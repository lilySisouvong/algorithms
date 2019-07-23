/** Djikstra's Shortest Path
 * Finding the shortest path through a graph.
 *
 * The function takes the initial graph, and starting vertex.
 * It then constructs the minimum spanning tree to all vertices in the graph.
 * Return the resulting minimum spanning tree.
 */

#include "../Graphs/Graph.hpp"
#include "../String/String.hpp"
#include "../Queue/Queue.hpp"
#include "../Functions/functions.hpp"

#define UNVISITED 0
#define VISITED 1

Graph djikstras(Graph& G, int vertex){
    std::vector<int> neighbors = G.neighbors(vertex);
    int arr[neighbors.size()];
    Queue queue;
    int minimum= vertex.weight;
    G.set_value(vertex,VISITED);
    for(int i = 0; i<neighbors.size(); ++i){
        G.set_value(neighbors[i], VISITED);
        queue.push(neighbors[i]);
        
    }
    for(int j = 0 ; j < neighbors.size(); ++j){
        minimum = G.min(minimum, neighbors[j].weight);
        
    }

    return dijikstras(G, minimum);
}
