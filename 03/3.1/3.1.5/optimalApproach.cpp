// we observe that if we want to rotate an array to the left by k places 
// we can just first reverse the array upto k then k+1 to n
// then ultimately reverse the whole array

// This approach takes slighly more TC but space complextiy wise its constant as there is no need 
// for temporary vector

#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void rotateArray(vector<int> &arr, int k, int n){
    // remember usually STL functions have second member as exclusive
    reverse(&arr[0],&arr[k]);
    reverse(&arr[k],&arr[n]);
    reverse(&arr[0],&arr[n]);
}

int main(){
     vector<int>arr = {1,2,3,4,5,6};
 int k = 3;
 rotateArray(arr,k,arr.size());
for(auto i : arr){
    cout << i << " ";
}
return 0;
}
