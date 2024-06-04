#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
void bubbleSort(int arr[], int i,int j, int n, bool swapped = true){
if(i >= n-1 || !swapped) return;
if(j >= n-i-1) return; 
swapped = false;
if(arr[j+1] < arr[j]){
    swap(arr[j+1],arr[j]);
    swapped = true;
}

bubbleSort(arr,i,j+1,n);
bubbleSort(arr,i+1,0,n,swapped);

}
int main(){
    int arr[] = {5,2,6,1,3};
    int n = 5;
    bubbleSort(arr,0,0,n);
    cout << "After recursively bubble sorting the array: \n";
    for(auto i : arr){
        cout << i << " ";
    }
    return 0;
}