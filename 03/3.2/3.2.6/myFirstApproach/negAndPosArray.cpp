#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>pos;
        vector<int>neg;
       for(int i = 0; i < n; i++){
        if(nums[i] < 0) continue;
        pos.emplace_back(nums[i]);
       } 
       for(int i = 0; i < n; i++){
        if(nums[i] >= 0) continue;
        neg.emplace_back(nums[i]);
       } 
       for(int i = 0; i < n; i = i + 2){
        nums[i] = pos[i/2];
       }
       for(int i = 1; i < n; i = i + 2){
        nums[i] = neg[i/2];
       }
        return nums;
    }
   
};

int main(){
    
    return 0;
}