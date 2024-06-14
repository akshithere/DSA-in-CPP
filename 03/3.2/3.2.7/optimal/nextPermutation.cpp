#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A) {
    // Write your code here.
    int index = -1;
    int n = A.size();
    for(int i = n-2; i >= 0; i--){
        if(A[i] < A[i+1]){
            index = i;
            break;
        }
    }
    if (index == -1) {
        reverse(A.begin(),A.end());
        return A;
    }
    for(int j = n-1; j > index; j--){
        if (A[j] > A[index]) {
            swap(A[j], A[index]);
        break;
        }
    }
    reverse(&(A[index+1]),&(A[n]));
    return A;
}

int main(){
    
    return 0;
}