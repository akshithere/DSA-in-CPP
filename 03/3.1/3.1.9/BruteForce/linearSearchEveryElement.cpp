#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int findMissing(int arr[],int n){

for(int i = 1; i <= n; i++){
    // cout << "Iteration number: " << i << "\n";
    int doesExist = 0;
    for(int j = 0; j < n; j++){
        if(arr[j] == i){
             doesExist = 1;
             continue;
        };
    }
    if(doesExist == 0) return i;
}
return -1;
}
int main(){
    int arr[] = {2, 19, 10, 1, 5, 3,
     13, 18, 24, 23, 9, 22, 28, 25, 6, 27, 4, 20, 21, 26, 11, 8, 17, 15, 16, 12, 7, 14};
     int n = 29;
     
     cout << "The missing number is: " << findMissing(arr,n) << "\n";
 return 0;
}