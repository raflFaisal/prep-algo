# Descripton
This pattern is related to Binary Tree problems. 	

**Binary Tree Traversals**:
2 ways to traverse a tree:
DFS:
----
	(1) Recursively => *Easiest way* => Uses OS stack for recursion
		- Top-to-down approach
		- Bottom-to-up approach
	(2) Iterative using Stack => *Better way* => Uses own stack => faster than recursion
	(3) Morris Traversal => "Uses O(1) Space"
BFS:
----
	- Using Queue(s)


Time Complexity of all => O(N)

**Note**: Follow-up question on this problem is to solve this using Iterative way (using own stack)

Questions:
(1) Pre-Order Traversal (Recursive)
(2) Pre-Order Traversal (Iterative)
(3) In-Order Traversal (Recursive)
(4) In-Order Traversal (Iterative)
(5) Post-Order Traversal (Recursive)
(6) Post-Order Traversal (Iterative)
(7) BFS Traversal (Level order traversal)
(8) BFS Traversal (Level order traversal) - Print level-by-level (Leetcode)

---------------------------------------------------------------------------------------------

BFS Traversal of Binary Tree (Applications/Questions):
Notes: 
**(1)** For loop till queue.size() only when you need to print nodes level-by-level (leetcode specific)
**(2)** For rest BFS traversals, simply take out front node from queue, and insert left and right childs in queue (within while loop)
**(3)** For some BFS traversals, simply insert nodes of any level and insert NULL in Queue at the last iteration. Play with NULL 

Questions:
(1) Average of Levels in Binary Tree [Easy]
(2) Binary Tree Zigzag Level Order Traversal [Medium]
(3) Minimum Depth of Binary Tree [Easy]
(4) Maximum Depth of Binary Tree

Side Views Pattern Questions:
(1) Binary Tree Right Side View
(2) Binary Tree Left Side View

Pattern: From Right to Left BFS Traversal Questions:
(1) Find Bottom Left Tree Value
(2) Maximum Width of Binary Tree [Medium]      - ![#f03c15] revise-this`#f03c15`

---------------------------------------------------------------------------------------------

Mirror Tree questions pattern:
(1) Same Tree
(2) Symmetric Tree

---------------------------------------------------------------------------------------------

Mixed Questions:
(1) Invert Binary Tree                - ![#f03c1] revise-this`#f03c15`
(2) Count Complete Tree Nodes
(3) Merge Two Binary Trees [Easy]

---------------------------------------------------------------------------------------------

Mixed DS:
(1) Serialize and Deserialize Binary Tree
(2) Serialize and Deserialize BST
(3) Vertical Order Traversal of a Binary Tree [Hard]        - ![#f03c1] revise-this`#f03c15`

---------------------------------------------------------------------------------------------


**Note**: C++ Solutions are provided in the same directory

