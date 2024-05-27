#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    vector<int>v1;

    v1.emplace_back(1);
    v1.emplace_back(69);
    vector<int> v2;
    v2.emplace_back(1);
    v2.emplace_back(2);
    v2.emplace_back(3);

    // cout << v1[0] << endl;
    // cout << v1[1] << endl;
    // cout << v2[0] << endl;
    // cout << v2[1] << endl;
    // cout << v2[2] << endl;

    // Initialise, copy a vector ->
    vector<int>v(5,69);
    vector<int>v2(v);
 
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << endl;
    }

    /*
    
    vector<int>v = {1,2,3,4,5};
// auto it2 = v.end();
auto it = v.begin();

// for(auto i = it; i!=v.end();i++){
//     cout << "The memory location if index " << "i" << " is: " << &(*it) << endl << " and the element stored at that location is: " << *(it) << endl;
//     it++;
// }

// it--;
// cout << *(it) << endl;
// cout << v.back() << endl;

//Printing v vector using the for each loop
// v.erase(v[2]);
v.insert(v.begin()+1,69,69);
for(auto i: v){
    cout << i << endl;
}
    
    */
    return 0;
}