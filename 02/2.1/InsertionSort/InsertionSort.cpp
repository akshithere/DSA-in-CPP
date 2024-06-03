#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
void insertionSort(int arr[],int n){
 for(int i = 0; i <= n-1; i++){
    int j = i;
    while(j > 0 && arr[j-1] > arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
    }
 }   
}
int main(){
 int arr[] = {5,4,3,2,1};
 int n = sizeof(arr)/sizeof(arr[0]);  

 insertionSort(arr,n);
 cout << "After insertion sorting: " << "\n";
 for(auto i:arr){
    cout << i << "\n";
 }
 return 0;
}