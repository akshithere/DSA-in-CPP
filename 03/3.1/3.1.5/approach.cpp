#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

vector<int> rotateArray(vector<int> &arr, int k) {
    // Write your code here.
    vector<int>temp;
    int n = arr.size();
    k = k % n;
    
    for(int i = 0; i < k; i++){
        temp.emplace_back(arr[i]);
    }
    for(int i = k; i < n; i++){
        arr[i-k] = arr[i];
    }
   for(int i = n - k; i < n; i++){
       arr[i] = temp[i-(n-k)];
   }
return arr;
}


int main(){
    vector<int>arr = {1,2,3,4,5,6};
    rotateArray(arr,3);
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}