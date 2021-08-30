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

# Iterators used with Vectors

1. begin() – Returns an iterator pointing to the first element in the vector
2. end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
3. rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
4. rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
5. cbegin() – Returns a constant iterator pointing to the first element in the vector.
6. cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
7. crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
8. crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

```cpp
// C++ program to illustrate the iterators in vector
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;

	for (int i = 1; i <= 5; i++)
		v.push_back(i);

	cout << "Output of begin and end: ";
	for (auto i = v.begin(); i != v.end(); ++i)
		cout << *i << " ";

	cout << "\nOutput of cbegin and cend: ";
	for (auto i = v.cbegin(); i != v.cend(); ++i)
		cout << *i << " ";

	cout << "\nOutput of rbegin and rend: ";
	for (auto ir = v.rbegin(); ir != v.rend(); ++ir)
		cout << *ir << " ";

	cout << "\nOutput of crbegin and crend : ";
	for (auto ir = v.crbegin(); ir != v.crend(); ++ir)
		cout << *ir << " ";

	return 0;
}

```

*Output* :
```
Output of begin and end: 1 2 3 4 5 
Output of cbegin and cend: 1 2 3 4 5 
Output of rbegin and rend: 5 4 3 2 1 
Output of crbegin and crend : 5 4 3 2 1
```
# Functions used to indicate Capacity of Vector

1. size() – Returns the number of elements in the vector.
2. max_size() – Returns the maximum number of elements that the vector can hold.
3. capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
4. resize(n) – Resizes the container so that it contains ‘n’ elements.
5. empty() – Returns whether the container is empty.
6. shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
7. reserve() – Requests that the vector capacity be at least enough to contain n elements.

```cpp
// C++ program to illustrate the
// capacity function in vector
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v;

	for (int i = 1; i <= 5; i++)
		v.push_back(i);

	cout << "Size : " << v.size();
	cout << "\nCapacity : " << v.capacity();
	cout << "\nMax_Size : " << v.max_size();

	// resizes the vector size to 4
	v.resize(4);

	// prints the vector size after resize()
	cout << "\nSize : " << v.size();

	// checks if the vector is empty or not
	if (v.empty() == false)
		cout << "\nVector is not empty";
	else
		cout << "\nVector is empty";

	// Shrinks the vector
	v.shrink_to_fit();
	cout << "\nVector elements are: ";
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << " ";

	return 0;
}

```

*Output* :
```
Size : 5
Capacity : 8
Max_Size : 4611686018427387903
Size : 4
Vector is not empty
Vector elements are: 1 2 3 4
```
