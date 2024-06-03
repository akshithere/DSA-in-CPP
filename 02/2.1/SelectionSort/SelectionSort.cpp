#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
void selectionSort(int arr[], int size){

for(int i = 0; i < size-1; i++){
    int minIndex = i;
    for(int j = i+1; j < size; j++){
        
        if(arr[j] < arr[minIndex]){
            minIndex = j;
        }
        
    }
    
    if(minIndex != i){
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    
    
}
}
int main(){
 int arr[10] = {10,9,8,7,6,5,4,3,2,1};
 int size = sizeof(arr)/sizeof(arr[0]);
selectionSort(arr,size);
cout << "After sorting the array using selection sort, \n";
for(int i : arr){
    cout << i << "\n";
}
 return 0;
}