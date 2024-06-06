#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int main(){
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {3,4,5,6,7,8};
    vector<int> Union;
    int n = 5;
    int m = 6;

    int i = 0;
    int j = 0;

while(i < n && j < m){
    if(arr1[i] <= arr2[j]){ // Case 1 and 2
        if(Union.size() == 0 || Union.back() != arr1[i]){
            Union.push_back(arr1[i]);
        }
        i++;
    }else{ // Case 3
        if(Union.size() == 0 || Union.back() != arr2[j]){
            Union.push_back(arr2[j]);
        }
        j++;
    }
}
while(i < n){
    if(Union.empty() || Union.back() != arr1[i]){
        Union.push_back(arr1[i]);
        
    }
    i++;
}
while(j < m){
    if(Union.empty() || Union.back() != arr2[j]){
        Union.push_back(arr2[j]);
    }
    j++;
   
}

cout << "After finding the Union Vector: It's elements are : \n";
    for(int i : Union){
        cout << i << " ";
    }

 return 0;

}