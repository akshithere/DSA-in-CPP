#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int missingNumber(vector<int>&arr, int N) {
    // Write your code here.
    // How do i go with hashing here
    unordered_map<int,int> um;
    for(int i = 0; i < arr.size(); i++){
        um[arr[i]]++;
    }
    for(int i = 1; i <= N; i++){
        if(um[i] == 0) return i;
    }
    return -1;
}

int main(){
    
    return 0;
}