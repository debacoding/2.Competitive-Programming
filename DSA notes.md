# Average case Time Complexity
| Data structure | Access | Search | Insertion | Deletion |
|----------------|:------:|:------:|:---------:|:--------:|
| Array | O(1) | O(N) | O(N) | O(N) |
| Stack | O(N) | O(N) | O(1) | O(1) |
| Queue | O(N) | O(N) | O(1) | O(1) |
| Singly Linked List | O(N) | O(N) | O(1) | O(1) |
| Doubly Linked List | O(N) | O(N) | O(1) | O(1) |
| Hash table | O(1) | O(1) | O(1) | O(1) |
| BST | O(log N) | O(log N) | O(log N) | O(log N) |
| AVL Tree | O(log N) | O(log N) | O(log N) | O(log N) |
| B Tree | O(log N) | O(log N) | O(log N) | O(log N) |
| Red Black Tree | O(log N) | O(log N) | O(log N) | O(log N) |

# Worst case Time Complexity
| Data structure | Access | Search | Insertion | Deletion |
|----------------|:------:|:------:|:---------:|:--------:|
| Array | O(1) | O(N) | O(N) | O(N) |
| Stack | O(N) | O(N) | O(1) | O(1) |
| Queue | O(N) | O(N) | O(1) | O(1) |
| Singly Linked List | O(N) | O(N) | O(1) | O(1) |
| Doubly Linked List | O(N) | O(N) | O(1) | O(1) |
| Hash table | O(N) | O(N) | O(N) | O(N) |
| BST | O(N) | O(N) | O(N) | O(N) |
| AVL Tree | O(log N) | O(log N) | O(log N) | O(log N) |
| Binary Tree | O(N) | O(N) | O(N) | O(N) |
| Red Black Tree | O(log N) | O(log N) | O(log N) | O(log N) |

# Time and Space complexity
| Sorting algorithm | Time Complexity | | | Space Complexity|
|-------------------|:---------------:|:---:|:---:|:------------:|
|  | *Best case* | *Average case* | *Worst case* | *Worst case* |
| Bubble sort | Omega(N) | Theta(N^2) | O(N^2) | O(1) |
| Insertion sort | Omega(N) | Theta(N^2) | O(N^2) | O(1) |
| Selection sort | Omega(N^2) | Theta(N^2) | O(N^2) | O(1) |
| Merge sort | Omega(N log N) | Theta(N log N) | O(N log N) | O(N) |
| Heap sort | Omega(N log N) | Theta(N log N) | O(N log N) | O(1) |
| Merge sort | Omega(N log N) | Theta(N log N) | O(N^2) | O(log N) |
| Radix sort | Omega(N k) | Theta(N k) | O(N k) | O(N + k) |
| Count sort | Omega(N + k) | Theta(N + k) | O(N + k) | O(k) |
| Bucket sort | Omega(N + k) | Theta(N + k) | O(N^2) | O(N) |


<h1 align="center"><a href="#"> Templates </a></h1>


* Templates allow functions and classes to operate same operations with different data types (generuc functions).
* Syntax:
```cpp
template <class  type> 
return-type function-name (parameter-list)
```
* Eg_1. (generic function using template)
swap two variables of int type and two of float type

```cpp
#include <bits/stdc++.h>
using namespace std ;
// creating a generic function ‘swap (parameter-list)’ using template :
template <class X>
void swap( X &a, X &b) {
    X temp;
    temp = a;
    a = b;
    b = temp;
    cout << " Swapped elements values of a and b are  " << a << " and  " << b << " respectively " << endl;
}

int main( ) {
    int a = 10, b = 20 ;
    float c = 10.5, d = 20.5 ;
    swap(a , b);          // function swapping ‘int’ elements
    swap(c , d);          // function swapping ‘float’ elements
    return 0;
}
```

*Output* :
```
Swapped elements values of a and b are 20 and 10 respectively.
Swapped elements values of a and b are 20.5 and 10.5 respectively.
```
* Eg_2. (generic class using template) 


```cpp
template <class T> 
class mypair {
    T values [2];
  public:
    mypair (T first, T second)
    {
      values[0]=first; values[1]=second;
    }
};
```

<h1 align="center"><a href="#"> Array </a></h1>

* Array is a data structure used to store homogeneous elements at contiguous locations.
* Array index starts with 0 and goes till size of array minus 1.
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
```cpp
#include <array>

// Array 1 uses aggregate initialisation
array<int, 5> array{{1, 2, 3, 4, 5}};
array<int, 5> array_2 = {1, 2, 3, 4, 5}

array.size(); // Get size
array.max_size(); // Get max size
array.empty(); // Check if empty

// Get iterator to beginning and end
array.begin();
array.end();

// Get reverse iterators
array.rbegin(); // Last element backwards
array.rend(); // First element - 1 index

// Get values at beginning and end
array.front();
array.end();

// Get values at index
array.at(INDEX);

// Just directly access the entire array
array.data();

```
                     

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

# Graph
* Graph is a data structure that consists of following two components:
1. A finite set of vertices also called as nodes.
2. A finite set of ordered pair of the form (u, v) called as edge.
* *Undirected Graph* : The graph in which all the edges are bidirectional.
* *Directed Graph* : The graph in which all the edges are unidirectional.
* *Weighted Graph* : The Graph in which weight is associated with the edges.
* *Unweighted Graph* : The Graph in which their is no weight associated to the edges. 
* Time Complexities in case of Adjacency Matrix :
Traversal :(By BFS or DFS) O(V^2)
Space : O(V^2)
* Time Complexities in case of Adjacency List :
Traversal :(By BFS or DFS) O(V + E)
Space : O(V+E)

# Trie
* Tries are also known as radix tree or prefix tree.
* Trie is an efficient data structure for searching words in dictionaries, search complexity with Trie is linear in terms of word (or key) length to be searched.
* Using trie, we can search the key in O(M) time where M is maximum string length.
* Syntax:
```cpp
struct trie_node
{
    int value; /* Used to mark leaf nodes */
    trie_node_t *children[ALPHABET_SIZE];
};
```
* Insert time : O(M) where M is the length of the string.
* Search time : O(M) where M is the length of the string.
* Space : O(ALPHABET_SIZE * M * N) where N is number of 
        keys in trie, ALPHABET_SIZE is 26 if we are 
        only considering upper case Latin characters.
* Deletion time : O(M)

# Segment Tree
* This data structure is usually implemented when there are a lot of queries on a set of values. These queries involve minimum, maximum, sum, .. etc on a input range of given set. Queries also involve updation of values in given set. Segment Trees are implemented using array.
* Construction of segment tree : O(N)
* Query : O(log N)
* Update : O(log N)
* Space : O(N) {Exact space = 2 * N - 1}

# Suffix Tree
* Suffix Tree is mainly used to search a pattern in a text.
* Suffix Tree is compressed trie of all suffixes, so following are very abstract steps to build a suffix tree from given text.
1) Generate all suffixes of given text.
2) Consider all suffixes as individual words and build a compressed trie. 
