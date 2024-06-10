#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int getSingleElement(vector<int> &arr){
    int count;
    for(int i = 0; i < arr.size(); i++){
        count = 0;
        for(int j = 0; j < arr.size(); j++){
            if(arr[i] == arr[j]) count ++;
        }
        if(count == 2) continue;
        else return arr[i];
    }
}
int main(){
    vector<int>arr = {1,1,2,2,3,4,4};
    cout << "The single element is " << getSingleElement(arr);
    return 0;
}