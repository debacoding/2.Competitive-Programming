<h1 align="center"><a href="#"> Vectors </a></h1>

Vectors are dynamic arrays.

## Vector declaration syntax

```cpp
vector<datatype> a; // empty vector
vector<datatype> b (no. of elements, value of each element); // fixed no. of elements with default value
vector<datatype> c (starting iterator/pointer, ending iterator/pointer); // inserting elements from other data structures
vector<datatype> d (name of vector to be copied);
vector<vector<datatype>> matrix(no. of rows, vector<datatype>(no. of cols, default value)); // declaring a 2D array

vector<datatype> v[10]; // following declaration isn't a vector with 10 elements but an array of size ten having vector elements
```
## User inputs in a vector
```cpp
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }   
```
## Functions
| <center> Function </center>  | <center> Purpose </center>  | <center> Complexity </center>  |
| :--------------------------- | :-------------------------- | :----------------------------- |
| <a> at() </a> | Returns the reference to the element at a particular position (can also be done using ‘[ ]’ operator) | O(1)|
| <a> clear() </a> | Deletes all the elements from the vector and assign an empty vector | O(n) |
| <a> erase() </a> | | |
| <a> push_back() </a> | Inserts a new element at the end of the vector | O(1) |
| <a> pop_back() </a> | Removes the last element from the vector | O(1) |
| <a> size() </a> | Get size | O(1) |
| <a> resize() </a> | Resizes the vector to the new length which can be less than or greater than the current length | O(n) |
| <a> max_size() </a> | Get max size | |
| <a> empty() </a> | Check if empty | O(1) |
| <a> reserve() </a> | Request change in capacity | |
| <a> shrink_to_fit() </a> | Shrink to fit | |
| <a> capacity() </a> | Return size of allocated storage capacity | |
| <a> begin() </a> | Get iterator to beginning | |
| <a> end() </a> | Get iterator to end | |
| <a> rbegin() </a> | Get reverse iterator(last element backwards) | |
| <a> rend() </a> | Get reverse iterator(first element - 1 index) | |
| <a> front() </a> | Get values at beginning | O(1) |
| <a> back() </a> | Get values at end | O(1) |
| <a> data() </a> | Get direct access at the entire underlying array | |
| <a> assign() </a> | assign vector content | |
| <a> insert(*itr,#times,val) </a> | | O(m + n) |
| <a> swap() </a> | To swap values | O(1) |
| <a> emplace() </a> | | |
| <a> emplace_back() </a> | | |

  


## Passing vactor as argument to a function
```cpp
void function_name(vector<datatype>& v){
....
}
```

## Implementation 1
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // vector declaration
    vector<int> v; // v.size() == 0
    
    // entering elements
    v.push_back(1); 
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    
    // traverse vectors using for loop
    for(int i = 0; i < v.size(); i ++){
        cout << v[i] << " ";
    }
    cout << endl;
    
    
    
    // traverse vectors without modifying elements
    for(int x:v){
        cout << x << " ";
    }
    cout << endl;
    
    
    
    
    // declaraing iterator
    vector<int> :: iterator it1;
    // traverse vectors using iterators
    for(it1 = v.begin(); it1 != v.end(); it1++){
        cout << *it1 << " ";
    }
    cout << endl;
    
    
    
    
    // traverse using iterator with "auto" keyword
    for(auto it2 = v.begin(); it2 != v.end(); it2++){
        cout << *it2 << " ";
    }
    cout << endl;
    
    
    
    
    // vector initialization using array
    int arr[] = {10,5,20};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vec(arr,arr + n);
    
    for(auto itr = vec.begin(); itr != vec.end(); itr++){
        cout << *itr << " ";
    }
    cout << endl;
    
    
    
    
    // checking vector capacity
    cout << vec.capacity() << endl;
    
    
	return 0;
}
```
## Implementation 2
```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> numbers;

	if (numbers.empty()){ //check if the vector is empty?
		cout << "The vector is empty " << endl;
	}

	for(int i=0; i<100; i+=10){ //Add some values to the vector
		numbers.push_back(i);
	}

	cout << "Size of the vector is " << numbers.size() << endl;

	// iterating over the vector, declaring the iterator
	vector <int>::iterator it;

	cout << "The vector contains: ";
	for (it=numbers.begin(); it!=numbers.end(); it++) {
		cout << "  " << *it;
	}

	// getting value at particular position
	int position = 5;
	cout<<"\nVector at position "<<position<<" contains "<<numbers.at(position)<<endl;

	// deleting an element at position
	numbers.erase(numbers.begin() + position);
	cout<<"Vector at position "<<position<<" contains "<<numbers.at(position)<<endl;

	// deleting a range of elements, first two elements
	// NOTE: You may expect elements at 0, 1 and 2 to be deleted
	// but index 2 is not inclusive.
	numbers.erase(numbers.begin(), numbers.begin()+2);
	cout << "The vector contains: ";
	for (it=numbers.begin(); it!=numbers.end(); it++) {
		cout << "  " << *it;
	}

	// Clearing the vector
	numbers.clear();
	if (numbers.empty()){
		cout << "\nThe vector is now empty again ";
	}

return 0;
}
```
**Output** : 
```
The vector is empty 
Size of the vector is 10
The vector contains:   0  10  20  30  40  50  60  70  80  90
Vector at position 5 contains 50
Vector at position 5 contains 60
The vector contains:   20  30  40  60  70  80  90
The vector is now empty again 
```
## Implementation 3
```cpp
#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> v;


// Size
unsigned int size = v.size();

// Insert head, index, tail
v.insert(v.begin(), value);             // head
v.insert(v.begin() + index, value);     // index
v.push_back(value);                     // tail

// Access head, index, tail
int head = v.front();       // head
head = v[0];                // or using array style indexing

int value = v.at(index);    // index
value = v[index];           // or using array style indexing

int tail = v.back();        // tail
tail = v[v.size() - 1];     // or using array style indexing

// Iterate
for(vector<int>::iterator it = v.begin(); it != v.end(); it++) 
{
    cout << *it << std::endl;
}

// Remove head, index, tail
v.erase(v.begin());             // head
v.erase(v.begin() + index);     // index
v.pop_back();                   // tail

// Clear
v.clear();


return 0;
}
```
