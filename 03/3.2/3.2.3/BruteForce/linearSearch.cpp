#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
   
        
        for(int i = 0; i < nums.size(); i++){
            count = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] == nums[i]) count++;
                if(count > nums.size()/2){
                   
                     return nums[i];
                }
            }
        }
        return -1;
    }
};