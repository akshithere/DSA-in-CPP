#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        int x = 0;
        int y = minutes-1;
        int a;
        int b;
        int sum = 0;
        int maxi = -1;
        int p = 0; int q = 0;
        
           while(y<n){
             a = x; b = y;
             sum = 0;
            while(a <= b){
                
                if(grumpy[a] == 1){
                    sum += customers[a];
                }
                a++;
            }
            if(sum>maxi){
                    maxi = sum;
                    p = x;
                    q = y;
                }
            x++; y++;
           }
           for(int i = p; i <= q; i++){
            grumpy[i] = 0;
           }
           int satisfied = 0;
           for(int i = 0; i < n; i++){
            if(grumpy[i]==0) satisfied+=customers[i];
           }
           return satisfied;
        
    }
};

int main(){
    
    return 0;
}