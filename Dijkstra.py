import math

# Setting infinity value
infinity = math.inf

# List to keep track of processed nodes
processed = []

# Function to find the node with the lowest cost among unprocessed nodes
def find_lowest_cost_node(costs):
    lowest_cost = float('inf')
    lowest_cost_node = None
    # Iterate through costs dictionary
    for node, cost in costs.items():
        # Check if the cost is lower than the lowest cost and if the node is not processed
        if cost < lowest_cost and node not in processed:
            lowest_cost = cost
            lowest_cost_node = node
    return lowest_cost_node

# Nodes initialization
start = 'start'
a = 'a'
b = 'b'
fin = 'fin'

# Graph initialization with nodes and their connections
graph = {}
graph[start] = {}
graph[start][a] = 6
graph[start][b] = 2
graph[a] = {}
graph[a][fin] = 1
graph[b] = {}
graph[b][a] = 3
graph[b][fin] = 5
graph[fin] = {}

# Initial costs from the start node to each node
costs = {}
costs[a] = 6
costs[b] = 2
costs[fin] = infinity

# Initialize dictionary to keep track of parent nodes
parents = {}
parents[a] = start
parents[b] = start
parents[fin] = None

# Dijkstra's algorithm implementation
node = find_lowest_cost_node(costs)
while node is not None:
    # Get cost of the current node
    cost = costs[node]
    # Get neighbors of the current node
    neighbors = graph[node]
    # Iterate through neighbors
    for n in neighbors.keys():
        # Calculate the new cost to reach the neighbor
        new_cost = cost + neighbors[n]
        # Update cost and parent if a shorter path is found
        if costs.get(n, infinity) > new_cost:
            costs[n] = new_cost
            parents[n] = node

    # Mark the current node as processed
    processed.append(node)
    # Find the next node with the lowest cost among unprocessed nodes
    node = find_lowest_cost_node(costs)

# Print the shortest path costs and the parent nodes
print("Shortest path costs:", costs)
print("Parents:", parents)
