#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
void dnf(vector<int> &arr,int n){
    int low = 0;
    int high = n-1;
    int mid = 0;
    while(mid <= high){
        // cout << "I am inside while loop \n";
        if(arr[mid] == 0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    vector<int> arr = {0,1,1,2,1,0,0,2,1,1,2,1,0};
    cout << "Array before sorting it with the dnf algorithm \n";
    for(int i : arr){
        cout  << i << " ";
    }
    dnf(arr,arr.size());

    cout << "\nArray after sorting it with the dnf algorithm \n";
    for(int i : arr){
        cout  << i << " ";
    }

    return 0;
}