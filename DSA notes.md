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
