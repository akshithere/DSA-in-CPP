#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

#include <climits>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        int maxi = nums[0];
        int ansStart = 0;
        int ansEnd = 0;
        for(int i = 1; i < n; i++){
            if(sum+nums[i] > nums[i]){
                sum+= nums[i];
            }else{
                sum = nums[i];
                ansStart = i;
            }
            if(sum > maxi){
                maxi = sum;
                ansEnd = i;
            }
        }
        cout << "The Subarray is: \n";
        for(int i = ansStart; i <= ansEnd; i++){
            cout << nums[i] << " ";
        }
        return maxi;
    }
};

int main(){
    
    return 0;
}