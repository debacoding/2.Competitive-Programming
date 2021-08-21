#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // size of vector
    int n;
    cin >> n;  
    
    // vector<datatype> b (no. of elements, value of each element)
    vector<int> v (n,0) ; 
    
    // entering elements into vector
    for(int i = 0; i < n; i++){
    cin >> v[i]; 
    }
    
    // sorting vector
    sort(v.begin(),v.end());
    
    // printing sorted vector
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
        
    return 0;
}

