<n1 align="center"> Arrays </h1>

Contiguous and continuous collection of homogeneous elements that can be accessed by index

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
