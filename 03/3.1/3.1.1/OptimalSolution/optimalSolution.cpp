#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>

using namespace std;

int findMaxUsingBruteForce(int arr[],int n){
sort(arr,arr+n);
return arr[n-1];
// Brute Force becuase it iternally take O(N Log N) to sort

}
int findMaxOptimally(int arr[], int n){
    // Optimal because it only uses an loop so it takes a TC of 
    // O(n)
    int max = arr[0];
    for(int i = 0; i < n ; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;

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
    cout << "The maximum element found by brute force is: " << findMaxOptimally(arr, n) << "\n";
 return 0;
}