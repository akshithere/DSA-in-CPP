#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
int consecutiveOnes(vector<int>& arr){
    //Write your code here.
    int count = 0;
    int max = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0){
            count = 0;
            continue;
        } 
        count++;
        if(count > max) max = count;
    }
    return max;
}
int main(){
    vector<int>arr = {1,1,0,1,1,1,0,0,1,1};
    cout << "The maximum consecutive ones is: " << consecutiveOnes(arr);
 return 0;
}