#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
#include <unordered_map>

    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> um;
        int prefixSum = 0;
       for(int i = 0; i < nums.size(); i++){
        if(prefixSum < k){
            prefixSum += nums[i];
            um[prefixSum] = i;
            continue;
        }
        prefixSum += nums[i];
        if(prefixSum % k == 0) return true;
        int rem = prefixSum % k;
        int req = k - rem;
        cout << "required is: " << req << "\n";
        if(um.count(req) > 0 && (um[req] - i)>1) return true;
        
        if(um.count(prefixSum) != 0) um[prefixSum] = i;
       } 
       return false;
    }

int main(){
    vector<int> nums = {5,0,0,0};
    int k = 3;
    if(checkSubarraySum(nums,k)){
        cout << "True";
    }else{
        cout << "False";
    }
    return 0;
}