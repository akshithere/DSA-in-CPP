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
        if(nums[i] >= 0){
            pos.emplace_back(nums[i]);
        }else{
            neg.emplace_back(nums[i]);
        }
       } 
       
       for(int i = 0; i < n/2; i++){
        nums[2*i] = pos[i];
        nums[2*i+1] = neg[i];
       }
        return nums;
    }
   
};

int main(){
    
    return 0;
}