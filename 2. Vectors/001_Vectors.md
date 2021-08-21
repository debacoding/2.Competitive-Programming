<h1 align="center"><a href="#"> Vectors </a></h1>

Vectors are dynamic arrays.

## Vector declaration syntax

```cpp
vector<datatype> a; // empty vector
vector<datatype> b (no. of elements, value of each element); // fixed no. of elements with default value
vector<datatype> c (starting iterator/pointer, ending iterator/pointer); // inserting elements from other data structures
vector<datatype> d (name of vector to be coped);
vector<vector<datatype>> matrix(no. of rows, vector<datatype>(no. of cols, default value)); // declaring a 2D array

vector<datatype> v[10]; // following declaration isn't a vector with 10 elements but an array of size ten having vector elements
```
## Functions
| <center> Function </center>  | <center> Purpose </center>  | <center> Complexity </center>  |
| :--------------------------- | :-------------------------- | :----------------------------- |
| <a> at() </a> | Returns the reference to the element at a particular position (can also be done using ‘[ ]’ operator) | O(1)|
| <a> clear() </a> | Deletes all the elements from the vector and assign an empty vector | O(n) |
| <a> erase() </a> | | |
| <a> push_back() </a> | Inserts a new element at the end of the vector | O(1) |
| <a> pop_back() </a> | Removes the last element from the vector | O(1) |
| <a> size() </a> | Get size | |
| <a> resize() </a> | Resizes the vector to the new length which can be less than or greater than the current length | O(n) |
| <a> max_size() </a> | Get max size | |
| <a> empty() </a> | Check if empty | |
| <a> reserve() </a> | Request change in capacity | |
| <a> shrink_to_fit() </a> | Shrink to fit | |
| <a> capacity() </a> | Return size of allocated storage capacity | |
| <a> begin() </a> | Get iterator to beginning | |
| <a> end() </a> | Get iterator to end | |
| <a> rbegin() </a> | Get reverse iterator(last element backwards) | |
| <a> rend() </a> | Get reverse iterator(first element - 1 index) | |
| <a> front() </a> | Get values at beginning | |
| <a> end() </a> | Get values at end | |
| <a> data() </a> | Get direct access at the entire underlying array | |
| <a> assign() </a> | assign vector content | |
| <a> inser() </a> | | |
| <a> swap() </a> | To swap values | |
| <a> emplace() </a> | | |
| <a> emplace_back() </a> | | |

  


## Passing vactor as argument to a function
```cpp
void function_name(vector<datatype>& v){
....
}
```
