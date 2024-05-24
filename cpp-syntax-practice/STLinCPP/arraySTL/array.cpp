#include <iostream>
#include <array>
using namespace std;
// Under the hood the STL array has a similar implementation to normal static array 
// this means that it gives us same static array so it is not much used
int main(){
    array<int,4> a;
    a = {4,3,2,1};
    int size = a.size();
    
    for (int i = 0; i < size; i++)
    {
        cout << a.at(i) << endl;
    }
    cout << "Element at front is: " << a.front() << endl;
    cout << "Element at front is: " << a.back() << endl;
    cout << "Element at begin is: " << a.begin() << endl;
    cout << "is my Array empty? " << a.empty() << endl;
    
    return 0;
}