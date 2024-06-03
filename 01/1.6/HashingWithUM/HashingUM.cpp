#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
 unordered_map<int,int>um;
// here key is basically the array element and the value is representing the frequency
int arr[] = {1,23,212,2,3,4,4,4,0,69,12};
int size = sizeof(arr)/sizeof(arr[0]);
for(int i = 0; i < size; i++){
    um[arr[i]]++;
}

int q;
cout << "Enter the number of queries you wanna ask: \n";
cin >> q;
while(q--){
    int i;
    cout << "Enter the number whose frequency you wanna check: \n";
    cin >> i;
    cout << "The frequency of " << i << " is " << um[i] << " times :) \n";
}
 return 0;
}