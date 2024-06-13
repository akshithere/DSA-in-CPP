#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max = 0;
       for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if((prices[j] - prices[i]) > max) max = (prices[j] - prices[i]);
        }
       } 
       return max;
    }
};

int main(){
    
    return 0;
}