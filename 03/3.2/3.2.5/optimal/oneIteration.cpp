#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = INT_MAX;
        int profit = INT_MIN;
        for(int i = 0; i < n; i++){
            if(prices[i] < mini) mini = prices[i];
            profit = max(profit,prices[i] - mini);
        }
        return profit;
    }
};

int main(){
    
    return 0;
}