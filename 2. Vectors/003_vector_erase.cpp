#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // size of vector
    int n;
    cin >> n;
    
    // declare vector
    vector<int> v;
    
    
    int x;
    // enter elements
    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }    
    
    int pos, start, end;
    //  position of an element that should be removed from the vector
    cin >> pos;
    // range of positions in vector that should be erased inclusvee of start and exclusive of end
    cin >> start >> end;
    // erase at pos
    v.erase (v.begin() + (pos - 1));
    // erase elements in range of start and end inclusive of start and exclusive of end
    v.erase(v.begin() + start - 1 , v.begin() + end - 1);
    
    // now vactor size
    cout << v.size() << endl;
    
    for(int j =0 ; j< v.size() ; j++)
    {
        cout << v.at(j) << " " ;  
    }
   
    return 0;
}
