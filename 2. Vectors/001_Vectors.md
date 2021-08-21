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
| <a> at() </a>                | Returns the reference to the element at a particular position (can also be done using ‘[ ]’ operator) | O(1)|
