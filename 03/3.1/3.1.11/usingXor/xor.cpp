#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int getSingleElement(vector<int> &arr){
	// Write your code here.
	int xr = 0;

	for(int i = 0; i < arr.size(); i++){
		xr ^= arr[i];
		// every same element will be clubbed to zero
		// and the only distinct element will get stored 
		// in the xr after iteration
	}
	// TC -> O(N) SC-> O(1)
	return xr;	
}
int main(){
    vector<int>arr = {1,1,2,2,3,4,4};
    cout << "The single element is " << getSingleElement(arr);
    return 0;
}