#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
void moveZeroes(int arr[], int n){
    int j;
    for(int k = 0; k < n; k++){
        if(arr[k] != 0) continue;
        j = k;
        break;
    }
    for(int i = j+1; i < n; i++){
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }
    // TC -> O(N), SC -> O(1)
}
int main(){
    int arr[] = {1,2,3,0,23,0,1,2,4,0,0,0,12,3,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Before moving the zeroes to the end \n";
    for(auto i : arr){
        cout << i << " ";
    }
    moveZeroes(arr,n);
    cout << "\nAfter moving the zeroes to the end \n";
    for(auto i : arr){
        cout << i << " ";
    }
 return 0;
}