// Take a set usme daal do sorted array with duplicates, it will automatically remove the duplicates
#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<set>
using namespace std;

int main(){
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    set<int>s;
    for(int i = 0; i < n; i++){
        s.emplace(arr[i]);
    }
     cout << s.size();
 return 0;
}