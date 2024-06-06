#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int findSecondLargest(int arr[], int n){ 
    
    // O(N) + O(N) ->  O(2N) 
    // dropping constant factors
    // TC -> O(N)

    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(max < arr[i]) max = arr[i];
    }
    int secondLargest = INT_MIN;
    for(int j = 0; j < n; j++){
        if(secondLargest < arr[j] && max > arr[j]){
            secondLargest = arr[j];
        }
    }
    return secondLargest;
}
// finding second largest element in the array
int main(){
    int n;
    cout << "Enter the size of the array \n";
    cin >> n;
    int arr[n];
    cout << "Enter the values of element\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "The second largest element found by brute force is: " << findSecondLargest(arr, n) << "\n";
 return 0;
}