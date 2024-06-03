#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int didSwap = 0;
        // n - i - 1 issliye kiya kyuki comparison mai second last element pe khada hoke lhatam kar dunga
        // with arr[j] > arr[j-1] right? once i am at 10 - 0 - 1 = 9, toh maine first iteration mein
        // pure array elements se compare kar diya
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0) break;
    }
}
// Now to optimise it further so that ki agar mujhe sala array hi optimised milta hai so will
// i go on forever till O(N^2) still? nah. The very iteration where no swaps happerned means that the 
// array is indeed in the correct order so i will break out of the array
int main(){
   int arr[] = {10,9,8,7,6,5,4,3,2,1}; 
   int n = sizeof(arr)/sizeof(arr[0]);
   bubbleSort(arr,n);
   cout << "The array after bubble sorting it \n";
   for(int i = 0; i < n; i++){
    cout << arr[i] << "\n";
   }
 return 0;
}