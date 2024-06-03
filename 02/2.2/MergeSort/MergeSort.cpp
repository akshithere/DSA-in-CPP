#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void merge(int arr[], int low, int mid, int high){
    vector<int>temp = {};
    // i initialised left and right pointers as the value but not the indices
    int left = low;
    int right = mid+1;
    // i had error in loop condition
    // temp khali hoga har iteration mein ab mai aaya hu yaha toh 0 base indexinng se temp start hoga
    // usko access karne ke liye in future i had to do temp[i-low]

    // point to be rememered ki temporary jo hai vo har iteration pe naya bnega ab usko arr ke correct
    // position se map karne ke liye for loop mein conditions lagani hogi jo ki can be understood with 
    // the below dry run

    /*
    
    */
    while(left <= mid && right <= high){
        if(arr[left] < arr[right]){
            temp.emplace_back(arr[left]);
            left++;
        }else{
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.emplace_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.emplace_back(arr[right]);
        right++;
    }
    // copying the sorted vector to the orignal array;
    for(int i = low; i <= high; i++){
        arr[i] = temp[i-low];
    }
}
void mergeSort(int arr[], int low, int high){
    if(low >= high) return;
    int mid = (low+high)/2;
    mergeSort(arr,0,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,n-1);
    cout << "After merge sorting the array: \n";
    for(int i:arr){
        cout << i << endl;
    } 
 return 0;
}