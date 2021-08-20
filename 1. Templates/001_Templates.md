<h1 align="center"><a href="#">Templates</a></h1>

Templates allow functions and classes to operate same operations with different data types (generuc functions).

## Syntax:
```cpp
template <class  type> 
return-type function-name (parameter-list)
```
## Eg_1. (generic function using template)
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

**Output :**
```
Swapped elements values of a and b are 20 and 10 respectively.
Swapped elements values of a and b are 20.5 and 10.5 respectively.
```
## Eg_2. (generic class using template) 


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
