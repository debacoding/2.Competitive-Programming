# Array
* Array is a data structure used to store homogeneous elements at contiguous locations.
* Accessing Time: O(1) {This is possible because elements
                      are stored at contiguous locations}   
* Search Time:   O(n) for Sequential Search
               O(log n) for Binary Search {If Array is sorted}
* Insertion Time: O(n) {The worst case occurs when insertion 
                     happens at the Beginning of an array and 
                     requires shifting all of the elements}
* Deletion Time: O(n) {The worst case occurs when deletion 
                     happens at the Beginning of an array and 
                     requires shifting all of the elements}

# Linked List
* A linked list is a linear data structure (like arrays) where each element is a separate object. 
* *Singly Linked List* : In this type of linked list, every node stores address or reference of next node in list and the last node has next address or reference as NULL.
* *Doubly Linked List* : In this type of Linked list, there are two references associated with each node, One of the reference points to the next node and one to the previous node. 
* *Circular Linked List*: Circular linked list is a linked list where all nodes are connected to form a circle. There is no NULL at the end.
* Accessing time of an element : O(n)
* Search time of an element : O(n)
* Insertion of an Element : O(1) {if we are at the position where 
                                we have to insert 
                                an element}
* Deletion of an Element : O(1) {if we know address of node
                               previous the node to be 
                               deleted}   

# Stack
* A stack or LIFO (last in, first out) is an abstract data type that serves as a collection of elements, with two principal operations: push, which adds an element to the collection, and pop, which removes the last element that was added. 
* Insertion : O(1)
* Deletion :  O(1)
* Access Time : O(n) {Worse case}

# Queue
* A queue or FIFO (first in, first out) is an abstract data type that serves as a collection of elements, with two principal operations: enqueue, the process of adding an element to the collection.(The element is added from the rear side) and dequeue, the process of removing the first element that was added. (The element is removed from the front side).
* Insertion : O(1)
* Deletion  : O(1)
* Access Time : O(n) {Worst case}

# Binary Tree (BT)
* A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.
* A Binary Tree node contains following parts. 
1. Data 
2. Pointer to left child 
3. Pointer to right child 
* A Binary Tree can be traversed in two ways: 
1. Depth First Traversal: Inorder (Left-Root-Right), Preorder (Root-Left-Right) and Postorder (Left-Right-Root) 
2. Breadth First Traversal: Level Order Traversal 
* The maximum number of nodes at level ‘L’ = 2^L.
* Maximum number of nodes = (2^(h + 1)) – 1.
* Minimum possible height =  ceil(Log base2 (n+1)) - 1.
* In Binary tree, number of leaf nodes is always one 
more than nodes with two children.
* Time Complexity of Tree Traversal: O(n)

# Binary Search Tree (BST)
* Binary Search Tree is a Binary Tree with following additional properties: 
1. The left subtree of a node contains only nodes with keys less than the node’s key. 
2. The right subtree of a node contains only nodes with keys greater than the node’s key. 
3. The left and right subtree each must also be a binary search tree. 
* Search :  O(h)
* Insertion : O(h)
* Deletion : O(h)
* Extra Space : O(n) for pointers
* If Binary Search Tree is Height Balanced, then h = O(Log n) 
* Self-Balancing BSTs such as AVL Tree, Red-Black Tree and Splay Tree make sure that height of BST remains O(Log n)

# Binary Heap 
* A Binary Heap is a Binary Tree with following properties. 
1) It’s a complete tree (All levels are completely filled except possibly the last level and the last level has all keys as left as possible). This property of Binary Heap makes them suitable to be stored in an array. 
2) A Binary Heap is either Min Heap or Max Heap. In a Min Binary Heap, the key at root must be minimum among all keys present in Binary Heap. The same property must be recursively true for all nodes in Binary Tree. Max Binary Heap is similar to Min Heap. It is mainly implemented using array. 
* Get Minimum in Min Heap: O(1) {Or Get Max in Max Heap}
* Extract Minimum Min Heap: O(Log n) {Or Extract Max in Max Heap}
* Decrease Key in Min Heap: O(Log n) {Or Decrease Key in Max Heap}
* Insert: O(Log n) 
* Delete: O(Log n)

# Hashing
* Space : O(n)
* Search    : O(1) {Average} O(n) {Worst case}
* Insertion : O(1) {Average} O(n) {Worst case}
* Deletion  : O(1) {Average} O(n) {Worst case}
