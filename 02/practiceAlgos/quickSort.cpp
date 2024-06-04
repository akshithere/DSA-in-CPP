#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void quickSort(int arr[],int low, int high){
    if(low >= high) return;
    int left = low+1;
    int right = high;
    int pivot = arr[low];
    while(left <= right){
        while(left <= right && arr[left] < pivot){
            left++;
        }
        while(left <= right && arr[right] > pivot){
            right--;
        }
        if(left <= right){
            swap(arr[left],arr[right]);
        }
    }
    // vo toh merge mein tha na ki agar koi array exhaust hojaye while merging both subarrays  
    // just directly add them
    // Now its time that ki right has crossed and there is a need to swap the pivot and right
    swap(arr[right],arr[low]);
    quickSort(arr,low,right-1);
    quickSort(arr,right+1,high);
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
        quickSort(arr,0,n-1);

        cout << "After sorting you array using quick sort \n";
        for(auto i: arr){
            cout << i << " ";
        }
 return 0;
}