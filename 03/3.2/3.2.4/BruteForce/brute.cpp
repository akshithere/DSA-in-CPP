#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int max = INT_MIN;
        for(int i = 0; i < n; i++){
            sum = 0;
            for(int j = i; j < n; j++){
                sum+= nums[j];
                if(sum > max) max = sum;
            }
            
        }
        return (n > 1) ? max : nums[0];
    }
};

int main(){
    
    return 0;
}