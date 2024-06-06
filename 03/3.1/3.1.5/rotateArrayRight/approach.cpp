#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void rotateArray(int arr[], int k, int n){
// copy the k elements from backside kyuki right se vahi aage aayenge
vector<int>temp;
for(int i = n-k; i < n; i++) {
temp.emplace_back(arr[i]);
}
// shifting the array front side elements;
for(int i = n-k-1; i >= 0; i--){
    arr[i+k] = arr[i];
}
// again pasting the copied elements which will come in front
for(int i = 0; i < k; i++){
    arr[i] = temp[i];
}
}
int main(){
   int arr[] = {1,2,3,4,5,6,7,8};
   int k = 3;
   rotateArray(arr,k,8);
   cout << "After rotating the elements of the array: \n";
   for(auto i : arr){
    cout << i << " ";
   }
 return 0;
}