<h1 align="center"><a href="#"> Vectors </a></h1>

* Vectors are dynamic arrays.

# Vector declaration syntax

```cpp
vector<datatype> a; // empty vector
vector<datatype> b (no. of elements, value of each element); // fixed no. of elements with default value
vector<datatype> c (starting iterator/pointer, ending iterator/pointer); // inserting elements from other data structures
vector<datatype> d (name of vector to be copied);
vector<vector<datatype>> matrix(no. of rows, vector<datatype>(no. of cols, default value)); // declaring a 2D array

vector<datatype> v[10]; // following declaration isn't a vector with 10 elements but an array of size ten having vector elements
```

# Iterators

1. begin() – Returns an iterator pointing to the first element in the vector
2. end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
3. rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
4. rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
5. cbegin() – Returns a constant iterator pointing to the first element in the vector.
6. cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
7. crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
8. crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

