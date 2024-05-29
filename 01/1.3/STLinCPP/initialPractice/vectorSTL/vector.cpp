#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>v;
    vector<int>v2(5,1);
    //Size- The number of current elements in the vector
    //Capacity- This starts from 0 and doubles whenever it is exhausted
    for(int i = 0; i <= 9;i++){
        // cout << "The size of the vector is: " << v.size();
        // cout << "The capacity of the vector is: " << v.capacity();
    

        v.push_back(i);
    }
    

    cout << "Element at front: " << v.front();
    cout << "Element at back: " << v.back();
    v.pop_back();
    cout << "Element at back: " << v.back();
    cout << "Element at mid: " << v.at((v.size()/2)) << endl << endl;

    cout << "Size before clearing: " << v.size();
    v.clear();
    cout << "Size after clearing: " << v.size();

    
    return 0;
}