#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> um;
       
        for(int j = 0; j < nums.size(); j++){
            int req = target - nums[j];
            if(um.count(req) != 0){
                if(um[req] != j) return {j,um[req]};
            }
            um[nums[j]] = j;
        }
        return {};
    }
};

int main(){
    
    return 0;
}