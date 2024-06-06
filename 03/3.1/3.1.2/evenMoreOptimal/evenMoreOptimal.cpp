#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int secondMinimum(int arr[], int n){
    int min = INT_MAX;
    int secondMin = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < min){
            secondMin = min;
            min = arr[i];
        } else if (arr[i] > min && secondMin > arr[i])
        {
            secondMin = arr[i];
        }
    }
    return secondMin;
}
int evenMoreOptimal(int arr[], int n){ 
    // TC -> O(N)
    int max = INT_MIN;
    int secondMax = INT_MIN;

for(int i = 0; i < n; i++){
    if(arr[i] > max){
        secondMax = max;
        max = arr[i];
    }else if (arr[i] < max && arr[i] > secondMax)
    {
        secondMax = arr[i];
    }
}
return secondMax;
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
    cout << "The second min element found by optimal sol is: " << secondMinimum(arr, n) << "\n";
 return 0;
}