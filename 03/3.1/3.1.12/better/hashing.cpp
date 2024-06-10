#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include <climits>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    map<long,int>mp;
    int n = a.size();
    long long prefixSum = 0;
    int maxLen = 0;
    for(int i = 0; i < n; i++){
        prefixSum += a[i];
        if(prefixSum == k){
        maxLen = max(maxLen,i+1);
        } 
        long long req = prefixSum - k;
        if(mp.count(req) != 0) maxLen = max(maxLen,i-mp[req]);
        //
        if(mp.count(prefixSum) == 0) mp[prefixSum] = i;
    }
    return maxLen;
}

int main(){
    
    return 0;
}