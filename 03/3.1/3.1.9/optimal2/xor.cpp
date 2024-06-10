#include<iostream>
#include<bits/stdc++.h>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;

int missingNumber(vector<int>&arr, int N) {
    // Write your code here.
    // How can i optimise the code with xor
    // 1^2^3^4^5^6
    // 1^2^3^4  ^6
    int xor1 = 0;
    int xor2 = 0;
    for(int i = 0; i < arr.size(); i++){
        xor2 ^= arr[i];
        xor1 = xor1 ^ (i+1);
    }
    xor1 = xor1 ^ N;
    return xor1 ^ xor2;
}

// It has better space complexity than the summation method this is because when we do summation
// we get summation greater than the N itself so we might need to store the summation in an
// long long instead of the integer datatype 
// But in case of the xor method it never really excedes the N itself so its slightly better

int main(){
    vector<int> arr = {1,2,3,4,6};
    int N = 6;
    cout << "The missing number is: " << missingNumber(arr,N) << "\n";
    return 0;
}