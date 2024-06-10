#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
#include<unordered_map>

int getSingleElement(vector<int> &arr){
	// Write your code here.
	unordered_map<int,int> um;
	for(int i = 0; i < arr.size(); i++){
		um[arr[i]]++;
	}	
	for(int j = 0; j < arr.size(); j++){
		if(um[arr[j]] < 2) return arr[j];
	}
	// TC -> O(2N) SC-> O(N)
	return -1;
}
int main(){
    vector<int>arr = {1,1,2,2,3,4,4};
    cout << "The single element is " << getSingleElement(arr);
 return 0;
}