#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
void merge(int arr[], int low, int mid, int high){
int left = low;
int right = mid+1;
vector<int>temp;
while(left <= mid && right <= high){
if(arr[left] < arr[right]){
    temp.emplace_back(arr[left]);
    left++;
}else{
    temp.emplace_back(arr[right]);
    right++;
}

}
// array might be exhausted thats why they exited the while loop
while(left <= mid){
    temp.emplace_back(arr[left]);
    left++;
}
while(right  <= high){
    temp.emplace_back(arr[right]);
    right++;
}
// Time to copy the temporary vector to the og aray
for(int i = low; i <= high; i++){
    arr[i] = temp[i-low];
}
}

void mergeSort(int arr[],int low, int high){
    if(low >= high) return;
    int mid = (low+high)/2;

mergeSort(arr,low,mid);
mergeSort(arr,mid+1,high);
merge(arr,low,mid,high);
}
int main(){
    int n ;
    cout << "Enter the size of your array: \n";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of your array :) \n";
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        }
        mergeSort(arr,0,n-1);

        cout << "After sorting you array using merge sort \n";
        for(auto i: arr){
            cout << i << " ";
        }
 return 0;
}