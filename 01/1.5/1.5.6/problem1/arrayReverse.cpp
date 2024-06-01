#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
void reverseArray(int arr[],int l,int r){
//swap
if(l >= r) return;
int temp = arr[l];
arr[l] = arr[r];
arr[r] = temp;
reverseArray(arr,l+1,r-1);
}
int main(){
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};  
  int size = sizeof(arr)/sizeof(arr[0]);
  reverseArray(arr,0,size-1);
cout << "Iterating over the reversed array: \n"; 
  for(int i = 0; i < size; i++){
    cout << arr[i] << "\n";
  }
 return 0;
}