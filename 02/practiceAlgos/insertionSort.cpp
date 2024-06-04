#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void insertionSort(int arr[],int n){
for(int i = 1; i < n; i++){
    int j = i;
    while(j > 0 && arr[j-1]>arr[j]){
        swap(arr[j],arr[j-1]);
        j--;
    }
}
}
int main(){
    // insertion sort goes something like ki yaar peeche peeche dekhna hao
    int arr[] = {7,4,6,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    cout << "After sorting the array with insertion Sort: \n";
    for(int i : arr){
        cout << i << " ";
    }
    return 0;
}