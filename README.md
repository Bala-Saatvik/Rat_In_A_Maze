# Rat_In_A_Maze
Backtracking Approach using Stack Data Structure

# **Introduction**
The Rat Maze algorithm is a pathfinding algorithm used to solve mazes by navigating through the maze cells to reach the destination. This algorithm utilizes a depth-first search approach with backtracking to find a feasible path from the starting point to the destination in a maze.

# **Algorithm Overview**
The rat_maze function in this repository is designed to solve a maze represented by a matrix. The algorithm uses a stack data structure to keep track of visited cells and backtracks when necessary.

# **Procedure Steps**
1. Initialize variables and necessary data structures.<br>
2. Define possible moves in the maze matrix.<br>
3. Mark cells in the maze as visited.<br>
4. Start exploring the maze using a while loop until the destination is reached or no solution is found.<br>
5. Check possible moves in the maze:<br>
- If a valid move is available and not visited, proceed to the next cell.<br>
- If the destination is reached, print "Goal Reached" and exit the loop.<br>
- If no valid move is available, backtrack to the previous cell.<br>
6. Print the path taken by the algorithm.<br>
7. If the maze has no solution, print "Solution does not exist".<br>

# **Output**
![image](https://github.com/Bala-Saatvik/Rat_In_A_Maze/assets/94885375/08eaf204-7d57-4720-ab08-0cb51e27a9b8)
![image](https://github.com/Bala-Saatvik/Rat_In_A_Maze/assets/94885375/da6e43f8-dcbe-4af3-95ff-6bad8536256b)
