#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>

using namespace std;

int findMaxUsingBruteForce(int arr[],int n){
sort(arr,arr+n);
return arr[n-1];
}

int main(){
    int n;
    cout << "Enter the size of the array \n";
    cin >> n;
    int arr[n];
    cout << "Enter the values of element\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "The maximum element found by brute force is: " << findMaxUsingBruteForce(arr, n) << "\n";
 return 0;
}