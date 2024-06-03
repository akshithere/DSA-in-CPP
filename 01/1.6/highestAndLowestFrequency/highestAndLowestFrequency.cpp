#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

// unordered map lunga array hoga user se liya hoga aur usse pre compute karke ek map bnaunga aur bas
// at the end of the day highes and lowest frequencies calculate kar lunga

int main(){
 int ch = 0;
 int size;
 cout << "Enter the size of your array: \n";
 cin >> size;
 int arr[size];
 unordered_map<int,int>um;
 cout << "Enter the elements\n";
 for(int i = 0; i < size; i++){
    cin >> arr[i];
    um[arr[i]]++;
 }
 pair<int,int>max = {arr[0],um[arr[0]]};
 pair<int,int>min = {arr[0],um[arr[0]]};
 for(int i = 0; i < size; i++){
    int currentFq = um[arr[i]];
    if(currentFq > max.second){
        max.first = arr[i];
        max.second = um[arr[i]];
    }
    if(currentFq < min.second){
        min.first = arr[i];
        min.second = um[arr[i]];
    }
 }

cout << "The maximum element is \n";
cout << max.first << "->" << max.second << endl;
cout << "The minimum element is \n";
cout << min.first << "->" << min.second << endl;

 return 0;
}