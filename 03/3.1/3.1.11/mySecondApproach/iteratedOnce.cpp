#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int getSingleElement(vector<int> &arr){
	// Write your code here.
	int count = 0;
	int n =  arr.size();
	for(int i = 0; i < n; i++){
		if(count == 0){
			count++;
		}
		else{
			if(arr[i] == arr[i-1]){
				count = 0;
			}else{
				return arr[i-1];
			}
		}
	}
	return arr[n-1];
}
// The time complexity here should be O(N)
int main(){
        vector<int>arr = {1,1,2,2,3,4,4};
    cout << "The single element is " << getSingleElement(arr);
 return 0;
}