#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// class AddElements with function add() for giving the sum of int or float elements.
template <class T> class AddElements{
  private:  
    T element;
  public:
    AddElements (T arg) {element=arg;}
    T add (T x) {return x+element;}    
};

// class template specialization with a function concatenate() to concatenate the second string to the first string. 
template <> class AddElements <string>{
  private:  
    string element;
  public:
    AddElements (string arg) {element=arg;}
    string concatenate (string arg)
    {
      string s = element+arg;
      return s;
    }
};


/* to speed up the process */
int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int static r = start_up();

#define endl '\n';
/* end of ---> to speed up the process */


int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
