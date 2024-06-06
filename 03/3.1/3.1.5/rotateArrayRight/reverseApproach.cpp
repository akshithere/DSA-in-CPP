#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
void rotateArray(int arr[], int k, int n){
    // reverse the ending k elements
    // reverse starting n-k elements
    // reverse the whole array;
    reverse(arr,arr + n - k);
    reverse(&arr[n-k],&arr[n]);
    reverse(arr,arr+n);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int k = 4;
    rotateArray(arr,k,8);
    cout << "After rotating the array to the right by k places: \n";
    for(int i : arr){
        cout << i << " ";
    } 
 return 0;
}