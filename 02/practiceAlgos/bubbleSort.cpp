#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
void bubbleSort(int arr[],int n){
for(int i = 0; i < n-1; i++){
    // agar koi bhi iteration aisi chali gyi jaha swaps nhi hue toh bhai aage bhi need nhi hai
    // kyuki vo ussi ke through jake aaya haina? if(arr[j+1] < arr[j])
    for(int j = 0; j < n-i-1; j++){
        if(arr[j+1] < arr[j]){
            swap(arr[j+1],arr[j]);
        }
    }
}
}
int main(){
 int arr[] = {7,3,4,5,1};
 int n = 5;
 bubbleSort(arr,n);
 cout << "After sorting the array with bubble sort: \n";
 for(int i:arr){
    cout << i << " ";
 }   
return 0;
}