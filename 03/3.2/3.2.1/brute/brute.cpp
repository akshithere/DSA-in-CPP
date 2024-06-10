#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
// why inner loop starting from i+1 because the other element is definitely
// not first element as stated by the problem and the previous elements are 
// already checked so no need to check them again
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target) return {i,j};
            }
        }
        return {};
    }
};

int main(){
    
 return 0;
}