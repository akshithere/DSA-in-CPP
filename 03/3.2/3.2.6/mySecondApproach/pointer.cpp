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
        int pos = 0;
        int neg = 0;
        vector<int> temp;
        while(pos < n && neg < n){
            while(nums[pos] < 0){
                pos++;
            }
            temp.emplace_back(nums[pos]);
            while(nums[neg] > 0){
                neg++;
            }
            temp.emplace_back(nums[neg]);
            // Now since current pos and current neg has been added
            // so we will increase the pointers by one 1 pos
            pos++;
            neg++;
        }
        
        
        return temp;
    }
};

int main(){
    Solution myIns;
    

    vector<int> arr = {1,2,-4,-5,3,6,-3,7,8};
    cout << "Array before rearranging is: \n";
    for(auto i : arr){
        cout << i << " ";
    }
    vector<int>temp = myIns.rearrangeArray(arr);
    cout << "\nArray after rearranging is: \n";
    for(auto i : temp){
        cout << i << " ";
    }
    return 0;
}