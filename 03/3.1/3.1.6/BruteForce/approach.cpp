#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
void removeZeroes(int arr[],int n){
vector<int> temp;
// copying all the non zero elements in the temporary vector
for(int i = 0; i < n; i++){
    if(arr[i] == 0) continue;
    temp.emplace_back(arr[i]); 
}
for(int i = 0;  i < temp.size(); i++){
    arr[i] = temp[i];
}
// copying everything from temp to arr
for(int i = temp.size(); i < n; i++){
    arr[i] = 0;
}
}
int main(){
  int arr[] = {1,2,0,3,0,1,4,0,1,5}  ;
  int n = sizeof(arr)/sizeof(arr[0]);
  removeZeroes(arr,n);
  cout << "After moving the zeros to the end, the array is \n";
  for(int i : arr){
    cout << i << " ";
  }
    return 0;
}