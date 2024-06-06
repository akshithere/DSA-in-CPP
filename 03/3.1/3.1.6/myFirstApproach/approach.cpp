#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
void removeZeroes(int arr[],int n){
    // Remove zeroes using the two pointer 
    
    // int count = 0;
    int j;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){ arr[0] = arr[i]; j = i; arr[i] = 0; break;}
        else continue;
    }
int p1 = 0;
for(j; j < n; j++){
if(arr[j] == 0){ // count++;
continue;
}
if(arr[j-1] == 0){
arr[p1+1] = arr[j];
arr[j] = 0;
p1++;
}else{
    p1++;
}

}

}
int main(){
    int arr[] = {0,0,0,0,1,2,4,3,0,1,4,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    removeZeroes(arr, n);
    cout << "Array after removing the zeroes is: " << endl;
    for(auto i : arr){
        cout << i << " ";
    }
 return 0;
}