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

Questions:                             <br />
(1) Pre-Order Traversal (Recursive)    <br />
(2) Pre-Order Traversal (Iterative)    <br />
(3) In-Order Traversal (Recursive)     <br />
(4) In-Order Traversal (Iterative)     <br />
(5) Post-Order Traversal (Recursive)   <br />
(6) Post-Order Traversal (Iterative)   <br />
(7) BFS Traversal (Level order traversal)    <br />
(8) BFS Traversal (Level order traversal) - Print level-by-level (Leetcode)      <br />

---------------------------------------------------------------------------------------------

BFS Traversal of Binary Tree (Applications/Questions):
Notes:     <br />
**(1)** For loop till queue.size() only when you need to print nodes level-by-level (leetcode specific)					 <br />
**(2)** For rest BFS traversals, simply take out front node from queue, and insert left and right childs in queue (within while loop)	 <br />
**(3)** For some BFS traversals, simply insert nodes of any level and insert NULL in Queue at the last iteration. Play with NULL 	 <br />

Questions:       					<br />
(1) Average of Levels in Binary Tree [Easy]   		<br />
(2) Binary Tree Zigzag Level Order Traversal [Medium]   <br />
(3) Minimum Depth of Binary Tree [Easy]                 <br />
(4) Maximum Depth of Binary Tree			<br />

Side Views Pattern Questions:				<br />
(1) Binary Tree Right Side View				<br />
(2) Binary Tree Left Side View				<br />

Pattern: From Right to Left BFS Traversal Questions:    <br />
(1) Find Bottom Left Tree Value				<br />
(2) Maximum Width of Binary Tree [Medium]      - ![#f03c15](https://via.placeholder.com/15/f03c15/000000?text=+) `#f03c15`

---------------------------------------------------------------------------------------------

Mirror Tree questions pattern:  		<br />
(1) Same Tree					<br />
(2) Symmetric Tree				<br />

---------------------------------------------------------------------------------------------

Mixed Questions:					<br />
(1) Invert Binary Tree                - ![#f03c15](https://via.placeholder.com/15/f03c15/000000?text=+) `#f03c15`	
(2) Count Complete Tree Nodes				<br />		
(3) Merge Two Binary Trees [Easy]			<br />

---------------------------------------------------------------------------------------------

Mixed DS:			<br />
(1) Serialize and Deserialize Binary Tree		<br />
(2) Serialize and Deserialize BST			<br />
(3) Vertical Order Traversal of a Binary Tree [Hard]        - ![#f03c15](https://via.placeholder.com/15/f03c15/000000?text=+) `#f03c15``   <br />

---------------------------------------------------------------------------------------------

**Note**: C++ Solutions are provided in the same directory

