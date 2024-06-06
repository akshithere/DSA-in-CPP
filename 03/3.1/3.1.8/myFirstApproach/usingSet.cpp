#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<set>
using namespace std;
vector<int> findUnion(int arr1[],int arr2[],int n, int m){
    set<int>s;
    
    for(int i = 0; i < n; i++){
        s.insert(arr1[i]);
        
    }
    for(int i = 0; i < m; i++){
        
         s.insert(arr2[i]);

    }
    vector<int> Union;
    for(int i : s){
        Union.push_back(i);
    }
    return Union;
//    static int arr[];
    // return arr;
}
int main(){
   int arr1[] = {1,2,3,4,5,6};
   int arr2[] = {4,5,6,7,8};
   int n = 6;
   int m = 5; 
   vector<int>Union = findUnion(arr1,arr2,n,m);
   for(int i : Union){
    cout << i << " ";
   }

 return 0;
}