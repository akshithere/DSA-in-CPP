#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
int Arr[] = {1,2,3,4,5,69};
bool bs = binary_search(Arr,Arr+6,4);

// binary_search of this STL is pretty fast
// it expects two arugments,
// 1. Pair of range (iterators/pointers)
// 2. The actual Element to search

if(bs){
    cout << "Yes element was found" << endl;
}else{
        cout << "No element was not found" << endl;

}


return 0;
}