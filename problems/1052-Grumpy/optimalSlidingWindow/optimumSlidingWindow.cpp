#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int satisfied = 0;
        int n = customers.size();
        for(int i = 0; i < n; i++){
            if(grumpy[i]==0) satisfied+=customers[i];
        }
        int additionalSatisfied = 0;
        for(int i = 0; i < minutes; i++){
            if(grumpy[i]==1) additionalSatisfied += customers[i];
        }
        int maximumSatisfied = additionalSatisfied;
        for(int i = minutes; i < n; i++){
            if(grumpy[i-minutes]== 1){
                 additionalSatisfied -= customers[i-minutes];
            }else if(grumpy[i-minutes]==0){
                
            }
            if(grumpy[i]==1) additionalSatisfied += customers[i];
            maximumSatisfied = max(additionalSatisfied,maximumSatisfied);
        }
        return satisfied+maximumSatisfied;
    }
};

int main(){
    
    return 0;
}