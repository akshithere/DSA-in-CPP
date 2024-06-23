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
        int x;
        int y;
        int a = 0;
        int b = 0;
        for(int i = 0; i < customers.size(); i++){
            if(grumpy[i] == 0){
                satisfied += customers[i];
            }
        }
        int mover = 0;
        int flag = 0;
        for(int i = 0; i < customers.size(); i++){
            if(grumpy[mover] == 0){
                mover++;
                if(flag!=1)flag++;
                continue;
            }else{
               flag = i; 
            }
            mover++;
            int maxi = -1;
            int sum;
            if((mover-flag)+1 == minutes){
                sum = 0;
                x = flag;
                y = mover;
                while(x <= y){
                    sum+= customers[x];
                    x++;
                }
                if(sum>maxi){
                    maxi = sum;
                    a = flag; b = mover;
                }
            }
            
        }
        for(int i = a; i <= b; i++){
            if(grumpy[i]==1) satisfied += customers[i];
        }
        return satisfied;
    }
};

int main(){
    
    return 0;
}