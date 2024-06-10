#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

class Solution {
public:
    string twoSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int left = 0;
        int right = n-1;
        while(left <= right){
            if((nums[left] + nums[right]) < target){
                left++;
                continue;
            }else if((nums[left] + nums[right]) > target){
                right--;
                continue;
            }else{
                return "YES";
            }
        }
        return "NO";
    }
};

int main(){
    
    return 0;
}