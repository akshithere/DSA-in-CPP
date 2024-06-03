#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    int left = low;
    int right = mid+1;
    vector<int>v;
    while(left <= mid && right <= high){
        if(arr[left] < arr[right]){
            v.push_back(arr[left]);
            left++;
        }
        else{
            v.push_back(arr[right]);
            right++;
        }
}
        // if right subarray was echausted and any more element is left at the left sub array
        // then directly push those elements
        while(left <= mid){
            v.push_back(arr[left]);
            left++;
        }
        // if anymore element was left on the right subarray
        // and we have to push the remaining elements right away
        while(right <= high){
            v.push_back(arr[right]);
            right++;
        }
        // copying the sorted temporary vector elements to the og array that we had
        for(int i = low; i <= high; i++){
            // the temporary vector isnt followint the indexing, it is getting created again for every
            // time this merge function is called
            arr[i] = v[i-low];
        } 
    }


void mergeSort(int arr[], int low, int high){
    if(low >= high) return;
    // single element array ban chuka hai
    int mid = (low + high)/2;
    // sab left vale sort karne hai
    mergeSort(arr,low,mid);
    // sab right vale sorted hai
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
  int arr[] = {10,9,8,7,6,5,4,3,2,1};
int n = sizeof(arr)/sizeof(arr[0]);
mergeSort(arr,0,n-1);
cout << "After merge sorting the array \n";
for(auto i:arr){
    cout << i << "\n";
}
 return 0;
}
// Recursion is used pehle toh ek jata hai to divide all the left part
// second time to divide the right part till its singleton
// thirdly we merge them by playing with the index

