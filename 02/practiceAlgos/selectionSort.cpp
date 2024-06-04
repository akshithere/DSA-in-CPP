#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
// Selection Sort index se khelti hai to find the correct index at every iteration rather than the value
// itself
void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int minIndex = i;
    for(int j = i; j < n; j++){
        if(arr[j] < arr[minIndex]){
            minIndex = j;
            
            }
        }
        swap(arr[i],arr[minIndex]);
    
        }  
}
int main(){
  int arr[] = {6,4,8,2,1};
  int n = 5;
  selectionSort(arr,n);
  for(auto i : arr){
    cout << i << " ";
  }
 return 0;
}