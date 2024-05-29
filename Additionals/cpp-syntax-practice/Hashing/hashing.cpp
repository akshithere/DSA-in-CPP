/*
Given an array of integers: [1, 2, 1, 3, 2] and we are given some queries: [1, 3, 4, 2, 10].
 For each query, we need to find out how many times the number appears in the array.
 For example, if the query is 1 our answer would be 2, and if the query is 4 the answer will be 0. 
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,1,3,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    int hash[4] = {0};
    //pre compute
    for(int i=0; i<size;i++){
            int value = arr[i];
            if(value < 4){
                hash[value] += 1;
            }else{
                cout << "Value Out of Bounds. " << endl;
            }
           
        }

    cout << "Iterating the hash array" <<endl;
    for(int j=0;j<4;j++){
        cout << hash[j] << endl;
    }
}