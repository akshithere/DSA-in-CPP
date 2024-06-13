#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int el;
        for(int i = 0; i < n; i++){
            if(cnt == 0){
                el = nums[i];
                cnt++;
            }else if(nums[i] == el){
                cnt++;
            }else{
                cnt--;
            }
        }
        return el;
    }
};

int main(){
    
    return 0;
}