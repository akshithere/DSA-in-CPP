#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>

using namespace std;
vector <int> findUnion(int arr1[],int arr2[],int n, int m){
map<int,int> freq;
vector<int> Union;
for(int i = 0; i < n; i++){
    freq[arr1[i]]++;
}
for(int i = 0; i < m; i++){
    freq[arr2[i]]++;
}
for(pair<int,int> it : freq){
    Union.push_back(it.first);
}
return Union;

}
int main(){
   int arr1[] = {1,2,3,4,5,6};
   int arr2[] = {4,5,6,7,8};
   int n = 6;
   int m = 5; 

   vector<int> Union = findUnion(arr1,arr2,n,m);
   cout << "After finding the union of two arrays: \n";
   for(int i : Union){
    cout << i << " ";
   }

 return 0;
}