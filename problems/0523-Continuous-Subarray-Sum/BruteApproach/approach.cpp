#include <vector>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum;
        for(int i = 0; i < nums.size(); i++){
            sum = 0;
            for(int j = i; j < nums.size(); j++){
                sum+=nums[j];
                if(sum%k==0 && ((j-i)+1) > 1) return true;
            }
        }
        return false;
    }
};