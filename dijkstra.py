#with user input
import heapq

def dijkstra(graph, start):
    distances = {node: float('inf') for node in graph}
    distances[start] = 0
    heap = [(0, start)]
    while heap:
        current_dist, current_node = heapq.heappop(heap)
        if current_dist > distances[current_node]:
            continue
        for neighbor, weight in graph[current_node].items():
            distance = current_dist + weight
            if distance < distances[neighbor]:
                distances[neighbor] = distance
                heapq.heappush(heap, (distance, neighbor))
    return distances

def find_optimal_route(graph, start, destination):
    distances = dijkstra(graph, start)
    if distances[destination] == float('inf'):
        return None
    route = []
    node = destination
    while node != start:
        route.append(node)
        neighbors = graph[node]
        min_distance = float('inf')
        next_node = None
        for neighbor, weight in neighbors.items():
            if distances[neighbor] + weight == distances[node] and distances[neighbor] < min_distance:
                next_node = neighbor
                min_distance = distances[neighbor]
        if next_node is None or next_node in route:
            return None
        node = next_node
    route.append(start)
    route.reverse()
    return route

def get_graph_from_user():
    graph = {}
    while True:
        node = input("Enter a node (or 'done' if finished): ").strip().upper()
        if node == 'DONE':
            break
        connections = {}
        while True:
            neighbor = input(f"Enter a neighbor node for '{node}' (or 'done' if finished): ").strip().upper()
            if neighbor == 'DONE':
                break
            weight = int(input(f"Enter the weight between '{node}' and '{neighbor}': "))
            connections[neighbor] = weight
        graph[node] = connections
    return graph

# Example usage
graph = get_graph_from_user()
print("Entered graph:")
print(graph)

start = input("Enter the start node: ").strip().upper()
destination = input("Enter the destination node: ").strip().upper()

optimal_route = find_optimal_route(graph, start, destination)
if optimal_route is None:
    print("No route exists.")
else:
    print("Optimal route:", optimal_route)
'''
Enter a node (or 'done' if finished): A
Enter a neighbor node for 'A' (or 'done' if finished): B
Enter the weight between 'A' and 'B': 3
Enter a neighbor node for 'A' (or 'done' if finished): D
Enter the weight between 'A' and 'D': 2
Enter a neighbor node for 'A' (or 'done' if finished): done
Enter a node (or 'done' if finished): B
Enter a neighbor node for 'B' (or 'done' if finished): D
Enter the weight between 'B' and 'D': 2
Enter a neighbor node for 'B' (or 'done' if finished): C
Enter the weight between 'B' and 'C': 4
Enter a neighbor node for 'B' (or 'done' if finished): A
Enter the weight between 'B' and 'A': 3
Enter a neighbor node for 'B' (or 'done' if finished): done
Enter a node (or 'done' if finished): C
Enter a neighbor node for 'C' (or 'done' if finished): B
Enter the weight between 'C' and 'B': 4
Enter a neighbor node for 'C' (or 'done' if finished): D
Enter the weight between 'C' and 'D': 5
Enter a neighbor node for 'C' (or 'done' if finished): E
Enter the weight between 'C' and 'E': 6
Enter a neighbor node for 'C' (or 'done' if finished): done
Enter a node (or 'done' if finished): D
Enter a neighbor node for 'D' (or 'done' if finished): A
Enter the weight between 'D' and 'A': 2
Enter a neighbor node for 'D' (or 'done' if finished): B
Enter the weight between 'D' and 'B': 2
Enter a neighbor node for 'D' (or 'done' if finished): C
Enter the weight between 'D' and 'C': 5
Enter a neighbor node for 'D' (or 'done' if finished): E
Enter the weight between 'D' and 'E': 4
Enter a neighbor node for 'D' (or 'done' if finished): done
Enter a node (or 'done' if finished): E
Enter a neighbor node for 'E' (or 'done' if finished): C
Enter the weight between 'E' and 'C': 6
Enter a neighbor node for 'E' (or 'done' if finished): D
Enter the weight between 'E' and 'D': 4
Enter a neighbor node for 'E' (or 'done' if finished): done
Enter a node (or 'done' if finished): done
Entered graph:
{'A': {'B': 3, 'D': 2}, 'B': {'D': 2, 'C': 4, 'A': 3}, 'C': {'B': 4, 'D': 5, 'E': 6}, 'D': {'A': 2, 'B': 2, 'C': 5, 'E': 4}, 'E': {'C': 6, 'D': 4}}
'''
