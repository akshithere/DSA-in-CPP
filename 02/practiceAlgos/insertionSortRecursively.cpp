#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
void insertionSort(int arr[], int i, int n){
if(i >= n) return;
int j = i;
while(j > 0 && arr[j-1] > arr[j]){
    swap(arr[j-1],arr[j]);
    j--;
}
insertionSort(arr,i+1,n);

}
int main(){
    // same elements vale array pe bhi performance check karni hai
    int arr[] = {6,3,7,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,0,n);
    cout << "After recursively sorting it with insertion sort \n";
    for(auto i : arr){
        cout << i << " ";;
    }
 return 0;
}