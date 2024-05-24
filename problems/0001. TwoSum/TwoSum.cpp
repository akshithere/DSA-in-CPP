// Can be solved with brute force
// Can also be optimally solved- Here two optimal solutions are discussed.

/*
Solution Of Two Sum Using two forloops

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>output;
        unordered_map<int,int>um;
        //Build the hashMap
        // Nums 2,7,6,3  target- 9
        // HM-{{2:0},{7:1},{6:2},{3:3}}
        for(int i = 0;i < nums.size();i++){
            um[nums[i]] = i;
        }
        //Fetching from the UM
        for(int i=0;i<nums.size();i++){
            //Finding the complement
            int complement = target - nums[i];
            if(um.count(complement) && um[complement] != i ){
                return {i,um[complement]};
            }
        }
        return {};
    }
};

*/

// Solution using one for loop
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // skipping the build the um part
        int size = nums.size();
        unordered_map<int,int>um;
        for(int i = 0;i<size;i++){
            int complement = target - nums[i];
            if(um.count(complement)){
                return {i,um[complement]};
            }
            um[nums[i]] = i;
        }
        return {};
        
    }
};