#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int findSecondLargestBrute(int arr[], int n){ 
    // Time Complexity-> O(N Log N) + O(N) at the worst case
    // because if the array is something like [1,7,7,7,7,7] i might have to traverse the whole array
    
sort(arr,arr+n);
int max = arr[n-1];
int secondMax = INT_MIN;
for(int i = n-2; i >= 0; i--){
if(arr[i] == max) continue;
secondMax = arr[i];
break;
}
return (secondMax == INT_MIN ? -1 : secondMax );

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
    cout << "The second largest element found by brute force is: " << findSecondLargestBrute(arr, n) << "\n";
 return 0;
}