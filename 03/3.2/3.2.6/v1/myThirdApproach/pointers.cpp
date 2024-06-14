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
        vector<int>temp(n);
        int pos = 0;
        int neg = 1;
        for(int i = 0; i < n; i++){
            if(nums[i] < 0){
                temp[neg] = nums[i];
                neg+=2;
            }else{
                temp[pos] = nums[i];
                pos+=2;
            }
        }
        return temp;
    }
};

int main(){
    
    return 0;
}