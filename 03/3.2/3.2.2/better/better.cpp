#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<unordered_map>
using namespace std;

void better(vector<int>arr,int n){
unordered_map<int,int> um;
for(int i = 0; i < )
}
// This approach will not optimise the 3 counter vsriable vali approach both will take O(2N) TC

int main(){
    vector<int> arr = {0,1,1,2,1,0,0,2,1,1,2,1,0};
    cout << "Array before: \n";
    for(int i : arr){
        cout  << i << " ";
    }
    better(arr,arr.size());

    cout << "\nArray after: \n";
    for(int i : arr){
        cout  << i << " ";
    }

    return 0;
}